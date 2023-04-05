//const base = require('./grammar/base');
module.exports = grammar({
  name: "groovyscript",
  extras: ($) => [$.comment, /\s/],

  rules: {
    source_file: ($) => repeat($.command),

    block: ($) => seq($._command_unit, "{", repeat($.command), "}"),
    command: ($) => seq(repeat1($._command_unit), "\n"),
    _command_unit: ($) =>
      choice($.list, $.unit, $.operators, $.string, $.arg_spliter, $.block),
    // ---- split the args -----
    arg_spliter: ($) => ",",
    // ---- operators ---------
    operators: ($) => "=",
    // ----- unit ----------------
    unit: ($) => seq($._unit, repeat(seq(".", $._unit))),

    _unit: ($) => seq($.identifier, optional($.arg_block)),

    arg_block: ($) => seq("(", optional($._args), ")"),
    // ------------ string -------------
    string: ($) =>
      choice(
        seq(
          "'",
          optional(
            repeat(
              choice(token.immediate(prec(1, /[^'\\^@]+/)), $.escape_sequence)
            )
          ),
          "'"
        ),
        seq(
          '"',
          optional(
            repeat(
              choice(token.immediate(prec(1, /[^"\\^@]+/)), $.escape_sequence)
            )
          ),
          '"'
        )
      ),

    // ---------- list -----------------
    list: ($) => seq("[", optional($._args), "]"),

    _args: ($) =>
      seq(
        choice($.string, $.unit, $.list),
        repeat(seq($.arg_spliter, choice($.string, $.unit, $.list)))
      ),
    // NOTE: both boolean ,type, def and valuename
    // and fucntionname, is the base type
    identifier: (_) => /[A-Za-z_][A-Za-z0-9_]*/,
    escape_sequence: ($) =>
      token.immediate(
        seq(
          "\\",
          choice(
            /[^xu0-7]/,
            /[0-7]{1,3}/,
            /x[0-9a-fA-F]{2}/,
            /u[0-9a-fA-F]{4}/,
            /u{[0-9a-fA-F]+}/
          )
        )
      ),
    comment: (_) => token(seq("//", /[^\n]+/g)),
  },
});

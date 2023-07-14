//const base = require('./grammar/base');
module.exports = grammar({
  name: "groovy",
  extras: ($) => [$.line_comment, $.block_comment, /\s/],

  rules: {
    source_file: ($) => repeat($.command),

    block: ($) => seq($._command_unit, "{", repeat($.command), "}"),
    command: ($) => seq(repeat1($._command_unit), choice("\n", ";")),
    _command_unit: ($) =>
      choice(
        $.decorate,
        $.list,
        $.unit,
        $.operators,
        $.string,
        $.number,
        $.arg_spliter,
        $.block
      ),
    // ---- split the args -----
    arg_spliter: ($) => ",",
    // ---- leading_key -----
    leading_key: ($) => "$",
    // ---- operators ---------
    operators: ($) => choice("+=", "=", "-=", "+", "-", "~", "->"),

    // ----- unit ----------------
    unit: ($) => seq($._unit, repeat(seq(".", choice($._unit, $.string)))),

    decorate: ($) => seq("@", $.identifier),
    _unit: ($) => choice($.identifier, $.func),

    func: ($) => seq($.identifier, $.arg_block),

    arg_block: ($) => seq("(", optional($._args), ")"),
    // ------------ string -------------
    string: ($) =>
      choice(
        seq(
          "'",
          optional(
            repeat(
              choice(token.immediate(prec(1, /[^'\\]+/)), $.escape_sequence)
            )
          ),
          "'"
        ),
        seq(
          '"',
          optional(
            repeat(
              choice(
                token.immediate(prec(1, /[^"\\^$]+/)),
                $.escape_sequence,
                seq(
                  $.leading_key,
                  choice($.identifier, seq("{", $._command_unit, "}"))
                )
              )
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
        repeat(seq(optional($.arg_spliter), choice($.string, $.unit, $.list)))
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
    number: ($) => {
      const hex_literal = seq(choice("0x", "0X"), /[\da-fA-F](_?[\da-fA-F])*/);

      const decimal_digits = /\d(_?\d)*/;
      const signed_integer = seq(optional(choice("-", "+")), decimal_digits);
      const exponent_part = seq(choice("e", "E"), signed_integer);

      const binary_literal = seq(choice("0b", "0B"), /[0-1](_?[0-1])*/);

      const octal_literal = seq(choice("0o", "0O"), /[0-7](_?[0-7])*/);

      const bigint_literal = seq(
        choice(hex_literal, binary_literal, octal_literal, decimal_digits),
        "n"
      );

      const decimal_integer_literal = choice(
        "0",
        seq(
          optional("0"),
          /[1-9]/,
          optional(seq(optional("_"), decimal_digits))
        )
      );

      const decimal_literal = choice(
        seq(
          decimal_integer_literal,
          ".",
          optional(decimal_digits),
          optional(exponent_part)
        ),
        seq(".", decimal_digits, optional(exponent_part)),
        seq(decimal_integer_literal, exponent_part),
        seq(decimal_digits)
      );

      return token(
        choice(
          // TODO maybe better solution
          signed_integer,
          hex_literal,
          decimal_literal,
          binary_literal,
          octal_literal,
          bigint_literal
        )
      );
    },

    comment: ($) => choice($.line_comment, $.block_comment),

    line_comment: ($) => token(prec(0, seq("//", /[^\n]*/))),

    block_comment: ($) =>
      token(prec(0, seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"))),
  },
});

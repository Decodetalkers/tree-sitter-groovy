#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 77
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_LF = 3,
  anon_sym_SEMI = 4,
  sym_arg_spliter = 5,
  sym_leading_key = 6,
  anon_sym_PLUS_EQ = 7,
  anon_sym_EQ = 8,
  anon_sym_DASH_EQ = 9,
  anon_sym_PLUS = 10,
  anon_sym_DASH = 11,
  anon_sym_TILDE = 12,
  anon_sym_DASH_GT = 13,
  anon_sym_DOT = 14,
  anon_sym_AT = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_SQUOTE = 18,
  aux_sym_string_token1 = 19,
  anon_sym_DQUOTE = 20,
  aux_sym_string_token2 = 21,
  anon_sym_LBRACK = 22,
  anon_sym_RBRACK = 23,
  sym_identifier = 24,
  sym_escape_sequence = 25,
  sym_number = 26,
  sym_comment = 27,
  sym_source_file = 28,
  sym_block = 29,
  sym_command = 30,
  sym__command_unit = 31,
  sym_operators = 32,
  sym_unit = 33,
  sym_decorate = 34,
  sym__unit = 35,
  sym_func = 36,
  sym_arg_block = 37,
  sym_string = 38,
  sym_list = 39,
  sym__args = 40,
  aux_sym_source_file_repeat1 = 41,
  aux_sym_command_repeat1 = 42,
  aux_sym_unit_repeat1 = 43,
  aux_sym_string_repeat1 = 44,
  aux_sym_string_repeat2 = 45,
  aux_sym__args_repeat1 = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [sym_arg_spliter] = "arg_spliter",
  [sym_leading_key] = "leading_key",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_EQ] = "=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_TILDE] = "~",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_DOT] = ".",
  [anon_sym_AT] = "@",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_identifier] = "identifier",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_block] = "block",
  [sym_command] = "command",
  [sym__command_unit] = "_command_unit",
  [sym_operators] = "operators",
  [sym_unit] = "unit",
  [sym_decorate] = "decorate",
  [sym__unit] = "_unit",
  [sym_func] = "func",
  [sym_arg_block] = "arg_block",
  [sym_string] = "string",
  [sym_list] = "list",
  [sym__args] = "_args",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_unit_repeat1] = "unit_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym__args_repeat1] = "_args_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_arg_spliter] = sym_arg_spliter,
  [sym_leading_key] = sym_leading_key,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_identifier] = sym_identifier,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_block] = sym_block,
  [sym_command] = sym_command,
  [sym__command_unit] = sym__command_unit,
  [sym_operators] = sym_operators,
  [sym_unit] = sym_unit,
  [sym_decorate] = sym_decorate,
  [sym__unit] = sym__unit,
  [sym_func] = sym_func,
  [sym_arg_block] = sym_arg_block,
  [sym_string] = sym_string,
  [sym_list] = sym_list,
  [sym__args] = sym__args,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_unit_repeat1] = aux_sym_unit_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym__args_repeat1] = aux_sym__args_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_arg_spliter] = {
    .visible = true,
    .named = true,
  },
  [sym_leading_key] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym__command_unit] = {
    .visible = false,
    .named = true,
  },
  [sym_operators] = {
    .visible = true,
    .named = true,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_decorate] = {
    .visible = true,
    .named = true,
  },
  [sym__unit] = {
    .visible = false,
    .named = true,
  },
  [sym_func] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_block] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym__args] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__args_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 11,
  [33] = 33,
  [34] = 34,
  [35] = 13,
  [36] = 12,
  [37] = 34,
  [38] = 14,
  [39] = 33,
  [40] = 20,
  [41] = 16,
  [42] = 17,
  [43] = 18,
  [44] = 19,
  [45] = 15,
  [46] = 21,
  [47] = 47,
  [48] = 25,
  [49] = 49,
  [50] = 50,
  [51] = 50,
  [52] = 52,
  [53] = 53,
  [54] = 52,
  [55] = 53,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 59,
  [61] = 57,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 27,
  [66] = 23,
  [67] = 24,
  [68] = 22,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 71,
  [74] = 70,
  [75] = 75,
  [76] = 75,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '+') ADVANCE(32);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(57);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '~') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == '+') ADVANCE(32);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(57);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '~') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '^') ADVANCE(49);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 'u') ADVANCE(6);
      if (lookahead == 'x') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(55);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 6:
      if (lookahead == '{') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == '}') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 9:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(59);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(60);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '+') ADVANCE(32);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(57);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '~') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_arg_spliter);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_leading_key);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '>') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(54);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(9);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(10);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(16);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(56);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_arg_spliter] = ACTIONS(1),
    [sym_leading_key] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(72),
    [sym_block] = STATE(26),
    [sym_command] = STATE(7),
    [sym__command_unit] = STATE(26),
    [sym_operators] = STATE(26),
    [sym_unit] = STATE(26),
    [sym_decorate] = STATE(26),
    [sym__unit] = STATE(14),
    [sym_func] = STATE(14),
    [sym_string] = STATE(26),
    [sym_list] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym_command_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_arg_spliter] = ACTIONS(7),
    [anon_sym_PLUS_EQ] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_DASH_EQ] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_DASH_GT] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_block] = STATE(26),
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(26),
    [sym_operators] = STATE(26),
    [sym_unit] = STATE(26),
    [sym_decorate] = STATE(26),
    [sym__unit] = STATE(14),
    [sym_func] = STATE(14),
    [sym_string] = STATE(26),
    [sym_list] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(23),
    [sym_arg_spliter] = ACTIONS(25),
    [anon_sym_PLUS_EQ] = ACTIONS(28),
    [anon_sym_EQ] = ACTIONS(28),
    [anon_sym_DASH_EQ] = ACTIONS(28),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(28),
    [anon_sym_DASH_GT] = ACTIONS(28),
    [anon_sym_AT] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(40),
    [anon_sym_LBRACK] = ACTIONS(43),
    [sym_identifier] = ACTIONS(46),
    [sym_number] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_block] = STATE(26),
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(26),
    [sym_operators] = STATE(26),
    [sym_unit] = STATE(26),
    [sym_decorate] = STATE(26),
    [sym__unit] = STATE(14),
    [sym_func] = STATE(14),
    [sym_string] = STATE(26),
    [sym_list] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(9),
    [anon_sym_RBRACE] = ACTIONS(49),
    [sym_arg_spliter] = ACTIONS(7),
    [anon_sym_PLUS_EQ] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_DASH_EQ] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_DASH_GT] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_block] = STATE(26),
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(26),
    [sym_operators] = STATE(26),
    [sym_unit] = STATE(26),
    [sym_decorate] = STATE(26),
    [sym__unit] = STATE(14),
    [sym_func] = STATE(14),
    [sym_string] = STATE(26),
    [sym_list] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(9),
    [anon_sym_RBRACE] = ACTIONS(51),
    [sym_arg_spliter] = ACTIONS(7),
    [anon_sym_PLUS_EQ] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_DASH_EQ] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_DASH_GT] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_block] = STATE(26),
    [sym_command] = STATE(4),
    [sym__command_unit] = STATE(26),
    [sym_operators] = STATE(26),
    [sym_unit] = STATE(26),
    [sym_decorate] = STATE(26),
    [sym__unit] = STATE(14),
    [sym_func] = STATE(14),
    [sym_string] = STATE(26),
    [sym_list] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(4),
    [aux_sym_command_repeat1] = STATE(9),
    [anon_sym_RBRACE] = ACTIONS(53),
    [sym_arg_spliter] = ACTIONS(7),
    [anon_sym_PLUS_EQ] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_DASH_EQ] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_DASH_GT] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_block] = STATE(26),
    [sym_command] = STATE(3),
    [sym__command_unit] = STATE(26),
    [sym_operators] = STATE(26),
    [sym_unit] = STATE(26),
    [sym_decorate] = STATE(26),
    [sym__unit] = STATE(14),
    [sym_func] = STATE(14),
    [sym_string] = STATE(26),
    [sym_list] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_command_repeat1] = STATE(9),
    [anon_sym_RBRACE] = ACTIONS(55),
    [sym_arg_spliter] = ACTIONS(7),
    [anon_sym_PLUS_EQ] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_DASH_EQ] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_DASH_GT] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_block] = STATE(26),
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(26),
    [sym_operators] = STATE(26),
    [sym_unit] = STATE(26),
    [sym_decorate] = STATE(26),
    [sym__unit] = STATE(14),
    [sym_func] = STATE(14),
    [sym_string] = STATE(26),
    [sym_list] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym_arg_spliter] = ACTIONS(7),
    [anon_sym_PLUS_EQ] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_DASH_EQ] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_DASH_GT] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_block] = STATE(26),
    [sym__command_unit] = STATE(26),
    [sym_operators] = STATE(26),
    [sym_unit] = STATE(26),
    [sym_decorate] = STATE(26),
    [sym__unit] = STATE(14),
    [sym_func] = STATE(14),
    [sym_string] = STATE(26),
    [sym_list] = STATE(26),
    [aux_sym_command_repeat1] = STATE(8),
    [anon_sym_LF] = ACTIONS(59),
    [anon_sym_SEMI] = ACTIONS(61),
    [sym_arg_spliter] = ACTIONS(63),
    [anon_sym_PLUS_EQ] = ACTIONS(66),
    [anon_sym_EQ] = ACTIONS(66),
    [anon_sym_DASH_EQ] = ACTIONS(66),
    [anon_sym_PLUS] = ACTIONS(66),
    [anon_sym_DASH] = ACTIONS(66),
    [anon_sym_TILDE] = ACTIONS(66),
    [anon_sym_DASH_GT] = ACTIONS(66),
    [anon_sym_AT] = ACTIONS(69),
    [anon_sym_SQUOTE] = ACTIONS(72),
    [anon_sym_DQUOTE] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(78),
    [sym_identifier] = ACTIONS(81),
    [sym_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(84),
  },
  [9] = {
    [sym_block] = STATE(26),
    [sym__command_unit] = STATE(26),
    [sym_operators] = STATE(26),
    [sym_unit] = STATE(26),
    [sym_decorate] = STATE(26),
    [sym__unit] = STATE(14),
    [sym_func] = STATE(14),
    [sym_string] = STATE(26),
    [sym_list] = STATE(26),
    [aux_sym_command_repeat1] = STATE(8),
    [anon_sym_LF] = ACTIONS(86),
    [anon_sym_SEMI] = ACTIONS(88),
    [sym_arg_spliter] = ACTIONS(90),
    [anon_sym_PLUS_EQ] = ACTIONS(11),
    [anon_sym_EQ] = ACTIONS(11),
    [anon_sym_DASH_EQ] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_DASH_GT] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(92),
    [anon_sym_SQUOTE] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(98),
    [sym_identifier] = ACTIONS(100),
    [sym_number] = ACTIONS(90),
    [sym_comment] = ACTIONS(84),
  },
  [10] = {
    [sym_block] = STATE(69),
    [sym__command_unit] = STATE(69),
    [sym_operators] = STATE(69),
    [sym_unit] = STATE(69),
    [sym_decorate] = STATE(69),
    [sym__unit] = STATE(38),
    [sym_func] = STATE(38),
    [sym_string] = STATE(69),
    [sym_list] = STATE(69),
    [sym_arg_spliter] = ACTIONS(102),
    [anon_sym_PLUS_EQ] = ACTIONS(104),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_DASH_EQ] = ACTIONS(104),
    [anon_sym_PLUS] = ACTIONS(106),
    [anon_sym_DASH] = ACTIONS(106),
    [anon_sym_TILDE] = ACTIONS(104),
    [anon_sym_DASH_GT] = ACTIONS(104),
    [anon_sym_AT] = ACTIONS(108),
    [anon_sym_SQUOTE] = ACTIONS(110),
    [anon_sym_DQUOTE] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(114),
    [sym_identifier] = ACTIONS(116),
    [sym_number] = ACTIONS(102),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LF,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_arg_block,
    ACTIONS(118), 17,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [32] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_LF,
    ACTIONS(128), 1,
      anon_sym_DOT,
    STATE(13), 1,
      aux_sym_unit_repeat1,
    ACTIONS(124), 16,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [63] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_LF,
    ACTIONS(134), 1,
      anon_sym_DOT,
    STATE(13), 1,
      aux_sym_unit_repeat1,
    ACTIONS(130), 16,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [94] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LF,
    STATE(12), 1,
      aux_sym_unit_repeat1,
    ACTIONS(137), 16,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [125] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_LF,
    ACTIONS(141), 17,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [151] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_LF,
    ACTIONS(130), 17,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [177] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_LF,
    ACTIONS(145), 17,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [203] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LF,
    ACTIONS(149), 17,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [229] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_LF,
    ACTIONS(153), 17,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [255] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_LF,
    ACTIONS(157), 17,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [281] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_LF,
    ACTIONS(161), 16,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [306] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LF,
    ACTIONS(165), 16,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [331] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LF,
    ACTIONS(169), 16,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [356] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_LF,
    ACTIONS(173), 16,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [381] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LF,
    ACTIONS(177), 16,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [406] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
    ACTIONS(183), 1,
      anon_sym_LF,
    ACTIONS(185), 15,
      anon_sym_SEMI,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [433] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_LF,
    ACTIONS(187), 16,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(191), 14,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [482] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      anon_sym_LBRACK,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(195), 1,
      sym_arg_spliter,
    ACTIONS(197), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(38), 2,
      sym__unit,
      sym_func,
    STATE(30), 4,
      sym_unit,
      sym_string,
      sym_list,
      aux_sym__args_repeat1,
  [515] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      anon_sym_LBRACK,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(195), 1,
      sym_arg_spliter,
    ACTIONS(199), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(38), 2,
      sym__unit,
      sym_func,
    STATE(31), 4,
      sym_unit,
      sym_string,
      sym_list,
      aux_sym__args_repeat1,
  [548] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym_arg_spliter,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(204), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(38), 2,
      sym__unit,
      sym_func,
    STATE(31), 4,
      sym_unit,
      sym_string,
      sym_list,
      aux_sym__args_repeat1,
  [581] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    STATE(44), 1,
      sym_arg_block,
    ACTIONS(120), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_arg_spliter,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [603] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      anon_sym_LBRACK,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      sym__args,
    STATE(38), 2,
      sym__unit,
      sym_func,
    STATE(29), 3,
      sym_unit,
      sym_string,
      sym_list,
  [634] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      anon_sym_LBRACK,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      sym__args,
    STATE(38), 2,
      sym__unit,
      sym_func,
    STATE(29), 3,
      sym_unit,
      sym_string,
      sym_list,
  [665] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    STATE(35), 1,
      aux_sym_unit_repeat1,
    ACTIONS(132), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [686] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_DOT,
    STATE(35), 1,
      aux_sym_unit_repeat1,
    ACTIONS(126), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [707] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      anon_sym_LBRACK,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      sym__args,
    STATE(38), 2,
      sym__unit,
      sym_func,
    STATE(29), 3,
      sym_unit,
      sym_string,
      sym_list,
  [738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_DOT,
    STATE(36), 1,
      aux_sym_unit_repeat1,
    ACTIONS(139), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [759] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      anon_sym_LBRACK,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym__args,
    STATE(38), 2,
      sym__unit,
      sym_func,
    STATE(29), 3,
      sym_unit,
      sym_string,
      sym_list,
  [790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_arg_spliter,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_arg_spliter,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_arg_spliter,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_arg_spliter,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_arg_spliter,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_arg_spliter,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [901] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      anon_sym_LBRACK,
    ACTIONS(116), 1,
      sym_identifier,
    STATE(38), 2,
      sym__unit,
      sym_func,
    STATE(49), 3,
      sym_unit,
      sym_string,
      sym_list,
  [926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 7,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [954] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      sym_identifier,
    STATE(41), 3,
      sym__unit,
      sym_func,
      sym_string,
  [972] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(16), 3,
      sym__unit,
      sym_func,
      sym_string,
  [990] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym_leading_key,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      aux_sym_string_repeat2,
    ACTIONS(237), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [1007] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym_leading_key,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    STATE(52), 1,
      aux_sym_string_repeat2,
    ACTIONS(241), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [1024] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym_leading_key,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      aux_sym_string_repeat2,
    ACTIONS(237), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [1041] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym_leading_key,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      aux_sym_string_repeat2,
    ACTIONS(247), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [1058] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(249), 1,
      sym_leading_key,
    ACTIONS(252), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      aux_sym_string_repeat2,
    ACTIONS(254), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [1075] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_SQUOTE,
    STATE(60), 1,
      aux_sym_string_repeat1,
    ACTIONS(257), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1089] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(259), 2,
      sym_leading_key,
      anon_sym_DQUOTE,
    ACTIONS(261), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [1101] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    STATE(63), 1,
      aux_sym_string_repeat1,
    ACTIONS(263), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1115] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_SQUOTE,
    STATE(63), 1,
      aux_sym_string_repeat1,
    ACTIONS(263), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1129] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_SQUOTE,
    STATE(59), 1,
      aux_sym_string_repeat1,
    ACTIONS(265), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1143] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(252), 2,
      sym_leading_key,
      anon_sym_DQUOTE,
    ACTIONS(267), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [1155] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    STATE(63), 1,
      aux_sym_string_repeat1,
    ACTIONS(271), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_LBRACE,
    ACTIONS(276), 1,
      sym_identifier,
  [1179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
  [1221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym_identifier,
  [1228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_RBRACK,
  [1235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
  [1242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_RBRACK,
  [1249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym_identifier,
  [1256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
  [1263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 32,
  [SMALL_STATE(13)] = 63,
  [SMALL_STATE(14)] = 94,
  [SMALL_STATE(15)] = 125,
  [SMALL_STATE(16)] = 151,
  [SMALL_STATE(17)] = 177,
  [SMALL_STATE(18)] = 203,
  [SMALL_STATE(19)] = 229,
  [SMALL_STATE(20)] = 255,
  [SMALL_STATE(21)] = 281,
  [SMALL_STATE(22)] = 306,
  [SMALL_STATE(23)] = 331,
  [SMALL_STATE(24)] = 356,
  [SMALL_STATE(25)] = 381,
  [SMALL_STATE(26)] = 406,
  [SMALL_STATE(27)] = 433,
  [SMALL_STATE(28)] = 458,
  [SMALL_STATE(29)] = 482,
  [SMALL_STATE(30)] = 515,
  [SMALL_STATE(31)] = 548,
  [SMALL_STATE(32)] = 581,
  [SMALL_STATE(33)] = 603,
  [SMALL_STATE(34)] = 634,
  [SMALL_STATE(35)] = 665,
  [SMALL_STATE(36)] = 686,
  [SMALL_STATE(37)] = 707,
  [SMALL_STATE(38)] = 738,
  [SMALL_STATE(39)] = 759,
  [SMALL_STATE(40)] = 790,
  [SMALL_STATE(41)] = 806,
  [SMALL_STATE(42)] = 822,
  [SMALL_STATE(43)] = 838,
  [SMALL_STATE(44)] = 854,
  [SMALL_STATE(45)] = 870,
  [SMALL_STATE(46)] = 886,
  [SMALL_STATE(47)] = 901,
  [SMALL_STATE(48)] = 926,
  [SMALL_STATE(49)] = 941,
  [SMALL_STATE(50)] = 954,
  [SMALL_STATE(51)] = 972,
  [SMALL_STATE(52)] = 990,
  [SMALL_STATE(53)] = 1007,
  [SMALL_STATE(54)] = 1024,
  [SMALL_STATE(55)] = 1041,
  [SMALL_STATE(56)] = 1058,
  [SMALL_STATE(57)] = 1075,
  [SMALL_STATE(58)] = 1089,
  [SMALL_STATE(59)] = 1101,
  [SMALL_STATE(60)] = 1115,
  [SMALL_STATE(61)] = 1129,
  [SMALL_STATE(62)] = 1143,
  [SMALL_STATE(63)] = 1155,
  [SMALL_STATE(64)] = 1169,
  [SMALL_STATE(65)] = 1179,
  [SMALL_STATE(66)] = 1187,
  [SMALL_STATE(67)] = 1195,
  [SMALL_STATE(68)] = 1203,
  [SMALL_STATE(69)] = 1211,
  [SMALL_STATE(70)] = 1221,
  [SMALL_STATE(71)] = 1228,
  [SMALL_STATE(72)] = 1235,
  [SMALL_STATE(73)] = 1242,
  [SMALL_STATE(74)] = 1249,
  [SMALL_STATE(75)] = 1256,
  [SMALL_STATE(76)] = 1263,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(26),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(22),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(74),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(57),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(55),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(33),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(11),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unit, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unit, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(51),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_block, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_block, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_block, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_block, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operators, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operators, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decorate, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__args, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__args, 2),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(47),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(61),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(53),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(39),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(32),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(50),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(64),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(56),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 4),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(63),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [286] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_groovy(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

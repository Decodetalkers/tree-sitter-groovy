#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 73
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
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
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_SQUOTE = 17,
  aux_sym_string_token1 = 18,
  anon_sym_DQUOTE = 19,
  aux_sym_string_token2 = 20,
  anon_sym_LBRACK = 21,
  anon_sym_RBRACK = 22,
  sym_identifier = 23,
  sym_escape_sequence = 24,
  sym_number = 25,
  sym_comment = 26,
  sym_source_file = 27,
  sym_block = 28,
  sym_command = 29,
  sym__command_unit = 30,
  sym_operators = 31,
  sym_unit = 32,
  sym__unit = 33,
  sym_func = 34,
  sym_arg_block = 35,
  sym_string = 36,
  sym_list = 37,
  sym__args = 38,
  aux_sym_source_file_repeat1 = 39,
  aux_sym_command_repeat1 = 40,
  aux_sym_unit_repeat1 = 41,
  aux_sym_string_repeat1 = 42,
  aux_sym_string_repeat2 = 43,
  aux_sym__args_repeat1 = 44,
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
  [4] = 4,
  [5] = 5,
  [6] = 4,
  [7] = 5,
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
  [31] = 11,
  [32] = 32,
  [33] = 33,
  [34] = 32,
  [35] = 33,
  [36] = 13,
  [37] = 14,
  [38] = 12,
  [39] = 17,
  [40] = 18,
  [41] = 15,
  [42] = 19,
  [43] = 20,
  [44] = 16,
  [45] = 23,
  [46] = 46,
  [47] = 26,
  [48] = 48,
  [49] = 49,
  [50] = 49,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 51,
  [55] = 52,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 58,
  [62] = 56,
  [63] = 63,
  [64] = 25,
  [65] = 65,
  [66] = 24,
  [67] = 22,
  [68] = 68,
  [69] = 69,
  [70] = 69,
  [71] = 71,
  [72] = 71,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '+') ADVANCE(32);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(56);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '~') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == '+') ADVANCE(32);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(56);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '~') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '^') ADVANCE(48);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 'u') ADVANCE(6);
      if (lookahead == 'x') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(54);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 6:
      if (lookahead == '{') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == '}') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 9:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(58);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(59);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
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
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '+') ADVANCE(32);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(56);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '~') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '>') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(9);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(10);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(16);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(55);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
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
  [27] = {.lex_state = 0},
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
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
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
    [sym_source_file] = STATE(68),
    [sym_block] = STATE(21),
    [sym_command] = STATE(3),
    [sym__command_unit] = STATE(21),
    [sym_operators] = STATE(21),
    [sym_unit] = STATE(21),
    [sym__unit] = STATE(12),
    [sym_func] = STATE(12),
    [sym_string] = STATE(21),
    [sym_list] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(3),
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
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_number] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_block] = STATE(21),
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(21),
    [sym_operators] = STATE(21),
    [sym_unit] = STATE(21),
    [sym__unit] = STATE(12),
    [sym_func] = STATE(12),
    [sym_string] = STATE(21),
    [sym_list] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(21),
    [sym_arg_spliter] = ACTIONS(23),
    [anon_sym_PLUS_EQ] = ACTIONS(26),
    [anon_sym_EQ] = ACTIONS(26),
    [anon_sym_DASH_EQ] = ACTIONS(26),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(26),
    [anon_sym_DASH_GT] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(32),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(38),
    [sym_identifier] = ACTIONS(41),
    [sym_number] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_block] = STATE(21),
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(21),
    [sym_operators] = STATE(21),
    [sym_unit] = STATE(21),
    [sym__unit] = STATE(12),
    [sym_func] = STATE(12),
    [sym_string] = STATE(21),
    [sym_list] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(44),
    [sym_arg_spliter] = ACTIONS(7),
    [anon_sym_PLUS_EQ] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_DASH_EQ] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_DASH_GT] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_number] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_block] = STATE(21),
    [sym_command] = STATE(7),
    [sym__command_unit] = STATE(21),
    [sym_operators] = STATE(21),
    [sym_unit] = STATE(21),
    [sym__unit] = STATE(12),
    [sym_func] = STATE(12),
    [sym_string] = STATE(21),
    [sym_list] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym_command_repeat1] = STATE(9),
    [anon_sym_RBRACE] = ACTIONS(46),
    [sym_arg_spliter] = ACTIONS(7),
    [anon_sym_PLUS_EQ] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_DASH_EQ] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_DASH_GT] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_number] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_block] = STATE(21),
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(21),
    [sym_operators] = STATE(21),
    [sym_unit] = STATE(21),
    [sym__unit] = STATE(12),
    [sym_func] = STATE(12),
    [sym_string] = STATE(21),
    [sym_list] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(9),
    [anon_sym_RBRACE] = ACTIONS(48),
    [sym_arg_spliter] = ACTIONS(7),
    [anon_sym_PLUS_EQ] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_DASH_EQ] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_DASH_GT] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_number] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_block] = STATE(21),
    [sym_command] = STATE(5),
    [sym__command_unit] = STATE(21),
    [sym_operators] = STATE(21),
    [sym_unit] = STATE(21),
    [sym__unit] = STATE(12),
    [sym_func] = STATE(12),
    [sym_string] = STATE(21),
    [sym_list] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_command_repeat1] = STATE(9),
    [anon_sym_RBRACE] = ACTIONS(50),
    [sym_arg_spliter] = ACTIONS(7),
    [anon_sym_PLUS_EQ] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_DASH_EQ] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_DASH_GT] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_number] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_block] = STATE(21),
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(21),
    [sym_operators] = STATE(21),
    [sym_unit] = STATE(21),
    [sym__unit] = STATE(12),
    [sym_func] = STATE(12),
    [sym_string] = STATE(21),
    [sym_list] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(9),
    [anon_sym_RBRACE] = ACTIONS(52),
    [sym_arg_spliter] = ACTIONS(7),
    [anon_sym_PLUS_EQ] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_DASH_EQ] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_DASH_GT] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_number] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_block] = STATE(21),
    [sym__command_unit] = STATE(21),
    [sym_operators] = STATE(21),
    [sym_unit] = STATE(21),
    [sym__unit] = STATE(12),
    [sym_func] = STATE(12),
    [sym_string] = STATE(21),
    [sym_list] = STATE(21),
    [aux_sym_command_repeat1] = STATE(8),
    [anon_sym_LF] = ACTIONS(54),
    [anon_sym_SEMI] = ACTIONS(56),
    [sym_arg_spliter] = ACTIONS(58),
    [anon_sym_PLUS_EQ] = ACTIONS(61),
    [anon_sym_EQ] = ACTIONS(61),
    [anon_sym_DASH_EQ] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_DASH_GT] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(64),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(70),
    [sym_identifier] = ACTIONS(73),
    [sym_number] = ACTIONS(58),
    [sym_comment] = ACTIONS(76),
  },
  [9] = {
    [sym_block] = STATE(21),
    [sym__command_unit] = STATE(21),
    [sym_operators] = STATE(21),
    [sym_unit] = STATE(21),
    [sym__unit] = STATE(12),
    [sym_func] = STATE(12),
    [sym_string] = STATE(21),
    [sym_list] = STATE(21),
    [aux_sym_command_repeat1] = STATE(8),
    [anon_sym_LF] = ACTIONS(78),
    [anon_sym_SEMI] = ACTIONS(80),
    [sym_arg_spliter] = ACTIONS(82),
    [anon_sym_PLUS_EQ] = ACTIONS(11),
    [anon_sym_EQ] = ACTIONS(11),
    [anon_sym_DASH_EQ] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_DASH_GT] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(84),
    [anon_sym_DQUOTE] = ACTIONS(86),
    [anon_sym_LBRACK] = ACTIONS(88),
    [sym_identifier] = ACTIONS(90),
    [sym_number] = ACTIONS(82),
    [sym_comment] = ACTIONS(76),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(92), 2,
      sym_arg_spliter,
      sym_number,
    ACTIONS(96), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(38), 2,
      sym__unit,
      sym_func,
    ACTIONS(94), 5,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
    STATE(65), 6,
      sym_block,
      sym__command_unit,
      sym_operators,
      sym_unit,
      sym_string,
      sym_list,
  [43] = 5,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_LF,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_arg_block,
    ACTIONS(106), 16,
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
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [74] = 5,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LF,
    ACTIONS(116), 1,
      anon_sym_DOT,
    STATE(14), 1,
      aux_sym_unit_repeat1,
    ACTIONS(112), 15,
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
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [104] = 5,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LF,
    ACTIONS(122), 1,
      anon_sym_DOT,
    STATE(13), 1,
      aux_sym_unit_repeat1,
    ACTIONS(118), 15,
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
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [134] = 5,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DOT,
    ACTIONS(127), 1,
      anon_sym_LF,
    STATE(13), 1,
      aux_sym_unit_repeat1,
    ACTIONS(125), 15,
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
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [164] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LF,
    ACTIONS(129), 16,
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
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [189] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LF,
    ACTIONS(133), 16,
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
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [214] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_LF,
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
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [239] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LF,
    ACTIONS(118), 16,
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
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [264] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_LF,
    ACTIONS(141), 16,
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
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [289] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_LF,
    ACTIONS(145), 16,
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
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [314] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      anon_sym_LF,
    ACTIONS(153), 14,
      anon_sym_SEMI,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [340] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_LF,
    ACTIONS(155), 15,
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
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [364] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LF,
    ACTIONS(159), 15,
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
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [388] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_LF,
    ACTIONS(163), 15,
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
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [412] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LF,
    ACTIONS(167), 15,
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
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [436] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LF,
    ACTIONS(171), 15,
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
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [460] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(175), 13,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [483] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(179), 1,
      sym_arg_spliter,
    ACTIONS(181), 2,
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
  [516] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym_arg_spliter,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      sym_identifier,
    ACTIONS(186), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(38), 2,
      sym__unit,
      sym_func,
    STATE(29), 4,
      sym_unit,
      sym_string,
      sym_list,
      aux_sym__args_repeat1,
  [549] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(179), 1,
      sym_arg_spliter,
    ACTIONS(200), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(38), 2,
      sym__unit,
      sym_func,
    STATE(29), 4,
      sym_unit,
      sym_string,
      sym_list,
      aux_sym__args_repeat1,
  [582] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym_arg_block,
    ACTIONS(108), 10,
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
  [604] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      sym__args,
    STATE(38), 2,
      sym__unit,
      sym_func,
    STATE(28), 3,
      sym_unit,
      sym_string,
      sym_list,
  [635] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(206), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      sym__args,
    STATE(38), 2,
      sym__unit,
      sym_func,
    STATE(28), 3,
      sym_unit,
      sym_string,
      sym_list,
  [666] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      sym__args,
    STATE(38), 2,
      sym__unit,
      sym_func,
    STATE(28), 3,
      sym_unit,
      sym_string,
      sym_list,
  [697] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(210), 1,
      anon_sym_RBRACK,
    STATE(70), 1,
      sym__args,
    STATE(38), 2,
      sym__unit,
      sym_func,
    STATE(28), 3,
      sym_unit,
      sym_string,
      sym_list,
  [728] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_DOT,
    STATE(36), 1,
      aux_sym_unit_repeat1,
    ACTIONS(120), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [749] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DOT,
    STATE(36), 1,
      aux_sym_unit_repeat1,
    ACTIONS(127), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [770] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DOT,
    STATE(37), 1,
      aux_sym_unit_repeat1,
    ACTIONS(114), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 10,
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
  [807] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 10,
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
  [839] = 2,
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
  [855] = 2,
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
  [871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 10,
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
  [887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [902] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    ACTIONS(104), 1,
      sym_identifier,
    STATE(38), 2,
      sym__unit,
      sym_func,
    STATE(48), 3,
      sym_unit,
      sym_string,
      sym_list,
  [927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 7,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [955] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(18), 3,
      sym__unit,
      sym_func,
      sym_string,
  [973] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      sym_identifier,
    STATE(40), 3,
      sym__unit,
      sym_func,
      sym_string,
  [991] = 5,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym_leading_key,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      aux_sym_string_repeat2,
    ACTIONS(221), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [1008] = 5,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym_leading_key,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    STATE(51), 1,
      aux_sym_string_repeat2,
    ACTIONS(225), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [1025] = 5,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym_leading_key,
    ACTIONS(230), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      aux_sym_string_repeat2,
    ACTIONS(232), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [1042] = 5,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym_leading_key,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      aux_sym_string_repeat2,
    ACTIONS(221), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [1059] = 5,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym_leading_key,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      aux_sym_string_repeat2,
    ACTIONS(239), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [1076] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    STATE(61), 1,
      aux_sym_string_repeat1,
    ACTIONS(241), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1090] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(243), 2,
      sym_leading_key,
      anon_sym_DQUOTE,
    ACTIONS(245), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [1102] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    STATE(60), 1,
      aux_sym_string_repeat1,
    ACTIONS(247), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1116] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(230), 2,
      sym_leading_key,
      anon_sym_DQUOTE,
    ACTIONS(249), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [1128] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    STATE(60), 1,
      aux_sym_string_repeat1,
    ACTIONS(253), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1142] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    STATE(60), 1,
      aux_sym_string_repeat1,
    ACTIONS(247), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1156] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    STATE(58), 1,
      aux_sym_string_repeat1,
    ACTIONS(256), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LBRACE,
    ACTIONS(260), 1,
      sym_identifier,
  [1180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
  [1198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
  [1221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_RBRACK,
  [1228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_RBRACK,
  [1235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_RPAREN,
  [1242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 43,
  [SMALL_STATE(12)] = 74,
  [SMALL_STATE(13)] = 104,
  [SMALL_STATE(14)] = 134,
  [SMALL_STATE(15)] = 164,
  [SMALL_STATE(16)] = 189,
  [SMALL_STATE(17)] = 214,
  [SMALL_STATE(18)] = 239,
  [SMALL_STATE(19)] = 264,
  [SMALL_STATE(20)] = 289,
  [SMALL_STATE(21)] = 314,
  [SMALL_STATE(22)] = 340,
  [SMALL_STATE(23)] = 364,
  [SMALL_STATE(24)] = 388,
  [SMALL_STATE(25)] = 412,
  [SMALL_STATE(26)] = 436,
  [SMALL_STATE(27)] = 460,
  [SMALL_STATE(28)] = 483,
  [SMALL_STATE(29)] = 516,
  [SMALL_STATE(30)] = 549,
  [SMALL_STATE(31)] = 582,
  [SMALL_STATE(32)] = 604,
  [SMALL_STATE(33)] = 635,
  [SMALL_STATE(34)] = 666,
  [SMALL_STATE(35)] = 697,
  [SMALL_STATE(36)] = 728,
  [SMALL_STATE(37)] = 749,
  [SMALL_STATE(38)] = 770,
  [SMALL_STATE(39)] = 791,
  [SMALL_STATE(40)] = 807,
  [SMALL_STATE(41)] = 823,
  [SMALL_STATE(42)] = 839,
  [SMALL_STATE(43)] = 855,
  [SMALL_STATE(44)] = 871,
  [SMALL_STATE(45)] = 887,
  [SMALL_STATE(46)] = 902,
  [SMALL_STATE(47)] = 927,
  [SMALL_STATE(48)] = 942,
  [SMALL_STATE(49)] = 955,
  [SMALL_STATE(50)] = 973,
  [SMALL_STATE(51)] = 991,
  [SMALL_STATE(52)] = 1008,
  [SMALL_STATE(53)] = 1025,
  [SMALL_STATE(54)] = 1042,
  [SMALL_STATE(55)] = 1059,
  [SMALL_STATE(56)] = 1076,
  [SMALL_STATE(57)] = 1090,
  [SMALL_STATE(58)] = 1102,
  [SMALL_STATE(59)] = 1116,
  [SMALL_STATE(60)] = 1128,
  [SMALL_STATE(61)] = 1142,
  [SMALL_STATE(62)] = 1156,
  [SMALL_STATE(63)] = 1170,
  [SMALL_STATE(64)] = 1180,
  [SMALL_STATE(65)] = 1188,
  [SMALL_STATE(66)] = 1198,
  [SMALL_STATE(67)] = 1206,
  [SMALL_STATE(68)] = 1214,
  [SMALL_STATE(69)] = 1221,
  [SMALL_STATE(70)] = 1228,
  [SMALL_STATE(71)] = 1235,
  [SMALL_STATE(72)] = 1242,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(21),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(22),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(62),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(52),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(33),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(11),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unit, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unit, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(49),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_block, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_block, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_block, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_block, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operators, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operators, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__args, 1),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(46),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(56),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(55),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(35),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(31),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__args, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(50),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(63),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(53),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 4),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 4),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(60),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [266] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
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

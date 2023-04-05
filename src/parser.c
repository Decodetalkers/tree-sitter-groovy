#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 73
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_LF = 3,
  sym_arg_spliter = 4,
  sym_leading_key = 5,
  anon_sym_PLUS_EQ = 6,
  anon_sym_EQ = 7,
  anon_sym_DASH_EQ = 8,
  anon_sym_PLUS = 9,
  anon_sym_DASH = 10,
  anon_sym_DOT = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_SQUOTE = 14,
  aux_sym_string_token1 = 15,
  anon_sym_DQUOTE = 16,
  aux_sym_string_token2 = 17,
  anon_sym_LBRACK = 18,
  anon_sym_RBRACK = 19,
  sym_identifier = 20,
  sym_escape_sequence = 21,
  sym_number = 22,
  sym_comment = 23,
  sym_source_file = 24,
  sym_block = 25,
  sym_command = 26,
  sym__command_unit = 27,
  sym_operators = 28,
  sym_unit = 29,
  sym__unit = 30,
  sym_arg_block = 31,
  sym_string = 32,
  sym_list = 33,
  sym__args = 34,
  aux_sym_source_file_repeat1 = 35,
  aux_sym_command_repeat1 = 36,
  aux_sym_unit_repeat1 = 37,
  aux_sym_string_repeat1 = 38,
  aux_sym_string_repeat2 = 39,
  aux_sym__args_repeat1 = 40,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LF] = "\n",
  [sym_arg_spliter] = "arg_spliter",
  [sym_leading_key] = "leading_key",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_EQ] = "=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
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
  [sym_arg_spliter] = sym_arg_spliter,
  [sym_leading_key] = sym_leading_key,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
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
  [5] = 3,
  [6] = 4,
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
  [30] = 29,
  [31] = 28,
  [32] = 32,
  [33] = 11,
  [34] = 12,
  [35] = 13,
  [36] = 14,
  [37] = 15,
  [38] = 16,
  [39] = 17,
  [40] = 18,
  [41] = 24,
  [42] = 23,
  [43] = 43,
  [44] = 44,
  [45] = 43,
  [46] = 44,
  [47] = 21,
  [48] = 48,
  [49] = 27,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 52,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 53,
  [59] = 59,
  [60] = 60,
  [61] = 20,
  [62] = 19,
  [63] = 25,
  [64] = 64,
  [65] = 65,
  [66] = 64,
  [67] = 67,
  [68] = 68,
  [69] = 68,
  [70] = 70,
  [71] = 71,
  [72] = 70,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(53);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == ']') ADVANCE(47);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(53);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '^') ADVANCE(45);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 'u') ADVANCE(6);
      if (lookahead == 'x') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(51);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 6:
      if (lookahead == '{') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == '}') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 9:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(55);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(56);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
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
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(53);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == ']') ADVANCE(47);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
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
      ACCEPT_TOKEN(sym_arg_spliter);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_leading_key);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '0') ADVANCE(58);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(9);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(10);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(16);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(52);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
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
  [22] = {.lex_state = 0},
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
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
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
    [sym_arg_spliter] = ACTIONS(1),
    [sym_leading_key] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
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
    [sym_source_file] = STATE(71),
    [sym_block] = STATE(26),
    [sym_command] = STATE(7),
    [sym__command_unit] = STATE(26),
    [sym_operators] = STATE(26),
    [sym_unit] = STATE(26),
    [sym__unit] = STATE(13),
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
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_number] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_block] = STATE(26),
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(26),
    [sym_operators] = STATE(26),
    [sym_unit] = STATE(26),
    [sym__unit] = STATE(13),
    [sym_string] = STATE(26),
    [sym_list] = STATE(26),
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
    [anon_sym_SQUOTE] = ACTIONS(32),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(38),
    [sym_identifier] = ACTIONS(41),
    [sym_number] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_block] = STATE(26),
    [sym_command] = STATE(6),
    [sym__command_unit] = STATE(26),
    [sym_operators] = STATE(26),
    [sym_unit] = STATE(26),
    [sym__unit] = STATE(13),
    [sym_string] = STATE(26),
    [sym_list] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_command_repeat1] = STATE(9),
    [anon_sym_RBRACE] = ACTIONS(44),
    [sym_arg_spliter] = ACTIONS(7),
    [anon_sym_PLUS_EQ] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_DASH_EQ] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_number] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_block] = STATE(26),
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(26),
    [sym_operators] = STATE(26),
    [sym_unit] = STATE(26),
    [sym__unit] = STATE(13),
    [sym_string] = STATE(26),
    [sym_list] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(9),
    [anon_sym_RBRACE] = ACTIONS(46),
    [sym_arg_spliter] = ACTIONS(7),
    [anon_sym_PLUS_EQ] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_DASH_EQ] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_number] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_block] = STATE(26),
    [sym_command] = STATE(4),
    [sym__command_unit] = STATE(26),
    [sym_operators] = STATE(26),
    [sym_unit] = STATE(26),
    [sym__unit] = STATE(13),
    [sym_string] = STATE(26),
    [sym_list] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(4),
    [aux_sym_command_repeat1] = STATE(9),
    [anon_sym_RBRACE] = ACTIONS(48),
    [sym_arg_spliter] = ACTIONS(7),
    [anon_sym_PLUS_EQ] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_DASH_EQ] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_number] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_block] = STATE(26),
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(26),
    [sym_operators] = STATE(26),
    [sym_unit] = STATE(26),
    [sym__unit] = STATE(13),
    [sym_string] = STATE(26),
    [sym_list] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(9),
    [anon_sym_RBRACE] = ACTIONS(50),
    [sym_arg_spliter] = ACTIONS(7),
    [anon_sym_PLUS_EQ] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_DASH_EQ] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_number] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_block] = STATE(26),
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(26),
    [sym_operators] = STATE(26),
    [sym_unit] = STATE(26),
    [sym__unit] = STATE(13),
    [sym_string] = STATE(26),
    [sym_list] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(52),
    [sym_arg_spliter] = ACTIONS(7),
    [anon_sym_PLUS_EQ] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_DASH_EQ] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_number] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_block] = STATE(26),
    [sym__command_unit] = STATE(26),
    [sym_operators] = STATE(26),
    [sym_unit] = STATE(26),
    [sym__unit] = STATE(13),
    [sym_string] = STATE(26),
    [sym_list] = STATE(26),
    [aux_sym_command_repeat1] = STATE(8),
    [anon_sym_LF] = ACTIONS(54),
    [sym_arg_spliter] = ACTIONS(56),
    [anon_sym_PLUS_EQ] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(59),
    [anon_sym_DASH_EQ] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(59),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(68),
    [sym_identifier] = ACTIONS(71),
    [sym_number] = ACTIONS(56),
    [sym_comment] = ACTIONS(74),
  },
  [9] = {
    [sym_block] = STATE(26),
    [sym__command_unit] = STATE(26),
    [sym_operators] = STATE(26),
    [sym_unit] = STATE(26),
    [sym__unit] = STATE(13),
    [sym_string] = STATE(26),
    [sym_list] = STATE(26),
    [aux_sym_command_repeat1] = STATE(8),
    [anon_sym_LF] = ACTIONS(76),
    [sym_arg_spliter] = ACTIONS(78),
    [anon_sym_PLUS_EQ] = ACTIONS(11),
    [anon_sym_EQ] = ACTIONS(11),
    [anon_sym_DASH_EQ] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(80),
    [anon_sym_DQUOTE] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(84),
    [sym_identifier] = ACTIONS(86),
    [sym_number] = ACTIONS(78),
    [sym_comment] = ACTIONS(74),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_SQUOTE,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    ACTIONS(100), 1,
      sym_identifier,
    STATE(35), 1,
      sym__unit,
    ACTIONS(88), 2,
      sym_arg_spliter,
      sym_number,
    ACTIONS(92), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(90), 3,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
    STATE(67), 6,
      sym_block,
      sym__command_unit,
      sym_operators,
      sym_unit,
      sym_string,
      sym_list,
  [40] = 5,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LF,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_arg_block,
    ACTIONS(102), 13,
      anon_sym_LBRACE,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [68] = 5,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LF,
    ACTIONS(112), 1,
      anon_sym_DOT,
    STATE(12), 1,
      aux_sym_unit_repeat1,
    ACTIONS(108), 12,
      anon_sym_LBRACE,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [95] = 5,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LF,
    ACTIONS(119), 1,
      anon_sym_DOT,
    STATE(14), 1,
      aux_sym_unit_repeat1,
    ACTIONS(115), 12,
      anon_sym_LBRACE,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [122] = 5,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_DOT,
    ACTIONS(123), 1,
      anon_sym_LF,
    STATE(12), 1,
      aux_sym_unit_repeat1,
    ACTIONS(121), 12,
      anon_sym_LBRACE,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [149] = 3,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_LF,
    ACTIONS(125), 13,
      anon_sym_LBRACE,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [171] = 3,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LF,
    ACTIONS(108), 13,
      anon_sym_LBRACE,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [193] = 3,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LF,
    ACTIONS(129), 13,
      anon_sym_LBRACE,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [215] = 3,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LF,
    ACTIONS(133), 13,
      anon_sym_LBRACE,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [237] = 3,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_LF,
    ACTIONS(137), 12,
      anon_sym_LBRACE,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [258] = 3,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_LF,
    ACTIONS(141), 12,
      anon_sym_LBRACE,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [279] = 3,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_LF,
    ACTIONS(145), 12,
      anon_sym_LBRACE,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(149), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [321] = 3,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_LF,
    ACTIONS(153), 12,
      anon_sym_LBRACE,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [342] = 3,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_LF,
    ACTIONS(157), 12,
      anon_sym_LBRACE,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [363] = 3,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_LF,
    ACTIONS(161), 12,
      anon_sym_LBRACE,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [384] = 4,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_LF,
    ACTIONS(169), 11,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [407] = 3,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LF,
    ACTIONS(171), 12,
      anon_sym_LBRACE,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [428] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_SQUOTE,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      sym__unit,
    STATE(68), 1,
      sym__args,
    STATE(59), 3,
      sym_unit,
      sym_string,
      sym_list,
  [458] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_SQUOTE,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym__unit,
    STATE(70), 1,
      sym__args,
    STATE(59), 3,
      sym_unit,
      sym_string,
      sym_list,
  [488] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_SQUOTE,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym__unit,
    STATE(72), 1,
      sym__args,
    STATE(59), 3,
      sym_unit,
      sym_string,
      sym_list,
  [518] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_SQUOTE,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(181), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      sym__unit,
    STATE(69), 1,
      sym__args,
    STATE(59), 3,
      sym_unit,
      sym_string,
      sym_list,
  [548] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_SQUOTE,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    ACTIONS(100), 1,
      sym_identifier,
    STATE(35), 1,
      sym__unit,
    STATE(60), 3,
      sym_unit,
      sym_string,
      sym_list,
  [572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_arg_block,
    ACTIONS(104), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_arg_spliter,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [590] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_DOT,
    STATE(34), 1,
      aux_sym_unit_repeat1,
    ACTIONS(110), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [607] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_DOT,
    STATE(36), 1,
      aux_sym_unit_repeat1,
    ACTIONS(117), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_DOT,
    STATE(34), 1,
      aux_sym_unit_repeat1,
    ACTIONS(123), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_arg_spliter,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_arg_spliter,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_arg_spliter,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_arg_spliter,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [711] = 5,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_leading_key,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      aux_sym_string_repeat2,
    ACTIONS(194), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [728] = 5,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_leading_key,
    ACTIONS(196), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      aux_sym_string_repeat2,
    ACTIONS(198), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [745] = 5,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_leading_key,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      aux_sym_string_repeat2,
    ACTIONS(202), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [762] = 5,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_leading_key,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      aux_sym_string_repeat2,
    ACTIONS(198), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [790] = 5,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_leading_key,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      aux_sym_string_repeat2,
    ACTIONS(211), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [818] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_arg_spliter,
    STATE(51), 1,
      aux_sym__args_repeat1,
    ACTIONS(216), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      sym_arg_spliter,
    STATE(51), 1,
      aux_sym__args_repeat1,
    ACTIONS(221), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [846] = 4,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(56), 1,
      aux_sym_string_repeat1,
    ACTIONS(223), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [860] = 4,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_SQUOTE,
    STATE(52), 1,
      aux_sym_string_repeat1,
    ACTIONS(225), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [874] = 4,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_SQUOTE,
    STATE(56), 1,
      aux_sym_string_repeat1,
    ACTIONS(223), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [888] = 3,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(209), 2,
      sym_leading_key,
      anon_sym_DQUOTE,
    ACTIONS(227), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [900] = 4,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_SQUOTE,
    STATE(56), 1,
      aux_sym_string_repeat1,
    ACTIONS(231), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [914] = 3,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(234), 2,
      sym_leading_key,
      anon_sym_DQUOTE,
    ACTIONS(236), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [926] = 4,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    STATE(54), 1,
      aux_sym_string_repeat1,
    ACTIONS(238), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [940] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_arg_spliter,
    STATE(50), 1,
      aux_sym__args_repeat1,
    ACTIONS(240), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 3,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(16), 1,
      sym__unit,
  [997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      sym_identifier,
  [1007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym_identifier,
    STATE(38), 1,
      sym__unit,
  [1017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    ACTIONS(248), 1,
      anon_sym_RBRACE,
  [1027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_RBRACK,
  [1034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_RBRACK,
  [1041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
  [1048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
  [1055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 40,
  [SMALL_STATE(12)] = 68,
  [SMALL_STATE(13)] = 95,
  [SMALL_STATE(14)] = 122,
  [SMALL_STATE(15)] = 149,
  [SMALL_STATE(16)] = 171,
  [SMALL_STATE(17)] = 193,
  [SMALL_STATE(18)] = 215,
  [SMALL_STATE(19)] = 237,
  [SMALL_STATE(20)] = 258,
  [SMALL_STATE(21)] = 279,
  [SMALL_STATE(22)] = 300,
  [SMALL_STATE(23)] = 321,
  [SMALL_STATE(24)] = 342,
  [SMALL_STATE(25)] = 363,
  [SMALL_STATE(26)] = 384,
  [SMALL_STATE(27)] = 407,
  [SMALL_STATE(28)] = 428,
  [SMALL_STATE(29)] = 458,
  [SMALL_STATE(30)] = 488,
  [SMALL_STATE(31)] = 518,
  [SMALL_STATE(32)] = 548,
  [SMALL_STATE(33)] = 572,
  [SMALL_STATE(34)] = 590,
  [SMALL_STATE(35)] = 607,
  [SMALL_STATE(36)] = 624,
  [SMALL_STATE(37)] = 641,
  [SMALL_STATE(38)] = 653,
  [SMALL_STATE(39)] = 665,
  [SMALL_STATE(40)] = 677,
  [SMALL_STATE(41)] = 689,
  [SMALL_STATE(42)] = 700,
  [SMALL_STATE(43)] = 711,
  [SMALL_STATE(44)] = 728,
  [SMALL_STATE(45)] = 745,
  [SMALL_STATE(46)] = 762,
  [SMALL_STATE(47)] = 779,
  [SMALL_STATE(48)] = 790,
  [SMALL_STATE(49)] = 807,
  [SMALL_STATE(50)] = 818,
  [SMALL_STATE(51)] = 832,
  [SMALL_STATE(52)] = 846,
  [SMALL_STATE(53)] = 860,
  [SMALL_STATE(54)] = 874,
  [SMALL_STATE(55)] = 888,
  [SMALL_STATE(56)] = 900,
  [SMALL_STATE(57)] = 914,
  [SMALL_STATE(58)] = 926,
  [SMALL_STATE(59)] = 940,
  [SMALL_STATE(60)] = 954,
  [SMALL_STATE(61)] = 963,
  [SMALL_STATE(62)] = 971,
  [SMALL_STATE(63)] = 979,
  [SMALL_STATE(64)] = 987,
  [SMALL_STATE(65)] = 997,
  [SMALL_STATE(66)] = 1007,
  [SMALL_STATE(67)] = 1017,
  [SMALL_STATE(68)] = 1027,
  [SMALL_STATE(69)] = 1034,
  [SMALL_STATE(70)] = 1041,
  [SMALL_STATE(71)] = 1048,
  [SMALL_STATE(72)] = 1055,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(26),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(20),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(53),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(43),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(28),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(11),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unit, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unit, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(64),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unit, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unit, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_block, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_block, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_block, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_block, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operators, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operators, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(66),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(65),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(48),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__args, 2),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(32),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(56),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 4),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 4),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__args, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [256] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_groovyscript(void) {
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

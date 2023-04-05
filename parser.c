#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_LF = 3,
  sym_arg_spliter = 4,
  anon_sym_PLUS_EQ = 5,
  anon_sym_EQ = 6,
  anon_sym_DASH_EQ = 7,
  anon_sym_PLUS = 8,
  anon_sym_DASH = 9,
  anon_sym_DOT = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_SQUOTE = 13,
  aux_sym_string_token1 = 14,
  anon_sym_DQUOTE = 15,
  aux_sym_string_token2 = 16,
  anon_sym_LBRACK = 17,
  anon_sym_RBRACK = 18,
  sym_identifier = 19,
  sym_escape_sequence = 20,
  sym_number = 21,
  sym_comment = 22,
  sym_source_file = 23,
  sym_block = 24,
  sym_command = 25,
  sym__command_unit = 26,
  sym_operators = 27,
  sym_unit = 28,
  sym__unit = 29,
  sym_arg_block = 30,
  sym_string = 31,
  sym_list = 32,
  sym__args = 33,
  aux_sym_source_file_repeat1 = 34,
  aux_sym_command_repeat1 = 35,
  aux_sym_unit_repeat1 = 36,
  aux_sym_string_repeat1 = 37,
  aux_sym_string_repeat2 = 38,
  aux_sym__args_repeat1 = 39,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LF] = "\n",
  [sym_arg_spliter] = "arg_spliter",
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
  [5] = 5,
  [6] = 6,
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
  [27] = 26,
  [28] = 25,
  [29] = 29,
  [30] = 8,
  [31] = 10,
  [32] = 11,
  [33] = 9,
  [34] = 34,
  [35] = 14,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 34,
  [43] = 43,
  [44] = 38,
  [45] = 36,
  [46] = 12,
  [47] = 15,
  [48] = 48,
  [49] = 43,
  [50] = 13,
  [51] = 22,
  [52] = 23,
  [53] = 53,
  [54] = 19,
  [55] = 20,
  [56] = 56,
  [57] = 56,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 60,
  [62] = 58,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(52);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '[') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == ']') ADVANCE(46);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(52);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '[') ADVANCE(45);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '^') ADVANCE(44);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '^') ADVANCE(39);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 'u') ADVANCE(6);
      if (lookahead == 'x') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(50);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 6:
      if (lookahead == '{') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == '}') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 9:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(54);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(55);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
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
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(52);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '[') ADVANCE(45);
      if (lookahead == ']') ADVANCE(46);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
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
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(48);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '0') ADVANCE(57);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(9);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(10);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(16);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(51);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
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
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_arg_spliter] = ACTIONS(1),
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
    [sym_source_file] = STATE(59),
    [sym_block] = STATE(21),
    [sym_command] = STATE(4),
    [sym__command_unit] = STATE(21),
    [sym_operators] = STATE(21),
    [sym_unit] = STATE(21),
    [sym__unit] = STATE(10),
    [sym_string] = STATE(21),
    [sym_list] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(4),
    [aux_sym_command_repeat1] = STATE(7),
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
    [sym_block] = STATE(21),
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(21),
    [sym_operators] = STATE(21),
    [sym_unit] = STATE(21),
    [sym__unit] = STATE(10),
    [sym_string] = STATE(21),
    [sym_list] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(7),
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
    [sym_block] = STATE(21),
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(21),
    [sym_operators] = STATE(21),
    [sym_unit] = STATE(21),
    [sym__unit] = STATE(10),
    [sym_string] = STATE(21),
    [sym_list] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(7),
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
    [sym_block] = STATE(21),
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(21),
    [sym_operators] = STATE(21),
    [sym_unit] = STATE(21),
    [sym__unit] = STATE(10),
    [sym_string] = STATE(21),
    [sym_list] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(46),
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
    [sym_block] = STATE(21),
    [sym_command] = STATE(3),
    [sym__command_unit] = STATE(21),
    [sym_operators] = STATE(21),
    [sym_unit] = STATE(21),
    [sym__unit] = STATE(10),
    [sym_string] = STATE(21),
    [sym_list] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_command_repeat1] = STATE(7),
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
    [sym_block] = STATE(21),
    [sym__command_unit] = STATE(21),
    [sym_operators] = STATE(21),
    [sym_unit] = STATE(21),
    [sym__unit] = STATE(10),
    [sym_string] = STATE(21),
    [sym_list] = STATE(21),
    [aux_sym_command_repeat1] = STATE(6),
    [anon_sym_LF] = ACTIONS(50),
    [sym_arg_spliter] = ACTIONS(52),
    [anon_sym_PLUS_EQ] = ACTIONS(55),
    [anon_sym_EQ] = ACTIONS(55),
    [anon_sym_DASH_EQ] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(58),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(64),
    [sym_identifier] = ACTIONS(67),
    [sym_number] = ACTIONS(52),
    [sym_comment] = ACTIONS(70),
  },
  [7] = {
    [sym_block] = STATE(21),
    [sym__command_unit] = STATE(21),
    [sym_operators] = STATE(21),
    [sym_unit] = STATE(21),
    [sym__unit] = STATE(10),
    [sym_string] = STATE(21),
    [sym_list] = STATE(21),
    [aux_sym_command_repeat1] = STATE(6),
    [anon_sym_LF] = ACTIONS(72),
    [sym_arg_spliter] = ACTIONS(74),
    [anon_sym_PLUS_EQ] = ACTIONS(11),
    [anon_sym_EQ] = ACTIONS(11),
    [anon_sym_DASH_EQ] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(76),
    [anon_sym_DQUOTE] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(80),
    [sym_identifier] = ACTIONS(82),
    [sym_number] = ACTIONS(74),
    [sym_comment] = ACTIONS(70),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_LF,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_arg_block,
    ACTIONS(84), 13,
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
  [28] = 5,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LF,
    ACTIONS(94), 1,
      anon_sym_DOT,
    STATE(9), 1,
      aux_sym_unit_repeat1,
    ACTIONS(90), 12,
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
  [55] = 5,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      anon_sym_DOT,
    STATE(11), 1,
      aux_sym_unit_repeat1,
    ACTIONS(97), 12,
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
  [82] = 5,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      anon_sym_LF,
    STATE(9), 1,
      aux_sym_unit_repeat1,
    ACTIONS(103), 12,
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
  [109] = 3,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LF,
    ACTIONS(107), 13,
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
  [131] = 3,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_LF,
    ACTIONS(111), 13,
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
  [153] = 3,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LF,
    ACTIONS(90), 13,
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
  [175] = 3,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LF,
    ACTIONS(115), 13,
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
  [197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(119), 11,
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
  [218] = 3,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LF,
    ACTIONS(123), 12,
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
  [239] = 3,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LF,
    ACTIONS(127), 12,
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
  [260] = 3,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_LF,
    ACTIONS(131), 12,
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
  [281] = 3,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_LF,
    ACTIONS(135), 12,
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
  [302] = 4,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      anon_sym_LF,
    ACTIONS(143), 11,
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
  [325] = 3,
    ACTIONS(70), 1,
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
  [346] = 3,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LF,
    ACTIONS(149), 12,
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
  [367] = 3,
    ACTIONS(70), 1,
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
  [388] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    ACTIONS(165), 1,
      sym_identifier,
    STATE(31), 1,
      sym__unit,
    STATE(58), 1,
      sym__args,
    STATE(48), 3,
      sym_unit,
      sym_string,
      sym_list,
  [418] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(167), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym__unit,
    STATE(60), 1,
      sym__args,
    STATE(48), 3,
      sym_unit,
      sym_string,
      sym_list,
  [448] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(169), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym__unit,
    STATE(61), 1,
      sym__args,
    STATE(48), 3,
      sym_unit,
      sym_string,
      sym_list,
  [478] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      sym__unit,
    STATE(62), 1,
      sym__args,
    STATE(48), 3,
      sym_unit,
      sym_string,
      sym_list,
  [508] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    ACTIONS(165), 1,
      sym_identifier,
    STATE(31), 1,
      sym__unit,
    STATE(53), 3,
      sym_unit,
      sym_string,
      sym_list,
  [532] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_arg_block,
    ACTIONS(86), 4,
      sym_arg_spliter,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [548] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_DOT,
    STATE(32), 1,
      aux_sym_unit_repeat1,
    ACTIONS(99), 3,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [563] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_DOT,
    STATE(33), 1,
      aux_sym_unit_repeat1,
    ACTIONS(105), 3,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [578] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_DOT,
    STATE(33), 1,
      aux_sym_unit_repeat1,
    ACTIONS(92), 3,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [593] = 4,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      aux_sym_string_repeat2,
    ACTIONS(182), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 4,
      sym_arg_spliter,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [617] = 4,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_SQUOTE,
    STATE(49), 1,
      aux_sym_string_repeat1,
    ACTIONS(186), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [631] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_arg_spliter,
    STATE(39), 1,
      aux_sym__args_repeat1,
    ACTIONS(190), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [645] = 4,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      aux_sym_string_repeat2,
    ACTIONS(192), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [659] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_arg_spliter,
    STATE(39), 1,
      aux_sym__args_repeat1,
    ACTIONS(197), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [673] = 4,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      aux_sym_string_repeat2,
    ACTIONS(201), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [687] = 4,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(41), 1,
      aux_sym_string_repeat1,
    ACTIONS(206), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [701] = 4,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      aux_sym_string_repeat2,
    ACTIONS(182), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [715] = 4,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    STATE(41), 1,
      aux_sym_string_repeat1,
    ACTIONS(211), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [729] = 4,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      aux_sym_string_repeat2,
    ACTIONS(215), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [743] = 4,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(43), 1,
      aux_sym_string_repeat1,
    ACTIONS(217), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 4,
      sym_arg_spliter,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 4,
      sym_arg_spliter,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_arg_spliter,
    STATE(37), 1,
      aux_sym__args_repeat1,
    ACTIONS(219), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [791] = 4,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_SQUOTE,
    STATE(41), 1,
      aux_sym_string_repeat1,
    ACTIONS(211), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 4,
      sym_arg_spliter,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 3,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 3,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 3,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 3,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 3,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_identifier,
    STATE(35), 1,
      sym__unit,
  [870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(14), 1,
      sym__unit,
  [880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
  [887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
  [894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_RBRACK,
  [901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
  [908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 28,
  [SMALL_STATE(10)] = 55,
  [SMALL_STATE(11)] = 82,
  [SMALL_STATE(12)] = 109,
  [SMALL_STATE(13)] = 131,
  [SMALL_STATE(14)] = 153,
  [SMALL_STATE(15)] = 175,
  [SMALL_STATE(16)] = 197,
  [SMALL_STATE(17)] = 218,
  [SMALL_STATE(18)] = 239,
  [SMALL_STATE(19)] = 260,
  [SMALL_STATE(20)] = 281,
  [SMALL_STATE(21)] = 302,
  [SMALL_STATE(22)] = 325,
  [SMALL_STATE(23)] = 346,
  [SMALL_STATE(24)] = 367,
  [SMALL_STATE(25)] = 388,
  [SMALL_STATE(26)] = 418,
  [SMALL_STATE(27)] = 448,
  [SMALL_STATE(28)] = 478,
  [SMALL_STATE(29)] = 508,
  [SMALL_STATE(30)] = 532,
  [SMALL_STATE(31)] = 548,
  [SMALL_STATE(32)] = 563,
  [SMALL_STATE(33)] = 578,
  [SMALL_STATE(34)] = 593,
  [SMALL_STATE(35)] = 607,
  [SMALL_STATE(36)] = 617,
  [SMALL_STATE(37)] = 631,
  [SMALL_STATE(38)] = 645,
  [SMALL_STATE(39)] = 659,
  [SMALL_STATE(40)] = 673,
  [SMALL_STATE(41)] = 687,
  [SMALL_STATE(42)] = 701,
  [SMALL_STATE(43)] = 715,
  [SMALL_STATE(44)] = 729,
  [SMALL_STATE(45)] = 743,
  [SMALL_STATE(46)] = 757,
  [SMALL_STATE(47)] = 767,
  [SMALL_STATE(48)] = 777,
  [SMALL_STATE(49)] = 791,
  [SMALL_STATE(50)] = 805,
  [SMALL_STATE(51)] = 815,
  [SMALL_STATE(52)] = 824,
  [SMALL_STATE(53)] = 833,
  [SMALL_STATE(54)] = 842,
  [SMALL_STATE(55)] = 851,
  [SMALL_STATE(56)] = 860,
  [SMALL_STATE(57)] = 870,
  [SMALL_STATE(58)] = 880,
  [SMALL_STATE(59)] = 887,
  [SMALL_STATE(60)] = 894,
  [SMALL_STATE(61)] = 901,
  [SMALL_STATE(62)] = 908,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(21),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(17),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(36),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(38),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(26),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(8),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unit, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unit, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(57),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unit, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unit, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_block, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_block, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_block, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_block, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operators, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operators, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(56),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__args, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(29),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(40),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(41),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__args, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [223] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
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

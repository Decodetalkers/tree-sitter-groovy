#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 62
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_LF = 3,
  sym_arg_spliter = 4,
  sym_operators = 5,
  anon_sym_DOT = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_SQUOTE = 9,
  aux_sym_string_token1 = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_string_token2 = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  sym_identifier = 15,
  sym_escape_sequence = 16,
  sym_number = 17,
  sym_comment = 18,
  sym_source_file = 19,
  sym_block = 20,
  sym_command = 21,
  sym__command_unit = 22,
  sym_unit = 23,
  sym__unit = 24,
  sym_arg_block = 25,
  sym_string = 26,
  sym_list = 27,
  sym__args = 28,
  aux_sym_source_file_repeat1 = 29,
  aux_sym_command_repeat1 = 30,
  aux_sym_unit_repeat1 = 31,
  aux_sym_string_repeat1 = 32,
  aux_sym_string_repeat2 = 33,
  aux_sym__args_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LF] = "\n",
  [sym_arg_spliter] = "arg_spliter",
  [sym_operators] = "operators",
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
  [sym_operators] = sym_operators,
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
  [sym_operators] = {
    .visible = true,
    .named = true,
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
  [17] = 15,
  [18] = 18,
  [19] = 16,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 8,
  [30] = 11,
  [31] = 9,
  [32] = 10,
  [33] = 33,
  [34] = 13,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 37,
  [44] = 35,
  [45] = 18,
  [46] = 14,
  [47] = 41,
  [48] = 42,
  [49] = 12,
  [50] = 24,
  [51] = 26,
  [52] = 52,
  [53] = 25,
  [54] = 21,
  [55] = 55,
  [56] = 55,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 59,
  [61] = 57,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(48);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(48);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '^') ADVANCE(40);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '^') ADVANCE(35);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 'u') ADVANCE(6);
      if (lookahead == 'x') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(46);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 6:
      if (lookahead == '{') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == '}') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 9:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(51);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(52);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
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
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(48);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
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
      ACCEPT_TOKEN(sym_operators);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(44);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '0') ADVANCE(54);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(9);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(10);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(16);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(47);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
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
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
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
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 0},
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_arg_spliter] = ACTIONS(1),
    [sym_operators] = ACTIONS(1),
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
    [sym_source_file] = STATE(58),
    [sym_block] = STATE(22),
    [sym_command] = STATE(3),
    [sym__command_unit] = STATE(22),
    [sym_unit] = STATE(22),
    [sym__unit] = STATE(9),
    [sym_string] = STATE(22),
    [sym_list] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_command_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_arg_spliter] = ACTIONS(7),
    [sym_operators] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_number] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_block] = STATE(22),
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(22),
    [sym_unit] = STATE(22),
    [sym__unit] = STATE(9),
    [sym_string] = STATE(22),
    [sym_list] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(17),
    [sym_arg_spliter] = ACTIONS(19),
    [sym_operators] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(22),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(28),
    [sym_identifier] = ACTIONS(31),
    [sym_number] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_block] = STATE(22),
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(22),
    [sym_unit] = STATE(22),
    [sym__unit] = STATE(9),
    [sym_string] = STATE(22),
    [sym_list] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(34),
    [sym_arg_spliter] = ACTIONS(7),
    [sym_operators] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_number] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_block] = STATE(22),
    [sym_command] = STATE(5),
    [sym__command_unit] = STATE(22),
    [sym_unit] = STATE(22),
    [sym__unit] = STATE(9),
    [sym_string] = STATE(22),
    [sym_list] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_command_repeat1] = STATE(7),
    [anon_sym_RBRACE] = ACTIONS(36),
    [sym_arg_spliter] = ACTIONS(7),
    [sym_operators] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_number] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_block] = STATE(22),
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(22),
    [sym_unit] = STATE(22),
    [sym__unit] = STATE(9),
    [sym_string] = STATE(22),
    [sym_list] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_command_repeat1] = STATE(7),
    [anon_sym_RBRACE] = ACTIONS(38),
    [sym_arg_spliter] = ACTIONS(7),
    [sym_operators] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_number] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(40), 1,
      anon_sym_LF,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(57), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_command_repeat1,
    STATE(9), 1,
      sym__unit,
    ACTIONS(42), 3,
      sym_arg_spliter,
      sym_operators,
      sym_number,
    STATE(22), 5,
      sym_block,
      sym__command_unit,
      sym_unit,
      sym_string,
      sym_list,
  [37] = 10,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(6), 1,
      aux_sym_command_repeat1,
    STATE(9), 1,
      sym__unit,
    ACTIONS(61), 3,
      sym_arg_spliter,
      sym_operators,
      sym_number,
    STATE(22), 5,
      sym_block,
      sym__command_unit,
      sym_unit,
      sym_string,
      sym_list,
  [74] = 5,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LF,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_arg_block,
    ACTIONS(71), 9,
      anon_sym_LBRACE,
      sym_arg_spliter,
      sym_operators,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [98] = 5,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LF,
    ACTIONS(81), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym_unit_repeat1,
    ACTIONS(77), 8,
      anon_sym_LBRACE,
      sym_arg_spliter,
      sym_operators,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [121] = 5,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_DOT,
    ACTIONS(85), 1,
      anon_sym_LF,
    STATE(11), 1,
      aux_sym_unit_repeat1,
    ACTIONS(83), 8,
      anon_sym_LBRACE,
      sym_arg_spliter,
      sym_operators,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [144] = 5,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_LF,
    ACTIONS(91), 1,
      anon_sym_DOT,
    STATE(11), 1,
      aux_sym_unit_repeat1,
    ACTIONS(87), 8,
      anon_sym_LBRACE,
      sym_arg_spliter,
      sym_operators,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [167] = 3,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LF,
    ACTIONS(94), 9,
      anon_sym_LBRACE,
      sym_arg_spliter,
      sym_operators,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [185] = 3,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_LF,
    ACTIONS(87), 9,
      anon_sym_LBRACE,
      sym_arg_spliter,
      sym_operators,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [203] = 3,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_LF,
    ACTIONS(98), 9,
      anon_sym_LBRACE,
      sym_arg_spliter,
      sym_operators,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [221] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    ACTIONS(104), 1,
      anon_sym_SQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(110), 1,
      sym_identifier,
    STATE(31), 1,
      sym__unit,
    STATE(61), 1,
      sym__args,
    STATE(33), 3,
      sym_unit,
      sym_string,
      sym_list,
  [251] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_SQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym__unit,
    STATE(60), 1,
      sym__args,
    STATE(33), 3,
      sym_unit,
      sym_string,
      sym_list,
  [281] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_SQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      sym__unit,
    STATE(57), 1,
      sym__args,
    STATE(33), 3,
      sym_unit,
      sym_string,
      sym_list,
  [311] = 3,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_LF,
    ACTIONS(116), 9,
      anon_sym_LBRACE,
      sym_arg_spliter,
      sym_operators,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [329] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_SQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym__unit,
    STATE(59), 1,
      sym__args,
    STATE(33), 3,
      sym_unit,
      sym_string,
      sym_list,
  [359] = 3,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LF,
    ACTIONS(122), 8,
      anon_sym_LBRACE,
      sym_arg_spliter,
      sym_operators,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [376] = 3,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_LF,
    ACTIONS(126), 8,
      anon_sym_LBRACE,
      sym_arg_spliter,
      sym_operators,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [393] = 4,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      anon_sym_LF,
    ACTIONS(134), 7,
      sym_arg_spliter,
      sym_operators,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_arg_spliter,
      sym_operators,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [427] = 3,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_LF,
    ACTIONS(138), 8,
      anon_sym_LBRACE,
      sym_arg_spliter,
      sym_operators,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [444] = 3,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_LF,
    ACTIONS(142), 8,
      anon_sym_LBRACE,
      sym_arg_spliter,
      sym_operators,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [461] = 3,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_LF,
    ACTIONS(146), 8,
      anon_sym_LBRACE,
      sym_arg_spliter,
      sym_operators,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [478] = 3,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_LF,
    ACTIONS(150), 8,
      anon_sym_LBRACE,
      sym_arg_spliter,
      sym_operators,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [495] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_SQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(110), 1,
      sym_identifier,
    STATE(31), 1,
      sym__unit,
    STATE(52), 3,
      sym_unit,
      sym_string,
      sym_list,
  [519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_arg_block,
    ACTIONS(73), 4,
      sym_arg_spliter,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [535] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_DOT,
    STATE(30), 1,
      aux_sym_unit_repeat1,
    ACTIONS(89), 3,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [550] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_DOT,
    STATE(32), 1,
      aux_sym_unit_repeat1,
    ACTIONS(79), 3,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_DOT,
    STATE(30), 1,
      aux_sym_unit_repeat1,
    ACTIONS(85), 3,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym_arg_spliter,
    STATE(36), 1,
      aux_sym__args_repeat1,
    ACTIONS(163), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 4,
      sym_arg_spliter,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [604] = 4,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_SQUOTE,
    STATE(48), 1,
      aux_sym_string_repeat1,
    ACTIONS(167), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym_arg_spliter,
    STATE(38), 1,
      aux_sym__args_repeat1,
    ACTIONS(169), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [632] = 4,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      aux_sym_string_repeat2,
    ACTIONS(171), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [646] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_arg_spliter,
    STATE(38), 1,
      aux_sym__args_repeat1,
    ACTIONS(176), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [660] = 4,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      aux_sym_string_repeat2,
    ACTIONS(180), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [674] = 4,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    STATE(40), 1,
      aux_sym_string_repeat1,
    ACTIONS(185), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [688] = 4,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      aux_sym_string_repeat2,
    ACTIONS(190), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [702] = 4,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
    STATE(40), 1,
      aux_sym_string_repeat1,
    ACTIONS(192), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [716] = 4,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      aux_sym_string_repeat2,
    ACTIONS(196), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [730] = 4,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(42), 1,
      aux_sym_string_repeat1,
    ACTIONS(198), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 4,
      sym_arg_spliter,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 4,
      sym_arg_spliter,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [764] = 4,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      aux_sym_string_repeat2,
    ACTIONS(190), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [778] = 4,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    STATE(40), 1,
      aux_sym_string_repeat1,
    ACTIONS(192), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 4,
      sym_arg_spliter,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 3,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 3,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 3,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 3,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 3,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym_identifier,
    STATE(34), 1,
      sym__unit,
  [857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(13), 1,
      sym__unit,
  [867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
  [874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
  [881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_RBRACK,
  [888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_RBRACK,
  [895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 37,
  [SMALL_STATE(8)] = 74,
  [SMALL_STATE(9)] = 98,
  [SMALL_STATE(10)] = 121,
  [SMALL_STATE(11)] = 144,
  [SMALL_STATE(12)] = 167,
  [SMALL_STATE(13)] = 185,
  [SMALL_STATE(14)] = 203,
  [SMALL_STATE(15)] = 221,
  [SMALL_STATE(16)] = 251,
  [SMALL_STATE(17)] = 281,
  [SMALL_STATE(18)] = 311,
  [SMALL_STATE(19)] = 329,
  [SMALL_STATE(20)] = 359,
  [SMALL_STATE(21)] = 376,
  [SMALL_STATE(22)] = 393,
  [SMALL_STATE(23)] = 412,
  [SMALL_STATE(24)] = 427,
  [SMALL_STATE(25)] = 444,
  [SMALL_STATE(26)] = 461,
  [SMALL_STATE(27)] = 478,
  [SMALL_STATE(28)] = 495,
  [SMALL_STATE(29)] = 519,
  [SMALL_STATE(30)] = 535,
  [SMALL_STATE(31)] = 550,
  [SMALL_STATE(32)] = 565,
  [SMALL_STATE(33)] = 580,
  [SMALL_STATE(34)] = 594,
  [SMALL_STATE(35)] = 604,
  [SMALL_STATE(36)] = 618,
  [SMALL_STATE(37)] = 632,
  [SMALL_STATE(38)] = 646,
  [SMALL_STATE(39)] = 660,
  [SMALL_STATE(40)] = 674,
  [SMALL_STATE(41)] = 688,
  [SMALL_STATE(42)] = 702,
  [SMALL_STATE(43)] = 716,
  [SMALL_STATE(44)] = 730,
  [SMALL_STATE(45)] = 744,
  [SMALL_STATE(46)] = 754,
  [SMALL_STATE(47)] = 764,
  [SMALL_STATE(48)] = 778,
  [SMALL_STATE(49)] = 792,
  [SMALL_STATE(50)] = 802,
  [SMALL_STATE(51)] = 811,
  [SMALL_STATE(52)] = 820,
  [SMALL_STATE(53)] = 829,
  [SMALL_STATE(54)] = 838,
  [SMALL_STATE(55)] = 847,
  [SMALL_STATE(56)] = 857,
  [SMALL_STATE(57)] = 867,
  [SMALL_STATE(58)] = 874,
  [SMALL_STATE(59)] = 881,
  [SMALL_STATE(60)] = 888,
  [SMALL_STATE(61)] = 895,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(22),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(35),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(37),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(19),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(8),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unit, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unit, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(56),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_block, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_block, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_block, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_block, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unit, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unit, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(55),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__args, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__args, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(28),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(39),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(40),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [204] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
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

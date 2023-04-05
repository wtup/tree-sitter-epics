#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_comment_token1 = 1,
  aux_sym_comment_token2 = 2,
  anon_sym_record = 3,
  anon_sym_LPAREN = 4,
  anon_sym_COMMA = 5,
  anon_sym_RPAREN = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_field = 9,
  anon_sym_alias = 10,
  anon_sym_info = 11,
  sym_field_type = 12,
  anon_sym_aai = 13,
  anon_sym_aao = 14,
  anon_sym_ai = 15,
  anon_sym_ao = 16,
  anon_sym_aSub = 17,
  anon_sym_bi = 18,
  anon_sym_bo = 19,
  anon_sym_calcout = 20,
  anon_sym_calc = 21,
  anon_sym_compress = 22,
  anon_sym_dfanout = 23,
  anon_sym_event = 24,
  anon_sym_fanout = 25,
  anon_sym_histogram = 26,
  anon_sym_int64in = 27,
  anon_sym_int64out = 28,
  anon_sym_longin = 29,
  anon_sym_longout = 30,
  anon_sym_lsi = 31,
  anon_sym_lso = 32,
  anon_sym_mbbiDirect = 33,
  anon_sym_mbboDirect = 34,
  anon_sym_mbbi = 35,
  anon_sym_mbbo = 36,
  anon_sym_permissive = 37,
  anon_sym_printf = 38,
  anon_sym_sel = 39,
  anon_sym_seq = 40,
  anon_sym_state = 41,
  anon_sym_stringin = 42,
  anon_sym_stringout = 43,
  anon_sym_subArray = 44,
  anon_sym_sub = 45,
  anon_sym_waveform = 46,
  anon_sym_DQUOTE = 47,
  aux_sym_string_token1 = 48,
  sym_source_file = 49,
  sym_comment = 50,
  sym_record = 51,
  sym_record_name = 52,
  sym_fields = 53,
  sym_field = 54,
  sym_alias = 55,
  sym_info = 56,
  sym_field_val = 57,
  sym_record_type = 58,
  sym_string = 59,
  aux_sym_source_file_repeat1 = 60,
  aux_sym_fields_repeat1 = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_record] = "record",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_field] = "field",
  [anon_sym_alias] = "alias",
  [anon_sym_info] = "info",
  [sym_field_type] = "field_type",
  [anon_sym_aai] = "aai",
  [anon_sym_aao] = "aao",
  [anon_sym_ai] = "ai",
  [anon_sym_ao] = "ao",
  [anon_sym_aSub] = "aSub",
  [anon_sym_bi] = "bi",
  [anon_sym_bo] = "bo",
  [anon_sym_calcout] = "calcout",
  [anon_sym_calc] = "calc",
  [anon_sym_compress] = "compress",
  [anon_sym_dfanout] = "dfanout",
  [anon_sym_event] = "event",
  [anon_sym_fanout] = "fanout",
  [anon_sym_histogram] = "histogram",
  [anon_sym_int64in] = "int64in",
  [anon_sym_int64out] = "int64out",
  [anon_sym_longin] = "longin",
  [anon_sym_longout] = "longout",
  [anon_sym_lsi] = "lsi",
  [anon_sym_lso] = "lso",
  [anon_sym_mbbiDirect] = "mbbiDirect",
  [anon_sym_mbboDirect] = "mbboDirect",
  [anon_sym_mbbi] = "mbbi",
  [anon_sym_mbbo] = "mbbo",
  [anon_sym_permissive] = "permissive",
  [anon_sym_printf] = "printf",
  [anon_sym_sel] = "sel",
  [anon_sym_seq] = "seq",
  [anon_sym_state] = "state",
  [anon_sym_stringin] = "stringin",
  [anon_sym_stringout] = "stringout",
  [anon_sym_subArray] = "subArray",
  [anon_sym_sub] = "sub",
  [anon_sym_waveform] = "waveform",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_source_file] = "source_file",
  [sym_comment] = "comment",
  [sym_record] = "record",
  [sym_record_name] = "record_name",
  [sym_fields] = "fields",
  [sym_field] = "field",
  [sym_alias] = "alias",
  [sym_info] = "info",
  [sym_field_val] = "field_val",
  [sym_record_type] = "record_type",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_fields_repeat1] = "fields_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_record] = anon_sym_record,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_field] = anon_sym_field,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_info] = anon_sym_info,
  [sym_field_type] = sym_field_type,
  [anon_sym_aai] = anon_sym_aai,
  [anon_sym_aao] = anon_sym_aao,
  [anon_sym_ai] = anon_sym_ai,
  [anon_sym_ao] = anon_sym_ao,
  [anon_sym_aSub] = anon_sym_aSub,
  [anon_sym_bi] = anon_sym_bi,
  [anon_sym_bo] = anon_sym_bo,
  [anon_sym_calcout] = anon_sym_calcout,
  [anon_sym_calc] = anon_sym_calc,
  [anon_sym_compress] = anon_sym_compress,
  [anon_sym_dfanout] = anon_sym_dfanout,
  [anon_sym_event] = anon_sym_event,
  [anon_sym_fanout] = anon_sym_fanout,
  [anon_sym_histogram] = anon_sym_histogram,
  [anon_sym_int64in] = anon_sym_int64in,
  [anon_sym_int64out] = anon_sym_int64out,
  [anon_sym_longin] = anon_sym_longin,
  [anon_sym_longout] = anon_sym_longout,
  [anon_sym_lsi] = anon_sym_lsi,
  [anon_sym_lso] = anon_sym_lso,
  [anon_sym_mbbiDirect] = anon_sym_mbbiDirect,
  [anon_sym_mbboDirect] = anon_sym_mbboDirect,
  [anon_sym_mbbi] = anon_sym_mbbi,
  [anon_sym_mbbo] = anon_sym_mbbo,
  [anon_sym_permissive] = anon_sym_permissive,
  [anon_sym_printf] = anon_sym_printf,
  [anon_sym_sel] = anon_sym_sel,
  [anon_sym_seq] = anon_sym_seq,
  [anon_sym_state] = anon_sym_state,
  [anon_sym_stringin] = anon_sym_stringin,
  [anon_sym_stringout] = anon_sym_stringout,
  [anon_sym_subArray] = anon_sym_subArray,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_waveform] = anon_sym_waveform,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_source_file] = sym_source_file,
  [sym_comment] = sym_comment,
  [sym_record] = sym_record,
  [sym_record_name] = sym_record_name,
  [sym_fields] = sym_fields,
  [sym_field] = sym_field,
  [sym_alias] = sym_alias,
  [sym_info] = sym_info,
  [sym_field_val] = sym_field_val,
  [sym_record_type] = sym_record_type,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_fields_repeat1] = aux_sym_fields_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_record] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_field] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_info] = {
    .visible = true,
    .named = false,
  },
  [sym_field_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_aai] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aao] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ai] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ao] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aSub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_calcout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_calc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compress] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dfanout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_event] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fanout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_histogram] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_longin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_longout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lsi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lso] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mbbiDirect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mbboDirect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mbbi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mbbo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_permissive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_printf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_state] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stringin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stringout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_waveform] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_record] = {
    .visible = true,
    .named = true,
  },
  [sym_record_name] = {
    .visible = true,
    .named = true,
  },
  [sym_fields] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_info] = {
    .visible = true,
    .named = true,
  },
  [sym_field_val] = {
    .visible = true,
    .named = true,
  },
  [sym_record_type] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fields_repeat1] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(121);
      if (lookahead == '"') ADVANCE(172);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '(') ADVANCE(129);
      if (lookahead == ')') ADVANCE(131);
      if (lookahead == ',') ADVANCE(130);
      if (lookahead == '\\') SKIP(120)
      if (lookahead == 'a') ADVANCE(4);
      if (lookahead == 'b') ADVANCE(41);
      if (lookahead == 'c') ADVANCE(5);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'h') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == 'p') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == 'w') ADVANCE(11);
      if (lookahead == '{') ADVANCE(132);
      if (lookahead == '}') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(176);
      END_STATE();
    case 2:
      if (lookahead == '4') ADVANCE(50);
      END_STATE();
    case 3:
      if (lookahead == '6') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == 'S') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == 'l') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(170);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(142);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'b') ADVANCE(45);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(128);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == 't') ADVANCE(9);
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(163);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(12);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(73);
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(78);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(49);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(85);
      END_STATE();
    case 40:
      if (lookahead == 'g') ADVANCE(52);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead == 'q') ADVANCE(165);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(171);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(151);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(65);
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 80:
      if (lookahead == 'p') ADVANCE(87);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 108:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 109:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 110:
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 111:
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 112:
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 113:
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 114:
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 115:
      if (lookahead == 'v') ADVANCE(31);
      END_STATE();
    case 116:
      if (lookahead == 'v') ADVANCE(28);
      END_STATE();
    case 117:
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 118:
      if (lookahead == 'y') ADVANCE(169);
      END_STATE();
    case 119:
      if (eof) ADVANCE(121);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 120:
      if (eof) ADVANCE(121);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(119)
      END_STATE();
    case 121:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(127);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(176);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\r') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(127);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_field_type);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_aai);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_aao);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_ai);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_ao);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_aSub);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_bi);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_bo);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_calcout);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_calc);
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_compress);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_dfanout);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_fanout);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_histogram);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_int64in);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_int64out);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_longin);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_longout);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_lsi);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_lso);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_mbbiDirect);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_mbboDirect);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_mbbi);
      if (lookahead == 'D') ADVANCE(51);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_mbbo);
      if (lookahead == 'D') ADVANCE(55);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_permissive);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_printf);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_sel);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_seq);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_state);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_stringin);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_stringout);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_subArray);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_sub);
      if (lookahead == 'A') ADVANCE(86);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_waveform);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(175);
      if (lookahead == '\r') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(176);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(176);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(176);
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
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 126},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 137},
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
  [40] = {.lex_state = 126},
  [41] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_record] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_field] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_info] = ACTIONS(1),
    [anon_sym_aai] = ACTIONS(1),
    [anon_sym_aao] = ACTIONS(1),
    [anon_sym_ai] = ACTIONS(1),
    [anon_sym_ao] = ACTIONS(1),
    [anon_sym_aSub] = ACTIONS(1),
    [anon_sym_bi] = ACTIONS(1),
    [anon_sym_bo] = ACTIONS(1),
    [anon_sym_calcout] = ACTIONS(1),
    [anon_sym_calc] = ACTIONS(1),
    [anon_sym_compress] = ACTIONS(1),
    [anon_sym_dfanout] = ACTIONS(1),
    [anon_sym_event] = ACTIONS(1),
    [anon_sym_fanout] = ACTIONS(1),
    [anon_sym_histogram] = ACTIONS(1),
    [anon_sym_int64in] = ACTIONS(1),
    [anon_sym_int64out] = ACTIONS(1),
    [anon_sym_longin] = ACTIONS(1),
    [anon_sym_longout] = ACTIONS(1),
    [anon_sym_lsi] = ACTIONS(1),
    [anon_sym_lso] = ACTIONS(1),
    [anon_sym_mbbiDirect] = ACTIONS(1),
    [anon_sym_mbboDirect] = ACTIONS(1),
    [anon_sym_mbbi] = ACTIONS(1),
    [anon_sym_mbbo] = ACTIONS(1),
    [anon_sym_permissive] = ACTIONS(1),
    [anon_sym_printf] = ACTIONS(1),
    [anon_sym_sel] = ACTIONS(1),
    [anon_sym_seq] = ACTIONS(1),
    [anon_sym_state] = ACTIONS(1),
    [anon_sym_stringin] = ACTIONS(1),
    [anon_sym_stringout] = ACTIONS(1),
    [anon_sym_subArray] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_waveform] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(35),
    [sym_comment] = STATE(1),
    [sym_record] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_record] = ACTIONS(9),
  },
  [2] = {
    [sym_comment] = STATE(2),
    [sym_record_type] = STATE(30),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_aai] = ACTIONS(11),
    [anon_sym_aao] = ACTIONS(11),
    [anon_sym_ai] = ACTIONS(11),
    [anon_sym_ao] = ACTIONS(11),
    [anon_sym_aSub] = ACTIONS(11),
    [anon_sym_bi] = ACTIONS(11),
    [anon_sym_bo] = ACTIONS(11),
    [anon_sym_calcout] = ACTIONS(11),
    [anon_sym_calc] = ACTIONS(13),
    [anon_sym_compress] = ACTIONS(11),
    [anon_sym_dfanout] = ACTIONS(11),
    [anon_sym_event] = ACTIONS(11),
    [anon_sym_fanout] = ACTIONS(11),
    [anon_sym_histogram] = ACTIONS(11),
    [anon_sym_int64in] = ACTIONS(11),
    [anon_sym_int64out] = ACTIONS(11),
    [anon_sym_longin] = ACTIONS(11),
    [anon_sym_longout] = ACTIONS(11),
    [anon_sym_lsi] = ACTIONS(11),
    [anon_sym_lso] = ACTIONS(11),
    [anon_sym_mbbiDirect] = ACTIONS(11),
    [anon_sym_mbboDirect] = ACTIONS(11),
    [anon_sym_mbbi] = ACTIONS(13),
    [anon_sym_mbbo] = ACTIONS(13),
    [anon_sym_permissive] = ACTIONS(11),
    [anon_sym_printf] = ACTIONS(11),
    [anon_sym_sel] = ACTIONS(11),
    [anon_sym_seq] = ACTIONS(11),
    [anon_sym_state] = ACTIONS(11),
    [anon_sym_stringin] = ACTIONS(11),
    [anon_sym_stringout] = ACTIONS(11),
    [anon_sym_subArray] = ACTIONS(11),
    [anon_sym_sub] = ACTIONS(13),
    [anon_sym_waveform] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 1,
      anon_sym_field,
    ACTIONS(19), 1,
      anon_sym_alias,
    ACTIONS(21), 1,
      anon_sym_info,
    STATE(3), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_fields_repeat1,
    STATE(11), 3,
      sym_field,
      sym_alias,
      sym_info,
  [27] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 1,
      anon_sym_field,
    ACTIONS(28), 1,
      anon_sym_alias,
    ACTIONS(31), 1,
      anon_sym_info,
    STATE(4), 2,
      sym_comment,
      aux_sym_fields_repeat1,
    STATE(11), 3,
      sym_field,
      sym_alias,
      sym_info,
  [52] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      anon_sym_field,
    ACTIONS(19), 1,
      anon_sym_alias,
    ACTIONS(21), 1,
      anon_sym_info,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_fields_repeat1,
    STATE(5), 1,
      sym_comment,
    STATE(11), 3,
      sym_field,
      sym_alias,
      sym_info,
  [79] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(6), 1,
      sym_comment,
    ACTIONS(36), 4,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_alias,
      anon_sym_info,
  [92] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(7), 1,
      sym_comment,
    ACTIONS(38), 4,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_alias,
      anon_sym_info,
  [105] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(8), 1,
      sym_comment,
    ACTIONS(40), 4,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_alias,
      anon_sym_info,
  [118] = 5,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_record,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym_comment,
    STATE(10), 2,
      sym_record,
      aux_sym_source_file_repeat1,
  [135] = 4,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      aux_sym_comment_token1,
    ACTIONS(49), 1,
      anon_sym_record,
    STATE(10), 3,
      sym_comment,
      sym_record,
      aux_sym_source_file_repeat1,
  [150] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(11), 1,
      sym_comment,
    ACTIONS(52), 4,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_alias,
      anon_sym_info,
  [163] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_comment,
    STATE(36), 1,
      sym_field_val,
    STATE(37), 1,
      sym_string,
  [179] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_comment,
    STATE(22), 1,
      sym_record_name,
    STATE(28), 1,
      sym_string,
  [195] = 2,
    STATE(14), 1,
      sym_comment,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_record,
  [204] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_comment,
    STATE(32), 1,
      sym_string,
  [217] = 2,
    STATE(16), 1,
      sym_comment,
    ACTIONS(58), 3,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_record,
  [226] = 2,
    STATE(17), 1,
      sym_comment,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_record,
  [235] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(62), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_comment,
    STATE(20), 1,
      sym_fields,
  [248] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      sym_comment,
    STATE(33), 1,
      sym_string,
  [261] = 2,
    STATE(20), 1,
      sym_comment,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_record,
  [270] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_comment,
  [280] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(68), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_comment,
  [290] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_comment,
  [300] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_comment,
  [310] = 3,
    ACTIONS(74), 1,
      aux_sym_comment_token1,
    ACTIONS(76), 1,
      aux_sym_comment_token2,
    STATE(25), 1,
      sym_comment,
  [320] = 3,
    ACTIONS(74), 1,
      aux_sym_comment_token1,
    ACTIONS(78), 1,
      aux_sym_string_token1,
    STATE(26), 1,
      sym_comment,
  [330] = 3,
    ACTIONS(74), 1,
      aux_sym_comment_token1,
    ACTIONS(80), 1,
      sym_field_type,
    STATE(27), 1,
      sym_comment,
  [340] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_comment,
  [350] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym_comment,
  [360] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(86), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      sym_comment,
  [370] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      sym_comment,
  [380] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(90), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      sym_comment,
  [390] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      sym_comment,
  [400] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      sym_comment,
  [410] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      sym_comment,
  [420] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      sym_comment,
  [430] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      sym_comment,
  [440] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_comment,
  [450] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      sym_comment,
  [460] = 3,
    ACTIONS(74), 1,
      aux_sym_comment_token1,
    ACTIONS(106), 1,
      aux_sym_comment_token2,
    STATE(40), 1,
      sym_comment,
  [470] = 1,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 27,
  [SMALL_STATE(5)] = 52,
  [SMALL_STATE(6)] = 79,
  [SMALL_STATE(7)] = 92,
  [SMALL_STATE(8)] = 105,
  [SMALL_STATE(9)] = 118,
  [SMALL_STATE(10)] = 135,
  [SMALL_STATE(11)] = 150,
  [SMALL_STATE(12)] = 163,
  [SMALL_STATE(13)] = 179,
  [SMALL_STATE(14)] = 195,
  [SMALL_STATE(15)] = 204,
  [SMALL_STATE(16)] = 217,
  [SMALL_STATE(17)] = 226,
  [SMALL_STATE(18)] = 235,
  [SMALL_STATE(19)] = 248,
  [SMALL_STATE(20)] = 261,
  [SMALL_STATE(21)] = 270,
  [SMALL_STATE(22)] = 280,
  [SMALL_STATE(23)] = 290,
  [SMALL_STATE(24)] = 300,
  [SMALL_STATE(25)] = 310,
  [SMALL_STATE(26)] = 320,
  [SMALL_STATE(27)] = 330,
  [SMALL_STATE(28)] = 340,
  [SMALL_STATE(29)] = 350,
  [SMALL_STATE(30)] = 360,
  [SMALL_STATE(31)] = 370,
  [SMALL_STATE(32)] = 380,
  [SMALL_STATE(33)] = 390,
  [SMALL_STATE(34)] = 400,
  [SMALL_STATE(35)] = 410,
  [SMALL_STATE(36)] = 420,
  [SMALL_STATE(37)] = 430,
  [SMALL_STATE(38)] = 440,
  [SMALL_STATE(39)] = 450,
  [SMALL_STATE(40)] = 460,
  [SMALL_STATE(41)] = 470,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fields_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(21),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(23),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(24),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_info, 4),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fields_repeat1, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 7),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_name, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 1),
  [96] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_val, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_epics(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

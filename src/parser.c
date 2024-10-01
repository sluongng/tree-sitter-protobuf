#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 267
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 123
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_syntax = 2,
  anon_sym_EQ = 3,
  anon_sym_SEMI = 4,
  sym_syntaxValue = 5,
  anon_sym_extend = 6,
  anon_sym_package = 7,
  anon_sym_import = 8,
  anon_sym_option = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_enum = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_DASH = 15,
  anon_sym_LBRACK = 16,
  anon_sym_COMMA = 17,
  anon_sym_RBRACK = 18,
  anon_sym_message = 19,
  anon_sym_service = 20,
  anon_sym_rpc = 21,
  anon_sym_stream = 22,
  anon_sym_returns = 23,
  anon_sym_optional = 24,
  anon_sym_repeated = 25,
  anon_sym_oneof = 26,
  anon_sym_map = 27,
  anon_sym_LT = 28,
  anon_sym_GT = 29,
  anon_sym_int32 = 30,
  anon_sym_int64 = 31,
  anon_sym_uint32 = 32,
  anon_sym_uint64 = 33,
  anon_sym_sint32 = 34,
  anon_sym_sint64 = 35,
  anon_sym_fixed32 = 36,
  anon_sym_fixed64 = 37,
  anon_sym_sfixed32 = 38,
  anon_sym_sfixed64 = 39,
  anon_sym_bool = 40,
  anon_sym_string = 41,
  anon_sym_reserved = 42,
  anon_sym_to = 43,
  anon_sym_max = 44,
  sym_intLit = 45,
  aux_sym_floatLit_token1 = 46,
  aux_sym_floatLit_token2 = 47,
  aux_sym_floatLit_token3 = 48,
  anon_sym_inf = 49,
  anon_sym_nan = 50,
  sym_boolLit = 51,
  anon_sym_DQUOTE = 52,
  aux_sym_strLit_token1 = 53,
  anon_sym_SQUOTE = 54,
  aux_sym_strLit_token2 = 55,
  anon_sym_double = 56,
  anon_sym_float = 57,
  anon_sym_bytes = 58,
  aux_sym_constant_token1 = 59,
  anon_sym_COLON = 60,
  sym_ident = 61,
  anon_sym_DOT = 62,
  sym_sourceFile = 63,
  sym_syntax = 64,
  sym_extend = 65,
  sym_package = 66,
  sym_import = 67,
  sym_option = 68,
  sym_optionName = 69,
  sym_enum = 70,
  sym_enumBody = 71,
  sym_enumField = 72,
  sym_enumValueOption = 73,
  sym_message = 74,
  sym_messageBody = 75,
  sym_service = 76,
  sym_serviceBody = 77,
  sym_rpc = 78,
  sym_rpcBody = 79,
  sym_field = 80,
  sym_fieldOptions = 81,
  sym_fieldOption = 82,
  sym_oneof = 83,
  sym_oneofBody = 84,
  sym_oneofField = 85,
  sym_mapField = 86,
  sym_keyType = 87,
  sym_reserved = 88,
  sym_ranges = 89,
  sym_range = 90,
  sym_fieldNames = 91,
  sym_floatLit = 92,
  sym_strLit = 93,
  sym_type = 94,
  sym_fieldNumber = 95,
  sym_emptyStatement = 96,
  sym_constant = 97,
  sym_msgLit = 98,
  sym_fullIdent = 99,
  sym_extendName = 100,
  sym_messageName = 101,
  sym_mapName = 102,
  sym_enumName = 103,
  sym_fieldName = 104,
  sym_enumVariantName = 105,
  sym_oneofName = 106,
  sym_serviceName = 107,
  sym_rpcName = 108,
  sym_enumMessageType = 109,
  aux_sym_sourceFile_repeat1 = 110,
  aux_sym_enumBody_repeat1 = 111,
  aux_sym_enumField_repeat1 = 112,
  aux_sym_messageBody_repeat1 = 113,
  aux_sym_serviceBody_repeat1 = 114,
  aux_sym_rpcBody_repeat1 = 115,
  aux_sym_fieldOptions_repeat1 = 116,
  aux_sym_oneofBody_repeat1 = 117,
  aux_sym_ranges_repeat1 = 118,
  aux_sym_fieldNames_repeat1 = 119,
  aux_sym_msgLit_repeat1 = 120,
  aux_sym_fullIdent_repeat1 = 121,
  aux_sym_enumMessageType_repeat1 = 122,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_syntax] = "syntax",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [sym_syntaxValue] = "syntaxValue",
  [anon_sym_extend] = "extend",
  [anon_sym_package] = "package",
  [anon_sym_import] = "import",
  [anon_sym_option] = "option",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_enum] = "enum",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH] = "-",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_message] = "message",
  [anon_sym_service] = "service",
  [anon_sym_rpc] = "rpc",
  [anon_sym_stream] = "stream",
  [anon_sym_returns] = "returns",
  [anon_sym_optional] = "optional",
  [anon_sym_repeated] = "repeated",
  [anon_sym_oneof] = "oneof",
  [anon_sym_map] = "map",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_uint32] = "uint32",
  [anon_sym_uint64] = "uint64",
  [anon_sym_sint32] = "sint32",
  [anon_sym_sint64] = "sint64",
  [anon_sym_fixed32] = "fixed32",
  [anon_sym_fixed64] = "fixed64",
  [anon_sym_sfixed32] = "sfixed32",
  [anon_sym_sfixed64] = "sfixed64",
  [anon_sym_bool] = "bool",
  [anon_sym_string] = "string",
  [anon_sym_reserved] = "reserved",
  [anon_sym_to] = "to",
  [anon_sym_max] = "max",
  [sym_intLit] = "intLit",
  [aux_sym_floatLit_token1] = "floatLit_token1",
  [aux_sym_floatLit_token2] = "floatLit_token2",
  [aux_sym_floatLit_token3] = "floatLit_token3",
  [anon_sym_inf] = "inf",
  [anon_sym_nan] = "nan",
  [sym_boolLit] = "boolLit",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_strLit_token1] = "strLit_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_strLit_token2] = "strLit_token2",
  [anon_sym_double] = "double",
  [anon_sym_float] = "float",
  [anon_sym_bytes] = "bytes",
  [aux_sym_constant_token1] = "constant_token1",
  [anon_sym_COLON] = ":",
  [sym_ident] = "ident",
  [anon_sym_DOT] = ".",
  [sym_sourceFile] = "sourceFile",
  [sym_syntax] = "syntax",
  [sym_extend] = "extend",
  [sym_package] = "package",
  [sym_import] = "import",
  [sym_option] = "option",
  [sym_optionName] = "optionName",
  [sym_enum] = "enum",
  [sym_enumBody] = "enumBody",
  [sym_enumField] = "enumField",
  [sym_enumValueOption] = "enumValueOption",
  [sym_message] = "message",
  [sym_messageBody] = "messageBody",
  [sym_service] = "service",
  [sym_serviceBody] = "serviceBody",
  [sym_rpc] = "rpc",
  [sym_rpcBody] = "rpcBody",
  [sym_field] = "field",
  [sym_fieldOptions] = "fieldOptions",
  [sym_fieldOption] = "fieldOption",
  [sym_oneof] = "oneof",
  [sym_oneofBody] = "oneofBody",
  [sym_oneofField] = "oneofField",
  [sym_mapField] = "mapField",
  [sym_keyType] = "keyType",
  [sym_reserved] = "reserved",
  [sym_ranges] = "ranges",
  [sym_range] = "range",
  [sym_fieldNames] = "fieldNames",
  [sym_floatLit] = "floatLit",
  [sym_strLit] = "strLit",
  [sym_type] = "type",
  [sym_fieldNumber] = "fieldNumber",
  [sym_emptyStatement] = "emptyStatement",
  [sym_constant] = "constant",
  [sym_msgLit] = "msgLit",
  [sym_fullIdent] = "fullIdent",
  [sym_extendName] = "extendName",
  [sym_messageName] = "messageName",
  [sym_mapName] = "mapName",
  [sym_enumName] = "enumName",
  [sym_fieldName] = "fieldName",
  [sym_enumVariantName] = "enumVariantName",
  [sym_oneofName] = "oneofName",
  [sym_serviceName] = "serviceName",
  [sym_rpcName] = "rpcName",
  [sym_enumMessageType] = "enumMessageType",
  [aux_sym_sourceFile_repeat1] = "sourceFile_repeat1",
  [aux_sym_enumBody_repeat1] = "enumBody_repeat1",
  [aux_sym_enumField_repeat1] = "enumField_repeat1",
  [aux_sym_messageBody_repeat1] = "messageBody_repeat1",
  [aux_sym_serviceBody_repeat1] = "serviceBody_repeat1",
  [aux_sym_rpcBody_repeat1] = "rpcBody_repeat1",
  [aux_sym_fieldOptions_repeat1] = "fieldOptions_repeat1",
  [aux_sym_oneofBody_repeat1] = "oneofBody_repeat1",
  [aux_sym_ranges_repeat1] = "ranges_repeat1",
  [aux_sym_fieldNames_repeat1] = "fieldNames_repeat1",
  [aux_sym_msgLit_repeat1] = "msgLit_repeat1",
  [aux_sym_fullIdent_repeat1] = "fullIdent_repeat1",
  [aux_sym_enumMessageType_repeat1] = "enumMessageType_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_syntax] = anon_sym_syntax,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_syntaxValue] = sym_syntaxValue,
  [anon_sym_extend] = anon_sym_extend,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_message] = anon_sym_message,
  [anon_sym_service] = anon_sym_service,
  [anon_sym_rpc] = anon_sym_rpc,
  [anon_sym_stream] = anon_sym_stream,
  [anon_sym_returns] = anon_sym_returns,
  [anon_sym_optional] = anon_sym_optional,
  [anon_sym_repeated] = anon_sym_repeated,
  [anon_sym_oneof] = anon_sym_oneof,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_uint32] = anon_sym_uint32,
  [anon_sym_uint64] = anon_sym_uint64,
  [anon_sym_sint32] = anon_sym_sint32,
  [anon_sym_sint64] = anon_sym_sint64,
  [anon_sym_fixed32] = anon_sym_fixed32,
  [anon_sym_fixed64] = anon_sym_fixed64,
  [anon_sym_sfixed32] = anon_sym_sfixed32,
  [anon_sym_sfixed64] = anon_sym_sfixed64,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_reserved] = anon_sym_reserved,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_max] = anon_sym_max,
  [sym_intLit] = sym_intLit,
  [aux_sym_floatLit_token1] = aux_sym_floatLit_token1,
  [aux_sym_floatLit_token2] = aux_sym_floatLit_token2,
  [aux_sym_floatLit_token3] = aux_sym_floatLit_token3,
  [anon_sym_inf] = anon_sym_inf,
  [anon_sym_nan] = anon_sym_nan,
  [sym_boolLit] = sym_boolLit,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_strLit_token1] = aux_sym_strLit_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_strLit_token2] = aux_sym_strLit_token2,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_bytes] = anon_sym_bytes,
  [aux_sym_constant_token1] = aux_sym_constant_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_ident] = sym_ident,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_sourceFile] = sym_sourceFile,
  [sym_syntax] = sym_syntax,
  [sym_extend] = sym_extend,
  [sym_package] = sym_package,
  [sym_import] = sym_import,
  [sym_option] = sym_option,
  [sym_optionName] = sym_optionName,
  [sym_enum] = sym_enum,
  [sym_enumBody] = sym_enumBody,
  [sym_enumField] = sym_enumField,
  [sym_enumValueOption] = sym_enumValueOption,
  [sym_message] = sym_message,
  [sym_messageBody] = sym_messageBody,
  [sym_service] = sym_service,
  [sym_serviceBody] = sym_serviceBody,
  [sym_rpc] = sym_rpc,
  [sym_rpcBody] = sym_rpcBody,
  [sym_field] = sym_field,
  [sym_fieldOptions] = sym_fieldOptions,
  [sym_fieldOption] = sym_fieldOption,
  [sym_oneof] = sym_oneof,
  [sym_oneofBody] = sym_oneofBody,
  [sym_oneofField] = sym_oneofField,
  [sym_mapField] = sym_mapField,
  [sym_keyType] = sym_keyType,
  [sym_reserved] = sym_reserved,
  [sym_ranges] = sym_ranges,
  [sym_range] = sym_range,
  [sym_fieldNames] = sym_fieldNames,
  [sym_floatLit] = sym_floatLit,
  [sym_strLit] = sym_strLit,
  [sym_type] = sym_type,
  [sym_fieldNumber] = sym_fieldNumber,
  [sym_emptyStatement] = sym_emptyStatement,
  [sym_constant] = sym_constant,
  [sym_msgLit] = sym_msgLit,
  [sym_fullIdent] = sym_fullIdent,
  [sym_extendName] = sym_extendName,
  [sym_messageName] = sym_messageName,
  [sym_mapName] = sym_mapName,
  [sym_enumName] = sym_enumName,
  [sym_fieldName] = sym_fieldName,
  [sym_enumVariantName] = sym_enumVariantName,
  [sym_oneofName] = sym_oneofName,
  [sym_serviceName] = sym_serviceName,
  [sym_rpcName] = sym_rpcName,
  [sym_enumMessageType] = sym_enumMessageType,
  [aux_sym_sourceFile_repeat1] = aux_sym_sourceFile_repeat1,
  [aux_sym_enumBody_repeat1] = aux_sym_enumBody_repeat1,
  [aux_sym_enumField_repeat1] = aux_sym_enumField_repeat1,
  [aux_sym_messageBody_repeat1] = aux_sym_messageBody_repeat1,
  [aux_sym_serviceBody_repeat1] = aux_sym_serviceBody_repeat1,
  [aux_sym_rpcBody_repeat1] = aux_sym_rpcBody_repeat1,
  [aux_sym_fieldOptions_repeat1] = aux_sym_fieldOptions_repeat1,
  [aux_sym_oneofBody_repeat1] = aux_sym_oneofBody_repeat1,
  [aux_sym_ranges_repeat1] = aux_sym_ranges_repeat1,
  [aux_sym_fieldNames_repeat1] = aux_sym_fieldNames_repeat1,
  [aux_sym_msgLit_repeat1] = aux_sym_msgLit_repeat1,
  [aux_sym_fullIdent_repeat1] = aux_sym_fullIdent_repeat1,
  [aux_sym_enumMessageType_repeat1] = aux_sym_enumMessageType_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_syntax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_syntaxValue] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_extend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_option] = {
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
  [anon_sym_enum] = {
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_message] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_service] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rpc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stream] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_returns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repeated] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_oneof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixed32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixed64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sfixed32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sfixed64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reserved] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max] = {
    .visible = true,
    .named = false,
  },
  [sym_intLit] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_floatLit_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_floatLit_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_floatLit_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_inf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nan] = {
    .visible = true,
    .named = false,
  },
  [sym_boolLit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_strLit_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_strLit_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_constant_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_sourceFile] = {
    .visible = true,
    .named = true,
  },
  [sym_syntax] = {
    .visible = true,
    .named = true,
  },
  [sym_extend] = {
    .visible = true,
    .named = true,
  },
  [sym_package] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_optionName] = {
    .visible = true,
    .named = true,
  },
  [sym_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_enumBody] = {
    .visible = true,
    .named = true,
  },
  [sym_enumField] = {
    .visible = true,
    .named = true,
  },
  [sym_enumValueOption] = {
    .visible = true,
    .named = true,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_messageBody] = {
    .visible = true,
    .named = true,
  },
  [sym_service] = {
    .visible = true,
    .named = true,
  },
  [sym_serviceBody] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc] = {
    .visible = true,
    .named = true,
  },
  [sym_rpcBody] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_fieldOptions] = {
    .visible = true,
    .named = true,
  },
  [sym_fieldOption] = {
    .visible = true,
    .named = true,
  },
  [sym_oneof] = {
    .visible = true,
    .named = true,
  },
  [sym_oneofBody] = {
    .visible = true,
    .named = true,
  },
  [sym_oneofField] = {
    .visible = true,
    .named = true,
  },
  [sym_mapField] = {
    .visible = true,
    .named = true,
  },
  [sym_keyType] = {
    .visible = true,
    .named = true,
  },
  [sym_reserved] = {
    .visible = true,
    .named = true,
  },
  [sym_ranges] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_fieldNames] = {
    .visible = true,
    .named = true,
  },
  [sym_floatLit] = {
    .visible = true,
    .named = true,
  },
  [sym_strLit] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_fieldNumber] = {
    .visible = true,
    .named = true,
  },
  [sym_emptyStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_msgLit] = {
    .visible = true,
    .named = true,
  },
  [sym_fullIdent] = {
    .visible = true,
    .named = true,
  },
  [sym_extendName] = {
    .visible = true,
    .named = true,
  },
  [sym_messageName] = {
    .visible = true,
    .named = true,
  },
  [sym_mapName] = {
    .visible = true,
    .named = true,
  },
  [sym_enumName] = {
    .visible = true,
    .named = true,
  },
  [sym_fieldName] = {
    .visible = true,
    .named = true,
  },
  [sym_enumVariantName] = {
    .visible = true,
    .named = true,
  },
  [sym_oneofName] = {
    .visible = true,
    .named = true,
  },
  [sym_serviceName] = {
    .visible = true,
    .named = true,
  },
  [sym_rpcName] = {
    .visible = true,
    .named = true,
  },
  [sym_enumMessageType] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_sourceFile_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enumBody_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enumField_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_messageBody_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_serviceBody_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rpcBody_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fieldOptions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_oneofBody_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ranges_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fieldNames_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_msgLit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fullIdent_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enumMessageType_repeat1] = {
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
  [4] = 2,
  [5] = 5,
  [6] = 3,
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
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 35,
  [48] = 39,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 53,
  [55] = 53,
  [56] = 56,
  [57] = 57,
  [58] = 53,
  [59] = 59,
  [60] = 35,
  [61] = 39,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 37,
  [66] = 66,
  [67] = 38,
  [68] = 68,
  [69] = 69,
  [70] = 36,
  [71] = 21,
  [72] = 33,
  [73] = 40,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 68,
  [82] = 66,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 114,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 35,
  [131] = 39,
  [132] = 114,
  [133] = 114,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 188,
  [192] = 173,
  [193] = 193,
  [194] = 176,
  [195] = 183,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 251,
  [254] = 251,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 199,
  [261] = 199,
  [262] = 199,
  [263] = 263,
  [264] = 251,
  [265] = 265,
  [266] = 266,
};

static TSCharacterRange aux_sym_strLit_token1_character_set_1[] = {
  {'"', '"'}, {'\'', '\''}, {'0', '7'}, {'X', 'X'}, {'\\', '\\'}, {'a', 'b'}, {'f', 'f'}, {'n', 'n'},
  {'r', 'r'}, {'t', 't'}, {'v', 'v'}, {'x', 'x'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(175);
      ADVANCE_MAP(
        '"', 277,
        '\'', 283,
        '(', 203,
        ')', 204,
        '+', 295,
        ',', 211,
        '-', 209,
        '.', 402,
        '/', 5,
        '0', 259,
        ':', 296,
        ';', 194,
        '<', 228,
        '=', 193,
        '>', 229,
        'E', 159,
        '[', 210,
        ']', 212,
        'b', 114,
        'd', 110,
        'e', 103,
        'f', 40,
        'i', 95,
        'm', 41,
        'n', 42,
        'o', 99,
        'p', 43,
        'r', 61,
        's', 63,
        't', 111,
        'u', 89,
        '{', 207,
        '}', 208,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 277,
        '\'', 283,
        '.', 162,
        '/', 5,
        '0', 259,
        'f', 316,
        'i', 361,
        'n', 317,
        't', 378,
        '{', 207,
        '+', 295,
        '-', 295,
        'E', 400,
        'e', 400,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(195);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 125,
        ',', 211,
        '-', 209,
        '.', 402,
        '/', 5,
        '0', 263,
        ':', 296,
        ';', 194,
        '=', 193,
        'b', 370,
        'd', 365,
        'e', 360,
        'f', 343,
        'i', 359,
        'm', 312,
        'o', 358,
        'r', 324,
        's', 340,
        'u', 347,
        '}', 208,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '(', 203,
        ')', 204,
        ',', 211,
        '.', 402,
        '/', 5,
        '0', 263,
        ';', 194,
        '=', 193,
        '>', 229,
        ']', 212,
        '{', 207,
        '}', 208,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(191);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(10);
      if (set_contains(aux_sym_strLit_token1_character_set_1, 12, lookahead)) ADVANCE(279);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(11);
      if (set_contains(aux_sym_strLit_token1_character_set_1, 12, lookahead)) ADVANCE(285);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(279);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(285);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(8);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(9);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(285);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        ',', 211,
        '.', 402,
        '/', 5,
        ';', 194,
        'b', 370,
        'd', 365,
        'e', 360,
        'f', 343,
        'i', 359,
        'm', 312,
        'o', 358,
        'r', 324,
        's', 340,
        't', 369,
        'u', 347,
        '}', 208,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '.', 402,
        '/', 5,
        ';', 194,
        'b', 370,
        'd', 365,
        'f', 343,
        'i', 359,
        'o', 376,
        's', 340,
        'u', 347,
        '}', 208,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '.', 402,
        '/', 5,
        'b', 370,
        'd', 365,
        'f', 343,
        'i', 359,
        'r', 331,
        's', 340,
        'u', 347,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '.', 402,
        '/', 5,
        'b', 370,
        'd', 365,
        'f', 343,
        'i', 359,
        's', 340,
        'u', 347,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 's') ADVANCE(389);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(263);
      if (lookahead == 'm') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == 'o') ADVANCE(376);
      if (lookahead == '}') ADVANCE(208);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(176);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == '2') ADVANCE(230);
      END_STATE();
    case 26:
      if (lookahead == '2') ADVANCE(238);
      END_STATE();
    case 27:
      if (lookahead == '2') ADVANCE(234);
      END_STATE();
    case 28:
      if (lookahead == '2') ADVANCE(242);
      END_STATE();
    case 29:
      if (lookahead == '2') ADVANCE(246);
      END_STATE();
    case 30:
      if (lookahead == '3') ADVANCE(25);
      if (lookahead == '6') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == '3') ADVANCE(26);
      if (lookahead == '6') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == '3') ADVANCE(27);
      if (lookahead == '6') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == '3') ADVANCE(28);
      if (lookahead == '6') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == '3') ADVANCE(29);
      if (lookahead == '6') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == '4') ADVANCE(232);
      END_STATE();
    case 36:
      if (lookahead == '4') ADVANCE(240);
      END_STATE();
    case 37:
      if (lookahead == '4') ADVANCE(236);
      END_STATE();
    case 38:
      if (lookahead == '4') ADVANCE(244);
      END_STATE();
    case 39:
      if (lookahead == '4') ADVANCE(248);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 51:
      if (lookahead == 'b') ADVANCE(94);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(254);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 79:
      if (lookahead == 'f') ADVANCE(271);
      END_STATE();
    case 80:
      if (lookahead == 'f') ADVANCE(271);
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 81:
      if (lookahead == 'f') ADVANCE(224);
      END_STATE();
    case 82:
      if (lookahead == 'g') ADVANCE(252);
      END_STATE();
    case 83:
      if (lookahead == 'g') ADVANCE(67);
      END_STATE();
    case 84:
      if (lookahead == 'g') ADVANCE(68);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 90:
      if (lookahead == 'k') ADVANCE(49);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(205);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(217);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(74);
      if (lookahead == 'p') ADVANCE(141);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(150);
      if (lookahead == 'x') ADVANCE(142);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(269);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(256);
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == 'y') ADVANCE(140);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(226);
      if (lookahead == 'x') ADVANCE(258);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 123:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 124:
      if (lookahead == 'p') ADVANCE(75);
      if (lookahead == 's') ADVANCE(77);
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 125:
      if (lookahead == 'p') ADVANCE(132);
      END_STATE();
    case 126:
      if (lookahead == 'p') ADVANCE(147);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(293);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 151:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 152:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 153:
      if (lookahead == 'v') ADVANCE(85);
      END_STATE();
    case 154:
      if (lookahead == 'v') ADVANCE(73);
      END_STATE();
    case 155:
      if (lookahead == 'x') ADVANCE(258);
      END_STATE();
    case 156:
      if (lookahead == 'x') ADVANCE(192);
      END_STATE();
    case 157:
      if (lookahead == 'x') ADVANCE(64);
      END_STATE();
    case 158:
      if (lookahead == 'x') ADVANCE(78);
      END_STATE();
    case 159:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(269);
      END_STATE();
    case 160:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(268);
      END_STATE();
    case 161:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(270);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 163:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(168);
      if (set_contains(aux_sym_strLit_token1_character_set_1, 12, lookahead)) ADVANCE(282);
      END_STATE();
    case 164:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(169);
      if (set_contains(aux_sym_strLit_token1_character_set_1, 12, lookahead)) ADVANCE(288);
      END_STATE();
    case 165:
      if (lookahead == '2' ||
          lookahead == '3') ADVANCE(2);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(282);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(288);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(166);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(167);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      END_STATE();
    case 171:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      END_STATE();
    case 172:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 173:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      END_STATE();
    case 174:
      if (eof) ADVANCE(175);
      ADVANCE_MAP(
        '.', 162,
        '/', 5,
        '0', 259,
        ';', 194,
        'E', 159,
        'e', 103,
        'i', 96,
        'm', 60,
        'n', 42,
        'o', 126,
        'p', 43,
        'r', 122,
        's', 62,
        '}', 208,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(174);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"') ADVANCE(191);
      if (lookahead == '\\') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\'') ADVANCE(191);
      if (lookahead == '\\') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(282);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(288);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(185);
      if (set_contains(aux_sym_strLit_token1_character_set_1, 12, lookahead)) ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(186);
      if (set_contains(aux_sym_strLit_token1_character_set_1, 12, lookahead)) ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_syntax);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_syntaxValue);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_extend);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == 'a') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_message);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_message);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_rpc);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_stream);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_stream);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_optional);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_repeated);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_repeated);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_oneof);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_oneof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_sint32);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_sint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_sint64);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_sint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_fixed32);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_fixed32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_fixed64);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_fixed64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_sfixed32);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_sfixed32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_sfixed64);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_sfixed64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_reserved);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_reserved);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_to);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_intLit);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(266);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(261);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_intLit);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_intLit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_intLit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_intLit);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(266);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(264);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_intLit);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_intLit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_intLit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_floatLit_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_floatLit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_floatLit_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_floatLit_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_inf);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_inf);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_nan);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_nan);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_boolLit);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_boolLit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_strLit_token1);
      if (lookahead == '*') ADVANCE(279);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(282);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_strLit_token1);
      if (lookahead == '*') ADVANCE(281);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(16);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_strLit_token1);
      if (lookahead == '/') ADVANCE(278);
      if (lookahead == '\\') ADVANCE(163);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(280);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"') ADVANCE(282);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_strLit_token1);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(16);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_strLit_token1);
      if (lookahead == '\\') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_strLit_token2);
      if (lookahead == '*') ADVANCE(285);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(288);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_strLit_token2);
      if (lookahead == '*') ADVANCE(287);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\n' ||
          lookahead == '\'') ADVANCE(16);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_strLit_token2);
      if (lookahead == '/') ADVANCE(284);
      if (lookahead == '\\') ADVANCE(164);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\'') ADVANCE(288);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_strLit_token2);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\n' ||
          lookahead == '\'') ADVANCE(16);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_strLit_token2);
      if (lookahead == '\\') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '2') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '2') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '2') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '2') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '2') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '3') ADVANCE(297);
      if (lookahead == '6') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '3') ADVANCE(298);
      if (lookahead == '6') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '3') ADVANCE(299);
      if (lookahead == '6') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '3') ADVANCE(300);
      if (lookahead == '6') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '3') ADVANCE(301);
      if (lookahead == '6') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '4') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '4') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '4') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '4') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '4') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(373);
      if (lookahead == 'e') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(348);
      if (lookahead == 'i') ADVANCE(363);
      if (lookahead == 't') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(398);
      if (lookahead == 'l') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(335);
      if (lookahead == 'p') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(366);
      if (lookahead == 'y') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(333);
      if (lookahead == 's') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 19},
  [42] = {.lex_state = 20},
  [43] = {.lex_state = 20},
  [44] = {.lex_state = 20},
  [45] = {.lex_state = 18},
  [46] = {.lex_state = 18},
  [47] = {.lex_state = 18},
  [48] = {.lex_state = 18},
  [49] = {.lex_state = 174},
  [50] = {.lex_state = 174},
  [51] = {.lex_state = 174},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 174},
  [61] = {.lex_state = 174},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 174},
  [66] = {.lex_state = 23},
  [67] = {.lex_state = 174},
  [68] = {.lex_state = 23},
  [69] = {.lex_state = 174},
  [70] = {.lex_state = 174},
  [71] = {.lex_state = 174},
  [72] = {.lex_state = 174},
  [73] = {.lex_state = 174},
  [74] = {.lex_state = 23},
  [75] = {.lex_state = 174},
  [76] = {.lex_state = 174},
  [77] = {.lex_state = 174},
  [78] = {.lex_state = 174},
  [79] = {.lex_state = 174},
  [80] = {.lex_state = 174},
  [81] = {.lex_state = 23},
  [82] = {.lex_state = 23},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 174},
  [85] = {.lex_state = 174},
  [86] = {.lex_state = 174},
  [87] = {.lex_state = 174},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 174},
  [90] = {.lex_state = 174},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 174},
  [93] = {.lex_state = 21},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 21},
  [97] = {.lex_state = 21},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 174},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 23},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 23},
  [120] = {.lex_state = 23},
  [121] = {.lex_state = 23},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 23},
  [124] = {.lex_state = 174},
  [125] = {.lex_state = 174},
  [126] = {.lex_state = 174},
  [127] = {.lex_state = 174},
  [128] = {.lex_state = 174},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 23},
  [131] = {.lex_state = 23},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 3},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 4},
  [194] = {.lex_state = 4},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 22},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 3},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 280},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 286},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 3},
  [266] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_syntax] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_extend] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_message] = ACTIONS(1),
    [anon_sym_service] = ACTIONS(1),
    [anon_sym_rpc] = ACTIONS(1),
    [anon_sym_stream] = ACTIONS(1),
    [anon_sym_returns] = ACTIONS(1),
    [anon_sym_optional] = ACTIONS(1),
    [anon_sym_repeated] = ACTIONS(1),
    [anon_sym_oneof] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_uint32] = ACTIONS(1),
    [anon_sym_uint64] = ACTIONS(1),
    [anon_sym_sint32] = ACTIONS(1),
    [anon_sym_sint64] = ACTIONS(1),
    [anon_sym_fixed32] = ACTIONS(1),
    [anon_sym_fixed64] = ACTIONS(1),
    [anon_sym_sfixed32] = ACTIONS(1),
    [anon_sym_sfixed64] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_reserved] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_max] = ACTIONS(1),
    [sym_intLit] = ACTIONS(1),
    [aux_sym_floatLit_token1] = ACTIONS(1),
    [aux_sym_floatLit_token2] = ACTIONS(1),
    [anon_sym_inf] = ACTIONS(1),
    [anon_sym_nan] = ACTIONS(1),
    [sym_boolLit] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [aux_sym_constant_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_sourceFile] = STATE(232),
    [sym_syntax] = STATE(51),
    [sym_comment] = ACTIONS(3),
    [anon_sym_syntax] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_option,
    ACTIONS(11), 1,
      anon_sym_enum,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      anon_sym_message,
    ACTIONS(17), 1,
      anon_sym_optional,
    ACTIONS(19), 1,
      anon_sym_repeated,
    ACTIONS(21), 1,
      anon_sym_oneof,
    ACTIONS(23), 1,
      anon_sym_map,
    ACTIONS(27), 1,
      anon_sym_reserved,
    ACTIONS(29), 1,
      sym_ident,
    ACTIONS(31), 1,
      anon_sym_DOT,
    STATE(135), 1,
      sym_messageName,
    STATE(136), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(158), 1,
      sym_enumMessageType,
    STATE(169), 1,
      sym_type,
    STATE(5), 9,
      sym_option,
      sym_enum,
      sym_message,
      sym_field,
      sym_oneof,
      sym_mapField,
      sym_reserved,
      sym_emptyStatement,
      aux_sym_messageBody_repeat1,
    ACTIONS(25), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [80] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_option,
    ACTIONS(11), 1,
      anon_sym_enum,
    ACTIONS(15), 1,
      anon_sym_message,
    ACTIONS(17), 1,
      anon_sym_optional,
    ACTIONS(19), 1,
      anon_sym_repeated,
    ACTIONS(21), 1,
      anon_sym_oneof,
    ACTIONS(23), 1,
      anon_sym_map,
    ACTIONS(27), 1,
      anon_sym_reserved,
    ACTIONS(29), 1,
      sym_ident,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(135), 1,
      sym_messageName,
    STATE(136), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(158), 1,
      sym_enumMessageType,
    STATE(169), 1,
      sym_type,
    STATE(4), 9,
      sym_option,
      sym_enum,
      sym_message,
      sym_field,
      sym_oneof,
      sym_mapField,
      sym_reserved,
      sym_emptyStatement,
      aux_sym_messageBody_repeat1,
    ACTIONS(25), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [160] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_option,
    ACTIONS(11), 1,
      anon_sym_enum,
    ACTIONS(15), 1,
      anon_sym_message,
    ACTIONS(17), 1,
      anon_sym_optional,
    ACTIONS(19), 1,
      anon_sym_repeated,
    ACTIONS(21), 1,
      anon_sym_oneof,
    ACTIONS(23), 1,
      anon_sym_map,
    ACTIONS(27), 1,
      anon_sym_reserved,
    ACTIONS(29), 1,
      sym_ident,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(135), 1,
      sym_messageName,
    STATE(136), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(158), 1,
      sym_enumMessageType,
    STATE(169), 1,
      sym_type,
    STATE(5), 9,
      sym_option,
      sym_enum,
      sym_message,
      sym_field,
      sym_oneof,
      sym_mapField,
      sym_reserved,
      sym_emptyStatement,
      aux_sym_messageBody_repeat1,
    ACTIONS(25), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [240] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_SEMI,
    ACTIONS(40), 1,
      anon_sym_option,
    ACTIONS(43), 1,
      anon_sym_enum,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    ACTIONS(48), 1,
      anon_sym_message,
    ACTIONS(51), 1,
      anon_sym_optional,
    ACTIONS(54), 1,
      anon_sym_repeated,
    ACTIONS(57), 1,
      anon_sym_oneof,
    ACTIONS(60), 1,
      anon_sym_map,
    ACTIONS(66), 1,
      anon_sym_reserved,
    ACTIONS(69), 1,
      sym_ident,
    ACTIONS(72), 1,
      anon_sym_DOT,
    STATE(135), 1,
      sym_messageName,
    STATE(136), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(158), 1,
      sym_enumMessageType,
    STATE(169), 1,
      sym_type,
    STATE(5), 9,
      sym_option,
      sym_enum,
      sym_message,
      sym_field,
      sym_oneof,
      sym_mapField,
      sym_reserved,
      sym_emptyStatement,
      aux_sym_messageBody_repeat1,
    ACTIONS(63), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [320] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_option,
    ACTIONS(11), 1,
      anon_sym_enum,
    ACTIONS(15), 1,
      anon_sym_message,
    ACTIONS(17), 1,
      anon_sym_optional,
    ACTIONS(19), 1,
      anon_sym_repeated,
    ACTIONS(21), 1,
      anon_sym_oneof,
    ACTIONS(23), 1,
      anon_sym_map,
    ACTIONS(27), 1,
      anon_sym_reserved,
    ACTIONS(29), 1,
      sym_ident,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(135), 1,
      sym_messageName,
    STATE(136), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(158), 1,
      sym_enumMessageType,
    STATE(169), 1,
      sym_type,
    STATE(2), 9,
      sym_option,
      sym_enum,
      sym_message,
      sym_field,
      sym_oneof,
      sym_mapField,
      sym_reserved,
      sym_emptyStatement,
      aux_sym_messageBody_repeat1,
    ACTIONS(25), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [400] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 6,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(79), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_to,
    ACTIONS(81), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(83), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [477] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_fieldNames_repeat1,
    ACTIONS(87), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(89), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [518] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      aux_sym_ranges_repeat1,
    ACTIONS(93), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(95), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [559] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_ranges_repeat1,
    ACTIONS(99), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(101), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [600] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_ranges_repeat1,
    ACTIONS(103), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(105), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [641] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    STATE(14), 1,
      aux_sym_fieldNames_repeat1,
    ACTIONS(110), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(112), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [682] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    STATE(14), 1,
      aux_sym_fieldNames_repeat1,
    ACTIONS(114), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(116), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [723] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_ident,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(121), 1,
      anon_sym_SEMI,
    ACTIONS(123), 1,
      anon_sym_option,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    STATE(135), 1,
      sym_messageName,
    STATE(136), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(158), 1,
      sym_enumMessageType,
    STATE(164), 1,
      sym_type,
    STATE(16), 4,
      sym_option,
      sym_oneofField,
      sym_emptyStatement,
      aux_sym_oneofBody_repeat1,
    ACTIONS(25), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [777] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_ident,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(121), 1,
      anon_sym_SEMI,
    ACTIONS(123), 1,
      anon_sym_option,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    STATE(135), 1,
      sym_messageName,
    STATE(136), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(158), 1,
      sym_enumMessageType,
    STATE(164), 1,
      sym_type,
    STATE(19), 4,
      sym_option,
      sym_oneofField,
      sym_emptyStatement,
      aux_sym_oneofBody_repeat1,
    ACTIONS(25), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [831] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(131), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(116), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [903] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_SEMI,
    ACTIONS(136), 1,
      anon_sym_option,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    ACTIONS(144), 1,
      sym_ident,
    ACTIONS(147), 1,
      anon_sym_DOT,
    STATE(135), 1,
      sym_messageName,
    STATE(136), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(158), 1,
      sym_enumMessageType,
    STATE(164), 1,
      sym_type,
    STATE(19), 4,
      sym_option,
      sym_oneofField,
      sym_emptyStatement,
      aux_sym_oneofBody_repeat1,
    ACTIONS(141), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(105), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(152), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(156), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(160), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(164), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(168), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(172), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(176), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(180), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(184), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(188), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(192), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(196), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(200), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(204), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(208), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(212), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(216), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(220), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(224), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(228), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_reserved,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1693] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_ident,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(230), 1,
      anon_sym_repeated,
    STATE(135), 1,
      sym_messageName,
    STATE(136), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(158), 1,
      sym_enumMessageType,
    STATE(163), 1,
      sym_type,
    ACTIONS(25), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1735] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_ident,
    ACTIONS(31), 1,
      anon_sym_DOT,
    STATE(135), 1,
      sym_messageName,
    STATE(136), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(158), 1,
      sym_enumMessageType,
    STATE(243), 1,
      sym_type,
    ACTIONS(25), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1774] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_ident,
    ACTIONS(31), 1,
      anon_sym_DOT,
    STATE(135), 1,
      sym_messageName,
    STATE(136), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(158), 1,
      sym_enumMessageType,
    STATE(193), 1,
      sym_type,
    ACTIONS(25), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1813] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_ident,
    ACTIONS(31), 1,
      anon_sym_DOT,
    STATE(135), 1,
      sym_messageName,
    STATE(136), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(158), 1,
      sym_enumMessageType,
    STATE(163), 1,
      sym_type,
    ACTIONS(25), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(234), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1880] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(238), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(208), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_DOT,
    ACTIONS(224), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_ident,
  [1964] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(242), 1,
      anon_sym_SEMI,
    ACTIONS(245), 1,
      anon_sym_extend,
    ACTIONS(248), 1,
      anon_sym_package,
    ACTIONS(251), 1,
      anon_sym_import,
    ACTIONS(254), 1,
      anon_sym_option,
    ACTIONS(257), 1,
      anon_sym_enum,
    ACTIONS(260), 1,
      anon_sym_message,
    ACTIONS(263), 1,
      anon_sym_service,
    STATE(49), 9,
      sym_extend,
      sym_package,
      sym_import,
      sym_option,
      sym_enum,
      sym_message,
      sym_service,
      sym_emptyStatement,
      aux_sym_sourceFile_repeat1,
  [2006] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    ACTIONS(268), 1,
      anon_sym_SEMI,
    ACTIONS(270), 1,
      anon_sym_extend,
    ACTIONS(272), 1,
      anon_sym_package,
    ACTIONS(274), 1,
      anon_sym_import,
    ACTIONS(276), 1,
      anon_sym_option,
    ACTIONS(278), 1,
      anon_sym_enum,
    ACTIONS(280), 1,
      anon_sym_message,
    ACTIONS(282), 1,
      anon_sym_service,
    STATE(49), 9,
      sym_extend,
      sym_package,
      sym_import,
      sym_option,
      sym_enum,
      sym_message,
      sym_service,
      sym_emptyStatement,
      aux_sym_sourceFile_repeat1,
  [2048] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_SEMI,
    ACTIONS(270), 1,
      anon_sym_extend,
    ACTIONS(272), 1,
      anon_sym_package,
    ACTIONS(274), 1,
      anon_sym_import,
    ACTIONS(276), 1,
      anon_sym_option,
    ACTIONS(278), 1,
      anon_sym_enum,
    ACTIONS(280), 1,
      anon_sym_message,
    ACTIONS(282), 1,
      anon_sym_service,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    STATE(50), 9,
      sym_extend,
      sym_package,
      sym_import,
      sym_option,
      sym_enum,
      sym_message,
      sym_service,
      sym_emptyStatement,
      aux_sym_sourceFile_repeat1,
  [2090] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_LBRACE,
    ACTIONS(294), 1,
      anon_sym_DQUOTE,
    ACTIONS(296), 1,
      anon_sym_SQUOTE,
    ACTIONS(298), 1,
      aux_sym_constant_token1,
    ACTIONS(300), 1,
      sym_ident,
    STATE(166), 1,
      sym_constant,
    ACTIONS(288), 2,
      sym_intLit,
      sym_boolLit,
    ACTIONS(292), 2,
      anon_sym_inf,
      anon_sym_nan,
    ACTIONS(290), 3,
      aux_sym_floatLit_token1,
      aux_sym_floatLit_token2,
      aux_sym_floatLit_token3,
    STATE(109), 4,
      sym_floatLit,
      sym_strLit,
      sym_msgLit,
      sym_fullIdent,
  [2131] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_LBRACE,
    ACTIONS(294), 1,
      anon_sym_DQUOTE,
    ACTIONS(296), 1,
      anon_sym_SQUOTE,
    ACTIONS(298), 1,
      aux_sym_constant_token1,
    ACTIONS(300), 1,
      sym_ident,
    STATE(253), 1,
      sym_constant,
    ACTIONS(288), 2,
      sym_intLit,
      sym_boolLit,
    ACTIONS(292), 2,
      anon_sym_inf,
      anon_sym_nan,
    ACTIONS(290), 3,
      aux_sym_floatLit_token1,
      aux_sym_floatLit_token2,
      aux_sym_floatLit_token3,
    STATE(109), 4,
      sym_floatLit,
      sym_strLit,
      sym_msgLit,
      sym_fullIdent,
  [2172] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_LBRACE,
    ACTIONS(294), 1,
      anon_sym_DQUOTE,
    ACTIONS(296), 1,
      anon_sym_SQUOTE,
    ACTIONS(298), 1,
      aux_sym_constant_token1,
    ACTIONS(300), 1,
      sym_ident,
    STATE(264), 1,
      sym_constant,
    ACTIONS(288), 2,
      sym_intLit,
      sym_boolLit,
    ACTIONS(292), 2,
      anon_sym_inf,
      anon_sym_nan,
    ACTIONS(290), 3,
      aux_sym_floatLit_token1,
      aux_sym_floatLit_token2,
      aux_sym_floatLit_token3,
    STATE(109), 4,
      sym_floatLit,
      sym_strLit,
      sym_msgLit,
      sym_fullIdent,
  [2213] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_LBRACE,
    ACTIONS(294), 1,
      anon_sym_DQUOTE,
    ACTIONS(296), 1,
      anon_sym_SQUOTE,
    ACTIONS(298), 1,
      aux_sym_constant_token1,
    ACTIONS(300), 1,
      sym_ident,
    STATE(254), 1,
      sym_constant,
    ACTIONS(288), 2,
      sym_intLit,
      sym_boolLit,
    ACTIONS(292), 2,
      anon_sym_inf,
      anon_sym_nan,
    ACTIONS(290), 3,
      aux_sym_floatLit_token1,
      aux_sym_floatLit_token2,
      aux_sym_floatLit_token3,
    STATE(109), 4,
      sym_floatLit,
      sym_strLit,
      sym_msgLit,
      sym_fullIdent,
  [2254] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_LBRACE,
    ACTIONS(294), 1,
      anon_sym_DQUOTE,
    ACTIONS(296), 1,
      anon_sym_SQUOTE,
    ACTIONS(298), 1,
      aux_sym_constant_token1,
    ACTIONS(300), 1,
      sym_ident,
    STATE(197), 1,
      sym_constant,
    ACTIONS(288), 2,
      sym_intLit,
      sym_boolLit,
    ACTIONS(292), 2,
      anon_sym_inf,
      anon_sym_nan,
    ACTIONS(290), 3,
      aux_sym_floatLit_token1,
      aux_sym_floatLit_token2,
      aux_sym_floatLit_token3,
    STATE(109), 4,
      sym_floatLit,
      sym_strLit,
      sym_msgLit,
      sym_fullIdent,
  [2295] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_LBRACE,
    ACTIONS(294), 1,
      anon_sym_DQUOTE,
    ACTIONS(296), 1,
      anon_sym_SQUOTE,
    ACTIONS(298), 1,
      aux_sym_constant_token1,
    ACTIONS(300), 1,
      sym_ident,
    STATE(180), 1,
      sym_constant,
    ACTIONS(288), 2,
      sym_intLit,
      sym_boolLit,
    ACTIONS(292), 2,
      anon_sym_inf,
      anon_sym_nan,
    ACTIONS(290), 3,
      aux_sym_floatLit_token1,
      aux_sym_floatLit_token2,
      aux_sym_floatLit_token3,
    STATE(109), 4,
      sym_floatLit,
      sym_strLit,
      sym_msgLit,
      sym_fullIdent,
  [2336] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_LBRACE,
    ACTIONS(294), 1,
      anon_sym_DQUOTE,
    ACTIONS(296), 1,
      anon_sym_SQUOTE,
    ACTIONS(298), 1,
      aux_sym_constant_token1,
    ACTIONS(300), 1,
      sym_ident,
    STATE(251), 1,
      sym_constant,
    ACTIONS(288), 2,
      sym_intLit,
      sym_boolLit,
    ACTIONS(292), 2,
      anon_sym_inf,
      anon_sym_nan,
    ACTIONS(290), 3,
      aux_sym_floatLit_token1,
      aux_sym_floatLit_token2,
      aux_sym_floatLit_token3,
    STATE(109), 4,
      sym_floatLit,
      sym_strLit,
      sym_msgLit,
      sym_fullIdent,
  [2377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(198), 1,
      sym_keyType,
    ACTIONS(302), 12,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
  [2398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_extend,
      anon_sym_package,
      anon_sym_import,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_message,
      anon_sym_service,
      anon_sym_rpc,
  [2415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_extend,
      anon_sym_package,
      anon_sym_import,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_message,
      anon_sym_service,
      anon_sym_rpc,
  [2432] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DOT,
    STATE(64), 1,
      aux_sym_fullIdent_repeat1,
    ACTIONS(304), 8,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ident,
  [2452] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DOT,
    STATE(62), 1,
      aux_sym_fullIdent_repeat1,
    ACTIONS(308), 8,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ident,
  [2472] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_DOT,
    STATE(64), 1,
      aux_sym_fullIdent_repeat1,
    ACTIONS(310), 8,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ident,
  [2492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_extend,
      anon_sym_package,
      anon_sym_import,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2507] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_SEMI,
    ACTIONS(317), 1,
      anon_sym_option,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
    ACTIONS(321), 1,
      sym_ident,
    STATE(248), 1,
      sym_enumVariantName,
    STATE(74), 4,
      sym_option,
      sym_enumField,
      sym_emptyStatement,
      aux_sym_enumBody_repeat1,
  [2532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_extend,
      anon_sym_package,
      anon_sym_import,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2547] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_SEMI,
    ACTIONS(317), 1,
      anon_sym_option,
    ACTIONS(321), 1,
      sym_ident,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    STATE(248), 1,
      sym_enumVariantName,
    STATE(66), 4,
      sym_option,
      sym_enumField,
      sym_emptyStatement,
      aux_sym_enumBody_repeat1,
  [2572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_extend,
      anon_sym_package,
      anon_sym_import,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_extend,
      anon_sym_package,
      anon_sym_import,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_extend,
      anon_sym_package,
      anon_sym_import,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_extend,
      anon_sym_package,
      anon_sym_import,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_extend,
      anon_sym_package,
      anon_sym_import,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2647] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_SEMI,
    ACTIONS(330), 1,
      anon_sym_option,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    ACTIONS(335), 1,
      sym_ident,
    STATE(248), 1,
      sym_enumVariantName,
    STATE(74), 4,
      sym_option,
      sym_enumField,
      sym_emptyStatement,
      aux_sym_enumBody_repeat1,
  [2672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_extend,
      anon_sym_package,
      anon_sym_import,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_extend,
      anon_sym_package,
      anon_sym_import,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_extend,
      anon_sym_package,
      anon_sym_import,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_extend,
      anon_sym_package,
      anon_sym_import,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_extend,
      anon_sym_package,
      anon_sym_import,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_extend,
      anon_sym_package,
      anon_sym_import,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2762] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_SEMI,
    ACTIONS(317), 1,
      anon_sym_option,
    ACTIONS(321), 1,
      sym_ident,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    STATE(248), 1,
      sym_enumVariantName,
    STATE(82), 4,
      sym_option,
      sym_enumField,
      sym_emptyStatement,
      aux_sym_enumBody_repeat1,
  [2787] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_SEMI,
    ACTIONS(317), 1,
      anon_sym_option,
    ACTIONS(321), 1,
      sym_ident,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    STATE(248), 1,
      sym_enumVariantName,
    STATE(74), 4,
      sym_option,
      sym_enumField,
      sym_emptyStatement,
      aux_sym_enumBody_repeat1,
  [2812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 9,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ident,
      anon_sym_DOT,
  [2827] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_SEMI,
    ACTIONS(276), 1,
      anon_sym_option,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
    ACTIONS(356), 1,
      anon_sym_rpc,
    STATE(86), 4,
      sym_option,
      sym_rpc,
      sym_emptyStatement,
      aux_sym_serviceBody_repeat1,
  [2849] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_SEMI,
    ACTIONS(276), 1,
      anon_sym_option,
    ACTIONS(356), 1,
      anon_sym_rpc,
    ACTIONS(358), 1,
      anon_sym_RBRACE,
    STATE(84), 4,
      sym_option,
      sym_rpc,
      sym_emptyStatement,
      aux_sym_serviceBody_repeat1,
  [2871] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_SEMI,
    ACTIONS(363), 1,
      anon_sym_option,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
    ACTIONS(368), 1,
      anon_sym_rpc,
    STATE(86), 4,
      sym_option,
      sym_rpc,
      sym_emptyStatement,
      aux_sym_serviceBody_repeat1,
  [2893] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym_intLit,
    STATE(102), 1,
      sym_floatLit,
    ACTIONS(290), 5,
      aux_sym_floatLit_token1,
      aux_sym_floatLit_token2,
      aux_sym_floatLit_token3,
      anon_sym_inf,
      anon_sym_nan,
  [2910] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      sym_ident,
    STATE(142), 1,
      sym_fieldOption,
    STATE(200), 1,
      sym_fullIdent,
    STATE(208), 1,
      sym_fieldOptions,
    STATE(217), 1,
      sym_optionName,
  [2932] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_SEMI,
    ACTIONS(276), 1,
      anon_sym_option,
    ACTIONS(377), 1,
      anon_sym_RBRACE,
    STATE(92), 3,
      sym_option,
      sym_emptyStatement,
      aux_sym_rpcBody_repeat1,
  [2950] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_SEMI,
    ACTIONS(276), 1,
      anon_sym_option,
    ACTIONS(379), 1,
      anon_sym_RBRACE,
    STATE(89), 3,
      sym_option,
      sym_emptyStatement,
      aux_sym_rpcBody_repeat1,
  [2968] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      sym_ident,
    STATE(142), 1,
      sym_fieldOption,
    STATE(200), 1,
      sym_fullIdent,
    STATE(201), 1,
      sym_fieldOptions,
    STATE(217), 1,
      sym_optionName,
  [2990] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_SEMI,
    ACTIONS(384), 1,
      anon_sym_option,
    ACTIONS(387), 1,
      anon_sym_RBRACE,
    STATE(92), 3,
      sym_option,
      sym_emptyStatement,
      aux_sym_rpcBody_repeat1,
  [3008] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_ident,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(389), 1,
      anon_sym_stream,
    STATE(135), 1,
      sym_messageName,
    STATE(136), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(225), 1,
      sym_enumMessageType,
  [3030] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      sym_ident,
    STATE(142), 1,
      sym_fieldOption,
    STATE(200), 1,
      sym_fullIdent,
    STATE(217), 1,
      sym_optionName,
    STATE(246), 1,
      sym_fieldOptions,
  [3052] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      sym_intLit,
    ACTIONS(393), 1,
      sym_ident,
    STATE(9), 1,
      sym_fieldName,
    STATE(10), 1,
      sym_range,
    STATE(26), 2,
      sym_ranges,
      sym_fieldNames,
  [3072] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_ident,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(395), 1,
      anon_sym_stream,
    STATE(135), 1,
      sym_messageName,
    STATE(136), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(205), 1,
      sym_enumMessageType,
  [3094] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_ident,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(397), 1,
      anon_sym_stream,
    STATE(135), 1,
      sym_messageName,
    STATE(136), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(212), 1,
      sym_enumMessageType,
  [3116] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      sym_ident,
    STATE(142), 1,
      sym_fieldOption,
    STATE(200), 1,
      sym_fullIdent,
    STATE(217), 1,
      sym_optionName,
    STATE(222), 1,
      sym_fieldOptions,
  [3138] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      sym_ident,
    STATE(142), 1,
      sym_fieldOption,
    STATE(200), 1,
      sym_fullIdent,
    STATE(217), 1,
      sym_optionName,
    STATE(224), 1,
      sym_fieldOptions,
  [3160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ident,
  [3171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ident,
  [3182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ident,
  [3193] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      sym_ident,
    STATE(167), 1,
      sym_enumValueOption,
    STATE(200), 1,
      sym_fullIdent,
    STATE(226), 1,
      sym_optionName,
  [3212] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      sym_ident,
    STATE(137), 1,
      sym_enumValueOption,
    STATE(200), 1,
      sym_fullIdent,
    STATE(226), 1,
      sym_optionName,
  [3231] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(405), 1,
      sym_ident,
    STATE(135), 1,
      sym_messageName,
    STATE(136), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(259), 1,
      sym_enumMessageType,
  [3250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ident,
  [3261] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      sym_ident,
    STATE(174), 1,
      sym_fieldOption,
    STATE(200), 1,
      sym_fullIdent,
    STATE(217), 1,
      sym_optionName,
  [3280] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(405), 1,
      sym_ident,
    STATE(135), 1,
      sym_messageName,
    STATE(136), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(212), 1,
      sym_enumMessageType,
  [3299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ident,
  [3310] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(405), 1,
      sym_ident,
    STATE(135), 1,
      sym_messageName,
    STATE(136), 1,
      aux_sym_enumMessageType_repeat1,
    STATE(218), 1,
      sym_enumMessageType,
  [3329] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      sym_ident,
    STATE(143), 1,
      sym_enumValueOption,
    STATE(200), 1,
      sym_fullIdent,
    STATE(226), 1,
      sym_optionName,
  [3348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ident,
  [3359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3369] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      sym_ident,
    STATE(200), 1,
      sym_fullIdent,
    STATE(261), 1,
      sym_optionName,
  [3385] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_RBRACE,
    ACTIONS(417), 1,
      sym_ident,
    STATE(115), 1,
      aux_sym_msgLit_repeat1,
    STATE(233), 1,
      sym_fieldName,
  [3401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_DOT,
    ACTIONS(420), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_ident,
  [3413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(426), 2,
      anon_sym_option,
      sym_ident,
  [3425] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym_ident,
    ACTIONS(428), 1,
      anon_sym_RBRACE,
    STATE(129), 1,
      aux_sym_msgLit_repeat1,
    STATE(233), 1,
      sym_fieldName,
  [3441] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(432), 2,
      anon_sym_option,
      sym_ident,
  [3453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(436), 2,
      anon_sym_option,
      sym_ident,
  [3465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(440), 2,
      anon_sym_option,
      sym_ident,
  [3477] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      sym_ident,
    STATE(199), 1,
      sym_optionName,
    STATE(200), 1,
      sym_fullIdent,
  [3493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(444), 2,
      anon_sym_option,
      sym_ident,
  [3505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3555] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym_ident,
    ACTIONS(456), 1,
      anon_sym_RBRACE,
    STATE(115), 1,
      aux_sym_msgLit_repeat1,
    STATE(233), 1,
      sym_fieldName,
  [3571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(208), 2,
      anon_sym_option,
      sym_ident,
  [3583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(224), 2,
      anon_sym_option,
      sym_ident,
  [3595] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      sym_ident,
    STATE(200), 1,
      sym_fullIdent,
    STATE(260), 1,
      sym_optionName,
  [3611] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      sym_ident,
    STATE(200), 1,
      sym_fullIdent,
    STATE(262), 1,
      sym_optionName,
  [3627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_ident,
  [3636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_ident,
  [3645] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      sym_ident,
    STATE(139), 1,
      sym_messageName,
    STATE(186), 1,
      aux_sym_enumMessageType_repeat1,
  [3658] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_COMMA,
    ACTIONS(464), 1,
      anon_sym_RBRACK,
    STATE(145), 1,
      aux_sym_enumField_repeat1,
  [3671] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_SEMI,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
    STATE(125), 1,
      sym_rpcBody,
  [3684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_ident,
  [3693] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      sym_ident,
    STATE(134), 1,
      sym_messageName,
    STATE(186), 1,
      aux_sym_enumMessageType_repeat1,
  [3706] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_SEMI,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
    STATE(126), 1,
      sym_rpcBody,
  [3719] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    ACTIONS(474), 1,
      anon_sym_RBRACK,
    STATE(147), 1,
      aux_sym_fieldOptions_repeat1,
  [3732] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_COMMA,
    ACTIONS(476), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      aux_sym_enumField_repeat1,
  [3745] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_SEMI,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
    STATE(113), 1,
      sym_rpcBody,
  [3758] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_COMMA,
    ACTIONS(476), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      aux_sym_enumField_repeat1,
  [3771] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      sym_ident,
    STATE(190), 1,
      sym_extendName,
    STATE(239), 1,
      sym_fullIdent,
  [3784] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    ACTIONS(478), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      aux_sym_fieldOptions_repeat1,
  [3797] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_COMMA,
    ACTIONS(480), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      aux_sym_enumField_repeat1,
  [3810] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      sym_ident,
    STATE(139), 1,
      sym_messageName,
    STATE(140), 1,
      aux_sym_enumMessageType_repeat1,
  [3823] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    ACTIONS(485), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      aux_sym_enumField_repeat1,
  [3836] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_DQUOTE,
    ACTIONS(296), 1,
      anon_sym_SQUOTE,
    STATE(258), 1,
      sym_strLit,
  [3849] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(490), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      aux_sym_fieldOptions_repeat1,
  [3862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      sym_intLit,
    STATE(20), 1,
      sym_range,
  [3872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_SEMI,
    ACTIONS(494), 1,
      anon_sym_LBRACK,
  [3882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_SEMI,
    ACTIONS(498), 1,
      anon_sym_LBRACK,
  [3892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      sym_intLit,
    STATE(162), 1,
      sym_fieldNumber,
  [3902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      sym_ident,
    STATE(210), 1,
      sym_mapName,
  [3912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 2,
      anon_sym_GT,
      sym_ident,
  [3920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_LBRACE,
    STATE(80), 1,
      sym_serviceBody,
  [3930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      sym_intLit,
    STATE(185), 1,
      sym_fieldNumber,
  [3940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      sym_ident,
    STATE(241), 1,
      sym_rpcName,
  [3950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_SEMI,
    ACTIONS(512), 1,
      anon_sym_LBRACK,
  [3960] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym_ident,
    STATE(249), 1,
      sym_fieldName,
  [3970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym_ident,
    STATE(231), 1,
      sym_fieldName,
  [3980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym_ident,
    STATE(18), 1,
      sym_fieldName,
  [3990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      sym_intLit,
    STATE(179), 1,
      sym_fieldNumber,
  [4016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym_ident,
    STATE(221), 1,
      sym_fieldName,
  [4026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_oneofBody,
  [4036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      sym_ident,
    STATE(245), 1,
      sym_fullIdent,
  [4046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      sym_intLit,
    STATE(177), 1,
      sym_fieldNumber,
  [4056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_messageBody,
  [4066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym_ident,
    STATE(170), 1,
      sym_oneofName,
  [4084] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      sym_ident,
    STATE(188), 1,
      sym_enumName,
  [4094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_SEMI,
    ACTIONS(526), 1,
      anon_sym_LBRACK,
  [4104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK,
  [4112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_SEMI,
    ACTIONS(532), 1,
      anon_sym_LBRACK,
  [4122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 2,
      anon_sym_RBRACE,
      sym_ident,
  [4130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_SEMI,
    ACTIONS(538), 1,
      anon_sym_LBRACK,
  [4140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      sym_ident,
    STATE(228), 1,
      sym_fullIdent,
  [4150] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      sym_ident,
    STATE(173), 1,
      sym_messageName,
  [4160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      sym_intLit,
    STATE(155), 1,
      sym_fieldNumber,
  [4170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_SEMI,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
  [4180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      sym_ident,
    STATE(186), 1,
      aux_sym_enumMessageType_repeat1,
  [4190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym_ident,
    STATE(159), 1,
      sym_serviceName,
  [4200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      sym_enumBody,
  [4210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_DASH,
    ACTIONS(555), 1,
      sym_intLit,
  [4220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_messageBody,
  [4230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_enumBody,
  [4240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_messageBody,
  [4250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym_ident,
    STATE(227), 1,
      sym_fieldName,
  [4260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      sym_ident,
    STATE(191), 1,
      sym_enumName,
  [4270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      sym_ident,
    STATE(192), 1,
      sym_messageName,
  [4280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 2,
      anon_sym_max,
      sym_intLit,
  [4288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_COMMA,
  [4303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_EQ,
  [4310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_EQ,
  [4317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_RBRACK,
  [4324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_SEMI,
  [4331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_LBRACE,
  [4338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_returns,
  [4345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
  [4352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_SEMI,
  [4359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_DQUOTE,
  [4366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_RBRACK,
  [4373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_EQ,
  [4380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_EQ,
  [4387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_SQUOTE,
  [4394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
  [4401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      sym_ident,
  [4408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      sym_ident,
  [4415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_SEMI,
  [4422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_SEMI,
  [4429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_EQ,
  [4436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
  [4443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_LT,
  [4450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_EQ,
  [4457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_EQ,
  [4464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_RBRACK,
  [4471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_SEMI,
  [4478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_RBRACK,
  [4485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_RPAREN,
  [4492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_EQ,
  [4499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_EQ,
  [4506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
  [4513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_SEMI,
  [4520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_EQ,
  [4527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_EQ,
  [4534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      ts_builtin_sym_end,
  [4541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_COLON,
  [4548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_LBRACE,
  [4555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_EQ,
  [4562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_SEMI,
  [4569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_LPAREN,
  [4576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      sym_syntaxValue,
  [4583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_LBRACE,
  [4590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_LPAREN,
  [4597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_LPAREN,
  [4604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_LBRACE,
  [4611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_GT,
  [4618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_LBRACE,
  [4625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_SEMI,
  [4632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_RBRACK,
  [4639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_SEMI,
  [4646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_EQ,
  [4653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_EQ,
  [4660] = 2,
    ACTIONS(665), 1,
      sym_comment,
    ACTIONS(667), 1,
      aux_sym_strLit_token1,
  [4667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_SEMI,
  [4674] = 2,
    ACTIONS(665), 1,
      sym_comment,
    ACTIONS(671), 1,
      aux_sym_strLit_token2,
  [4681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_SEMI,
  [4688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_SEMI,
  [4695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_returns,
  [4702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_LPAREN,
  [4709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_COMMA,
  [4716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_SEMI,
  [4723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_RPAREN,
  [4730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_EQ,
  [4737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_EQ,
  [4744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_EQ,
  [4751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_DOT,
  [4758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_SEMI,
  [4765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      sym_intLit,
  [4772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 80,
  [SMALL_STATE(4)] = 160,
  [SMALL_STATE(5)] = 240,
  [SMALL_STATE(6)] = 320,
  [SMALL_STATE(7)] = 400,
  [SMALL_STATE(8)] = 438,
  [SMALL_STATE(9)] = 477,
  [SMALL_STATE(10)] = 518,
  [SMALL_STATE(11)] = 559,
  [SMALL_STATE(12)] = 600,
  [SMALL_STATE(13)] = 641,
  [SMALL_STATE(14)] = 682,
  [SMALL_STATE(15)] = 723,
  [SMALL_STATE(16)] = 777,
  [SMALL_STATE(17)] = 831,
  [SMALL_STATE(18)] = 867,
  [SMALL_STATE(19)] = 903,
  [SMALL_STATE(20)] = 957,
  [SMALL_STATE(21)] = 993,
  [SMALL_STATE(22)] = 1028,
  [SMALL_STATE(23)] = 1063,
  [SMALL_STATE(24)] = 1098,
  [SMALL_STATE(25)] = 1133,
  [SMALL_STATE(26)] = 1168,
  [SMALL_STATE(27)] = 1203,
  [SMALL_STATE(28)] = 1238,
  [SMALL_STATE(29)] = 1273,
  [SMALL_STATE(30)] = 1308,
  [SMALL_STATE(31)] = 1343,
  [SMALL_STATE(32)] = 1378,
  [SMALL_STATE(33)] = 1413,
  [SMALL_STATE(34)] = 1448,
  [SMALL_STATE(35)] = 1483,
  [SMALL_STATE(36)] = 1518,
  [SMALL_STATE(37)] = 1553,
  [SMALL_STATE(38)] = 1588,
  [SMALL_STATE(39)] = 1623,
  [SMALL_STATE(40)] = 1658,
  [SMALL_STATE(41)] = 1693,
  [SMALL_STATE(42)] = 1735,
  [SMALL_STATE(43)] = 1774,
  [SMALL_STATE(44)] = 1813,
  [SMALL_STATE(45)] = 1852,
  [SMALL_STATE(46)] = 1880,
  [SMALL_STATE(47)] = 1908,
  [SMALL_STATE(48)] = 1936,
  [SMALL_STATE(49)] = 1964,
  [SMALL_STATE(50)] = 2006,
  [SMALL_STATE(51)] = 2048,
  [SMALL_STATE(52)] = 2090,
  [SMALL_STATE(53)] = 2131,
  [SMALL_STATE(54)] = 2172,
  [SMALL_STATE(55)] = 2213,
  [SMALL_STATE(56)] = 2254,
  [SMALL_STATE(57)] = 2295,
  [SMALL_STATE(58)] = 2336,
  [SMALL_STATE(59)] = 2377,
  [SMALL_STATE(60)] = 2398,
  [SMALL_STATE(61)] = 2415,
  [SMALL_STATE(62)] = 2432,
  [SMALL_STATE(63)] = 2452,
  [SMALL_STATE(64)] = 2472,
  [SMALL_STATE(65)] = 2492,
  [SMALL_STATE(66)] = 2507,
  [SMALL_STATE(67)] = 2532,
  [SMALL_STATE(68)] = 2547,
  [SMALL_STATE(69)] = 2572,
  [SMALL_STATE(70)] = 2587,
  [SMALL_STATE(71)] = 2602,
  [SMALL_STATE(72)] = 2617,
  [SMALL_STATE(73)] = 2632,
  [SMALL_STATE(74)] = 2647,
  [SMALL_STATE(75)] = 2672,
  [SMALL_STATE(76)] = 2687,
  [SMALL_STATE(77)] = 2702,
  [SMALL_STATE(78)] = 2717,
  [SMALL_STATE(79)] = 2732,
  [SMALL_STATE(80)] = 2747,
  [SMALL_STATE(81)] = 2762,
  [SMALL_STATE(82)] = 2787,
  [SMALL_STATE(83)] = 2812,
  [SMALL_STATE(84)] = 2827,
  [SMALL_STATE(85)] = 2849,
  [SMALL_STATE(86)] = 2871,
  [SMALL_STATE(87)] = 2893,
  [SMALL_STATE(88)] = 2910,
  [SMALL_STATE(89)] = 2932,
  [SMALL_STATE(90)] = 2950,
  [SMALL_STATE(91)] = 2968,
  [SMALL_STATE(92)] = 2990,
  [SMALL_STATE(93)] = 3008,
  [SMALL_STATE(94)] = 3030,
  [SMALL_STATE(95)] = 3052,
  [SMALL_STATE(96)] = 3072,
  [SMALL_STATE(97)] = 3094,
  [SMALL_STATE(98)] = 3116,
  [SMALL_STATE(99)] = 3138,
  [SMALL_STATE(100)] = 3160,
  [SMALL_STATE(101)] = 3171,
  [SMALL_STATE(102)] = 3182,
  [SMALL_STATE(103)] = 3193,
  [SMALL_STATE(104)] = 3212,
  [SMALL_STATE(105)] = 3231,
  [SMALL_STATE(106)] = 3250,
  [SMALL_STATE(107)] = 3261,
  [SMALL_STATE(108)] = 3280,
  [SMALL_STATE(109)] = 3299,
  [SMALL_STATE(110)] = 3310,
  [SMALL_STATE(111)] = 3329,
  [SMALL_STATE(112)] = 3348,
  [SMALL_STATE(113)] = 3359,
  [SMALL_STATE(114)] = 3369,
  [SMALL_STATE(115)] = 3385,
  [SMALL_STATE(116)] = 3401,
  [SMALL_STATE(117)] = 3413,
  [SMALL_STATE(118)] = 3425,
  [SMALL_STATE(119)] = 3441,
  [SMALL_STATE(120)] = 3453,
  [SMALL_STATE(121)] = 3465,
  [SMALL_STATE(122)] = 3477,
  [SMALL_STATE(123)] = 3493,
  [SMALL_STATE(124)] = 3505,
  [SMALL_STATE(125)] = 3515,
  [SMALL_STATE(126)] = 3525,
  [SMALL_STATE(127)] = 3535,
  [SMALL_STATE(128)] = 3545,
  [SMALL_STATE(129)] = 3555,
  [SMALL_STATE(130)] = 3571,
  [SMALL_STATE(131)] = 3583,
  [SMALL_STATE(132)] = 3595,
  [SMALL_STATE(133)] = 3611,
  [SMALL_STATE(134)] = 3627,
  [SMALL_STATE(135)] = 3636,
  [SMALL_STATE(136)] = 3645,
  [SMALL_STATE(137)] = 3658,
  [SMALL_STATE(138)] = 3671,
  [SMALL_STATE(139)] = 3684,
  [SMALL_STATE(140)] = 3693,
  [SMALL_STATE(141)] = 3706,
  [SMALL_STATE(142)] = 3719,
  [SMALL_STATE(143)] = 3732,
  [SMALL_STATE(144)] = 3745,
  [SMALL_STATE(145)] = 3758,
  [SMALL_STATE(146)] = 3771,
  [SMALL_STATE(147)] = 3784,
  [SMALL_STATE(148)] = 3797,
  [SMALL_STATE(149)] = 3810,
  [SMALL_STATE(150)] = 3823,
  [SMALL_STATE(151)] = 3836,
  [SMALL_STATE(152)] = 3849,
  [SMALL_STATE(153)] = 3862,
  [SMALL_STATE(154)] = 3872,
  [SMALL_STATE(155)] = 3882,
  [SMALL_STATE(156)] = 3892,
  [SMALL_STATE(157)] = 3902,
  [SMALL_STATE(158)] = 3912,
  [SMALL_STATE(159)] = 3920,
  [SMALL_STATE(160)] = 3930,
  [SMALL_STATE(161)] = 3940,
  [SMALL_STATE(162)] = 3950,
  [SMALL_STATE(163)] = 3960,
  [SMALL_STATE(164)] = 3970,
  [SMALL_STATE(165)] = 3980,
  [SMALL_STATE(166)] = 3990,
  [SMALL_STATE(167)] = 3998,
  [SMALL_STATE(168)] = 4006,
  [SMALL_STATE(169)] = 4016,
  [SMALL_STATE(170)] = 4026,
  [SMALL_STATE(171)] = 4036,
  [SMALL_STATE(172)] = 4046,
  [SMALL_STATE(173)] = 4056,
  [SMALL_STATE(174)] = 4066,
  [SMALL_STATE(175)] = 4074,
  [SMALL_STATE(176)] = 4084,
  [SMALL_STATE(177)] = 4094,
  [SMALL_STATE(178)] = 4104,
  [SMALL_STATE(179)] = 4112,
  [SMALL_STATE(180)] = 4122,
  [SMALL_STATE(181)] = 4130,
  [SMALL_STATE(182)] = 4140,
  [SMALL_STATE(183)] = 4150,
  [SMALL_STATE(184)] = 4160,
  [SMALL_STATE(185)] = 4170,
  [SMALL_STATE(186)] = 4180,
  [SMALL_STATE(187)] = 4190,
  [SMALL_STATE(188)] = 4200,
  [SMALL_STATE(189)] = 4210,
  [SMALL_STATE(190)] = 4220,
  [SMALL_STATE(191)] = 4230,
  [SMALL_STATE(192)] = 4240,
  [SMALL_STATE(193)] = 4250,
  [SMALL_STATE(194)] = 4260,
  [SMALL_STATE(195)] = 4270,
  [SMALL_STATE(196)] = 4280,
  [SMALL_STATE(197)] = 4288,
  [SMALL_STATE(198)] = 4296,
  [SMALL_STATE(199)] = 4303,
  [SMALL_STATE(200)] = 4310,
  [SMALL_STATE(201)] = 4317,
  [SMALL_STATE(202)] = 4324,
  [SMALL_STATE(203)] = 4331,
  [SMALL_STATE(204)] = 4338,
  [SMALL_STATE(205)] = 4345,
  [SMALL_STATE(206)] = 4352,
  [SMALL_STATE(207)] = 4359,
  [SMALL_STATE(208)] = 4366,
  [SMALL_STATE(209)] = 4373,
  [SMALL_STATE(210)] = 4380,
  [SMALL_STATE(211)] = 4387,
  [SMALL_STATE(212)] = 4394,
  [SMALL_STATE(213)] = 4401,
  [SMALL_STATE(214)] = 4408,
  [SMALL_STATE(215)] = 4415,
  [SMALL_STATE(216)] = 4422,
  [SMALL_STATE(217)] = 4429,
  [SMALL_STATE(218)] = 4436,
  [SMALL_STATE(219)] = 4443,
  [SMALL_STATE(220)] = 4450,
  [SMALL_STATE(221)] = 4457,
  [SMALL_STATE(222)] = 4464,
  [SMALL_STATE(223)] = 4471,
  [SMALL_STATE(224)] = 4478,
  [SMALL_STATE(225)] = 4485,
  [SMALL_STATE(226)] = 4492,
  [SMALL_STATE(227)] = 4499,
  [SMALL_STATE(228)] = 4506,
  [SMALL_STATE(229)] = 4513,
  [SMALL_STATE(230)] = 4520,
  [SMALL_STATE(231)] = 4527,
  [SMALL_STATE(232)] = 4534,
  [SMALL_STATE(233)] = 4541,
  [SMALL_STATE(234)] = 4548,
  [SMALL_STATE(235)] = 4555,
  [SMALL_STATE(236)] = 4562,
  [SMALL_STATE(237)] = 4569,
  [SMALL_STATE(238)] = 4576,
  [SMALL_STATE(239)] = 4583,
  [SMALL_STATE(240)] = 4590,
  [SMALL_STATE(241)] = 4597,
  [SMALL_STATE(242)] = 4604,
  [SMALL_STATE(243)] = 4611,
  [SMALL_STATE(244)] = 4618,
  [SMALL_STATE(245)] = 4625,
  [SMALL_STATE(246)] = 4632,
  [SMALL_STATE(247)] = 4639,
  [SMALL_STATE(248)] = 4646,
  [SMALL_STATE(249)] = 4653,
  [SMALL_STATE(250)] = 4660,
  [SMALL_STATE(251)] = 4667,
  [SMALL_STATE(252)] = 4674,
  [SMALL_STATE(253)] = 4681,
  [SMALL_STATE(254)] = 4688,
  [SMALL_STATE(255)] = 4695,
  [SMALL_STATE(256)] = 4702,
  [SMALL_STATE(257)] = 4709,
  [SMALL_STATE(258)] = 4716,
  [SMALL_STATE(259)] = 4723,
  [SMALL_STATE(260)] = 4730,
  [SMALL_STATE(261)] = 4737,
  [SMALL_STATE(262)] = 4744,
  [SMALL_STATE(263)] = 4751,
  [SMALL_STATE(264)] = 4758,
  [SMALL_STATE(265)] = 4765,
  [SMALL_STATE(266)] = 4772,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messageBody_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messageBody_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messageBody_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_messageBody_repeat1, 2, 0, 0),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messageBody_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messageBody_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messageBody_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messageBody_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messageBody_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messageBody_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messageBody_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_messageBody_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messageBody_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldName, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldName, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldNames, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldNames, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranges, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ranges, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranges, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ranges, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ranges_repeat1, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ranges_repeat1, 2, 0, 0),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ranges_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldNames, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldNames, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fieldNames_repeat1, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fieldNames_repeat1, 2, 0, 0),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fieldNames_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 3, 0, 0),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneofBody_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneofBody_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneofBody_repeat1, 2, 0, 0),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneofBody_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneofBody_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneofBody_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 3, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 7, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 7, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 6, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneofBody, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneofBody, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reserved, 2, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reserved, 2, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof, 3, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneofBody, 3, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneofBody, 3, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 8, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 8, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 9, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 9, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 10, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 10, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapField, 10, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mapField, 10, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messageBody, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_messageBody, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapField, 13, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mapField, 13, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emptyStatement, 1, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emptyStatement, 1, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 3, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 3, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messageBody, 3, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_messageBody, 3, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumBody, 2, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enumBody, 2, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 5, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 5, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumBody, 3, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enumBody, 3, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneofField, 5, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneofField, 5, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneofField, 8, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneofField, 8, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sourceFile_repeat1, 2, 0, 0),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sourceFile_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sourceFile_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sourceFile_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sourceFile_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sourceFile_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sourceFile_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sourceFile_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sourceFile_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sourceFile, 2, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sourceFile, 1, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fullIdent, 2, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fullIdent, 1, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fullIdent_repeat1, 2, 0, 0),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fullIdent_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 4, 0, 0),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumBody_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enumBody_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumBody_repeat1, 2, 0, 0),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enumBody_repeat1, 2, 0, 0), SHIFT_REPEAT(230),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceBody, 3, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend, 3, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceBody, 2, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 3, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 3, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_serviceBody_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_serviceBody_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_serviceBody_repeat1, 2, 0, 0),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_serviceBody_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpcBody_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpcBody_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpcBody_repeat1, 2, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgLit, 3, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgLit, 2, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floatLit, 1, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strLit, 3, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 12, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_msgLit_repeat1, 2, 0, 0),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_msgLit_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messageName, 1, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumField, 4, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enumField, 4, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumField, 5, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enumField, 5, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumField, 7, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enumField, 7, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumField, 8, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enumField, 8, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumField, 9, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enumField, 9, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpcBody, 1, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 10, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 11, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpcBody, 2, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpcBody, 3, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumMessageType, 3, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumMessageType, 1, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumMessageType, 2, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldOptions, 1, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldOptions, 2, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumField_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumField_repeat1, 2, 0, 0),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fieldOptions_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fieldOptions_repeat1, 2, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumValueOption, 3, 0, 0),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldNumber, 1, 0, 0),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_msgLit_repeat1, 3, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumMessageType_repeat1, 2, 0, 0), SHIFT_REPEAT(263),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldOption, 3, 0, 0),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionName, 1, 0, 0),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumName, 1, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapName, 1, 0, 0),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumMessageType_repeat1, 2, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionName, 3, 0, 0),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumVariantName, 1, 0, 0),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [631] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceName, 1, 0, 0),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extendName, 1, 0, 0),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpcName, 1, 0, 0),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneofName, 1, 0, 0),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyType, 1, 0, 0),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_protobuf(void) {
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

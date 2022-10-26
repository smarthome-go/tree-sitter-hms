#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 129
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 96
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 18
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 15

enum {
  anon_sym_SEMI = 1,
  anon_sym_let = 2,
  anon_sym_EQ = 3,
  anon_sym_import = 4,
  anon_sym_as = 5,
  anon_sym_from = 6,
  anon_sym_break = 7,
  anon_sym_continue = 8,
  anon_sym_return = 9,
  anon_sym_null = 10,
  anon_sym_EQ_GT = 11,
  anon_sym_LBRACK = 12,
  anon_sym_COMMA = 13,
  anon_sym_RBRACK = 14,
  anon_sym_PLUS = 15,
  anon_sym_DASH = 16,
  anon_sym_BANG = 17,
  anon_sym_PIPE_PIPE = 18,
  anon_sym_AMP_AMP = 19,
  anon_sym_EQ_EQ = 20,
  anon_sym_BANG_EQ = 21,
  anon_sym_LT = 22,
  anon_sym_LT_EQ = 23,
  anon_sym_GT = 24,
  anon_sym_GT_EQ = 25,
  anon_sym_STAR = 26,
  anon_sym_SLASH = 27,
  anon_sym_PERCENT = 28,
  anon_sym_STAR_STAR = 29,
  anon_sym_DOT = 30,
  anon_sym_LPAREN = 31,
  anon_sym_RPAREN = 32,
  anon_sym_STAR_EQ = 33,
  anon_sym_SLASH_EQ = 34,
  anon_sym_PERCENT_EQ = 35,
  anon_sym_PLUS_EQ = 36,
  anon_sym_DASH_EQ = 37,
  anon_sym_STAR_STAR_EQ = 38,
  anon_sym_LBRACE = 39,
  anon_sym_RBRACE = 40,
  anon_sym_if = 41,
  anon_sym_else = 42,
  anon_sym_for = 43,
  anon_sym_in = 44,
  anon_sym_DOT_DOT = 45,
  anon_sym_while = 46,
  anon_sym_loop = 47,
  anon_sym_fn = 48,
  anon_sym_try = 49,
  anon_sym_catch = 50,
  sym_number = 51,
  sym_bool = 52,
  sym_type = 53,
  sym_ident = 54,
  anon_sym_DQUOTE = 55,
  anon_sym_SQUOTE = 56,
  sym_unescaped_double_string_fragment = 57,
  sym_unescaped_single_string_fragment = 58,
  sym_escape_sequence = 59,
  sym_comment = 60,
  sym_program = 61,
  sym__statement = 62,
  sym_let_stmt = 63,
  sym_import_stmt = 64,
  sym_break_stmt = 65,
  sym_continue_stmt = 66,
  sym_return_stmt = 67,
  sym__expression = 68,
  sym__atom = 69,
  sym_pair_expr = 70,
  sym_list_literal = 71,
  sym_prefix_expr = 72,
  sym_infix_expr = 73,
  sym_member_expr = 74,
  sym_index_expr = 75,
  sym_call_expr = 76,
  sym_arguments = 77,
  sym_assign_expr = 78,
  sym_cast_expr = 79,
  sym_block = 80,
  sym_if_expr = 81,
  sym_for_expr = 82,
  sym_while_expr = 83,
  sym_loop_expr = 84,
  sym_fn_expr = 85,
  sym_parameters = 86,
  sym_try_expr = 87,
  sym_paren_expr = 88,
  sym_string = 89,
  aux_sym_program_repeat1 = 90,
  aux_sym_list_literal_repeat1 = 91,
  aux_sym_block_repeat1 = 92,
  aux_sym_parameters_repeat1 = 93,
  aux_sym_string_repeat1 = 94,
  aux_sym_string_repeat2 = 95,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_import] = "import",
  [anon_sym_as] = "as",
  [anon_sym_from] = "from",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
  [anon_sym_return] = "return",
  [anon_sym_null] = "null",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_STAR_EQ] = "**=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_while] = "while",
  [anon_sym_loop] = "loop",
  [anon_sym_fn] = "fn",
  [anon_sym_try] = "try",
  [anon_sym_catch] = "catch",
  [sym_number] = "number",
  [sym_bool] = "bool",
  [sym_type] = "type",
  [sym_ident] = "ident",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [sym_unescaped_double_string_fragment] = "string_fragment",
  [sym_unescaped_single_string_fragment] = "string_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym_let_stmt] = "let_stmt",
  [sym_import_stmt] = "import_stmt",
  [sym_break_stmt] = "break_stmt",
  [sym_continue_stmt] = "continue_stmt",
  [sym_return_stmt] = "return_stmt",
  [sym__expression] = "_expression",
  [sym__atom] = "_atom",
  [sym_pair_expr] = "pair_expr",
  [sym_list_literal] = "list_literal",
  [sym_prefix_expr] = "prefix_expr",
  [sym_infix_expr] = "infix_expr",
  [sym_member_expr] = "member_expr",
  [sym_index_expr] = "index_expr",
  [sym_call_expr] = "call_expr",
  [sym_arguments] = "arguments",
  [sym_assign_expr] = "assign_expr",
  [sym_cast_expr] = "cast_expr",
  [sym_block] = "block",
  [sym_if_expr] = "if_expr",
  [sym_for_expr] = "for_expr",
  [sym_while_expr] = "while_expr",
  [sym_loop_expr] = "loop_expr",
  [sym_fn_expr] = "fn_expr",
  [sym_parameters] = "parameters",
  [sym_try_expr] = "try_expr",
  [sym_paren_expr] = "paren_expr",
  [sym_string] = "string",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_list_literal_repeat1] = "list_literal_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_STAR_EQ] = anon_sym_STAR_STAR_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_loop] = anon_sym_loop,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_try] = anon_sym_try,
  [anon_sym_catch] = anon_sym_catch,
  [sym_number] = sym_number,
  [sym_bool] = sym_bool,
  [sym_type] = sym_type,
  [sym_ident] = sym_ident,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_unescaped_double_string_fragment] = sym_unescaped_double_string_fragment,
  [sym_unescaped_single_string_fragment] = sym_unescaped_double_string_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_comment] = sym_comment,
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
  [sym_let_stmt] = sym_let_stmt,
  [sym_import_stmt] = sym_import_stmt,
  [sym_break_stmt] = sym_break_stmt,
  [sym_continue_stmt] = sym_continue_stmt,
  [sym_return_stmt] = sym_return_stmt,
  [sym__expression] = sym__expression,
  [sym__atom] = sym__atom,
  [sym_pair_expr] = sym_pair_expr,
  [sym_list_literal] = sym_list_literal,
  [sym_prefix_expr] = sym_prefix_expr,
  [sym_infix_expr] = sym_infix_expr,
  [sym_member_expr] = sym_member_expr,
  [sym_index_expr] = sym_index_expr,
  [sym_call_expr] = sym_call_expr,
  [sym_arguments] = sym_arguments,
  [sym_assign_expr] = sym_assign_expr,
  [sym_cast_expr] = sym_cast_expr,
  [sym_block] = sym_block,
  [sym_if_expr] = sym_if_expr,
  [sym_for_expr] = sym_for_expr,
  [sym_while_expr] = sym_while_expr,
  [sym_loop_expr] = sym_loop_expr,
  [sym_fn_expr] = sym_fn_expr,
  [sym_parameters] = sym_parameters,
  [sym_try_expr] = sym_try_expr,
  [sym_paren_expr] = sym_paren_expr,
  [sym_string] = sym_string,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_list_literal_repeat1] = aux_sym_list_literal_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
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
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR_EQ] = {
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
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_try] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_catch] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_unescaped_double_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_unescaped_single_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_let_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_import_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_break_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_continue_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_return_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__atom] = {
    .visible = false,
    .named = true,
  },
  [sym_pair_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_list_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_infix_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_member_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_index_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_cast_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_if_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_for_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_while_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_loop_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_fn_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_try_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_paren_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
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
};

enum {
  field_argument = 1,
  field_arguments = 2,
  field_as = 3,
  field_close = 4,
  field_field = 5,
  field_from = 6,
  field_function = 7,
  field_index = 8,
  field_key = 9,
  field_left = 10,
  field_name = 11,
  field_object = 12,
  field_open = 13,
  field_operator = 14,
  field_parameters = 15,
  field_right = 16,
  field_type = 17,
  field_value = 18,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_arguments] = "arguments",
  [field_as] = "as",
  [field_close] = "close",
  [field_field] = "field",
  [field_from] = "from",
  [field_function] = "function",
  [field_index] = "index",
  [field_key] = "key",
  [field_left] = "left",
  [field_name] = "name",
  [field_object] = "object",
  [field_open] = "open",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_right] = "right",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 3},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 2},
  [10] = {.index = 16, .length = 2},
  [11] = {.index = 18, .length = 2},
  [12] = {.index = 20, .length = 2},
  [13] = {.index = 22, .length = 4},
  [14] = {.index = 26, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_value, 1},
  [2] =
    {field_argument, 1},
    {field_operator, 0},
  [4] =
    {field_arguments, 1},
    {field_function, 0},
  [6] =
    {field_parameters, 1},
  [7] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [10] =
    {field_type, 2},
    {field_value, 0},
  [12] =
    {field_field, 2},
    {field_object, 0},
  [14] =
    {field_key, 0},
    {field_value, 2},
  [16] =
    {field_name, 1},
    {field_value, 3},
  [18] =
    {field_from, 3},
    {field_function, 1},
  [20] =
    {field_name, 1},
    {field_parameters, 2},
  [22] =
    {field_close, 3},
    {field_index, 2},
    {field_object, 0},
    {field_open, 1},
  [26] =
    {field_as, 3},
    {field_from, 5},
    {field_function, 1},
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
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
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
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(79)
      if (lookahead == '!') ADVANCE(107);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '%') ADVANCE(118);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(197);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == ')') ADVANCE(122);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == '.') ADVANCE(120);
      if (lookahead == '/') ADVANCE(117);
      if (lookahead == ';') ADVANCE(82);
      if (lookahead == '<') ADVANCE(112);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(114);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(101);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'b') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(6);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead == 'w') ADVANCE(19);
      if (lookahead == '{') ADVANCE(129);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '}') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 1:
      if (lookahead == '&') ADVANCE(109);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(111);
      END_STATE();
    case 3:
      if (lookahead == 'U') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(74);
      if (lookahead == 'x') ADVANCE(72);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(69);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 16:
      if (lookahead == 'f') ADVANCE(131);
      if (lookahead == 'm') ADVANCE(42);
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 17:
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(149);
      END_STATE();
    case 19:
      if (lookahead == 'h') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'h') ADVANCE(146);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'k') ADVANCE(90);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'm') ADVANCE(151);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'm') ADVANCE(151);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 31:
      if (lookahead == 'm') ADVANCE(89);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 41:
      if (lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 42:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(9);
      if (lookahead == 'y') ADVANCE(144);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 62:
      if (lookahead == '|') ADVANCE(108);
      END_STATE();
    case 63:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (lookahead == '!') ADVANCE(106);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '\'') ADVANCE(197);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == ')') ADVANCE(122);
      if (lookahead == '+') ADVANCE(102);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == ';') ADVANCE(82);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == ']') ADVANCE(101);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 'l') ADVANCE(176);
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(162);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == 'w') ADVANCE(164);
      if (lookahead == '}') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 64:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (lookahead == '!') ADVANCE(2);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '%') ADVANCE(118);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == ')') ADVANCE(122);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == '.') ADVANCE(120);
      if (lookahead == '/') ADVANCE(117);
      if (lookahead == ';') ADVANCE(82);
      if (lookahead == '<') ADVANCE(112);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(114);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == ']') ADVANCE(101);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'b') ADVANCE(35);
      if (lookahead == 'c') ADVANCE(5);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == '{') ADVANCE(129);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '}') ADVANCE(130);
      END_STATE();
    case 65:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead == '#') ADVANCE(201);
      if (lookahead == '\'') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 66:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(199);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '#') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 67:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == ')') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(204);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(68);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 79:
      if (eof) ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(79)
      if (lookahead == '!') ADVANCE(107);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '%') ADVANCE(118);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(197);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == ')') ADVANCE(122);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == '.') ADVANCE(120);
      if (lookahead == '/') ADVANCE(117);
      if (lookahead == ';') ADVANCE(82);
      if (lookahead == '<') ADVANCE(112);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(114);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == ']') ADVANCE(101);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'b') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(6);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead == 'w') ADVANCE(19);
      if (lookahead == '{') ADVANCE(129);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '}') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 80:
      if (eof) ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(80)
      if (lookahead == '!') ADVANCE(106);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '\'') ADVANCE(197);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == '+') ADVANCE(102);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == 'b') ADVANCE(183);
      if (lookahead == 'c') ADVANCE(175);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'l') ADVANCE(154);
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(162);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == 'w') ADVANCE(164);
      if (lookahead == '}') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '>') ADVANCE(98);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_break);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_continue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(126);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(127);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(111);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(119);
      if (lookahead == '=') ADVANCE(123);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(125);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      if (lookahead == '=') ADVANCE(128);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(137);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_EQ);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_loop);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_loop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_try);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_try);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_catch);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_bool);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_type);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead == 'o') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == 'o') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 'm') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(155);
      if (lookahead == 'y') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '\n') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(199);
      if (lookahead == '#') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead == '#') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 80},
  [2] = {.lex_state = 80},
  [3] = {.lex_state = 80},
  [4] = {.lex_state = 80},
  [5] = {.lex_state = 80},
  [6] = {.lex_state = 80},
  [7] = {.lex_state = 80},
  [8] = {.lex_state = 63},
  [9] = {.lex_state = 63},
  [10] = {.lex_state = 63},
  [11] = {.lex_state = 63},
  [12] = {.lex_state = 63},
  [13] = {.lex_state = 63},
  [14] = {.lex_state = 63},
  [15] = {.lex_state = 63},
  [16] = {.lex_state = 63},
  [17] = {.lex_state = 63},
  [18] = {.lex_state = 63},
  [19] = {.lex_state = 63},
  [20] = {.lex_state = 63},
  [21] = {.lex_state = 63},
  [22] = {.lex_state = 63},
  [23] = {.lex_state = 63},
  [24] = {.lex_state = 63},
  [25] = {.lex_state = 63},
  [26] = {.lex_state = 63},
  [27] = {.lex_state = 63},
  [28] = {.lex_state = 63},
  [29] = {.lex_state = 63},
  [30] = {.lex_state = 64},
  [31] = {.lex_state = 64},
  [32] = {.lex_state = 64},
  [33] = {.lex_state = 64},
  [34] = {.lex_state = 64},
  [35] = {.lex_state = 64},
  [36] = {.lex_state = 64},
  [37] = {.lex_state = 64},
  [38] = {.lex_state = 64},
  [39] = {.lex_state = 64},
  [40] = {.lex_state = 64},
  [41] = {.lex_state = 64},
  [42] = {.lex_state = 64},
  [43] = {.lex_state = 64},
  [44] = {.lex_state = 64},
  [45] = {.lex_state = 64},
  [46] = {.lex_state = 64},
  [47] = {.lex_state = 64},
  [48] = {.lex_state = 64},
  [49] = {.lex_state = 64},
  [50] = {.lex_state = 64},
  [51] = {.lex_state = 64},
  [52] = {.lex_state = 64},
  [53] = {.lex_state = 64},
  [54] = {.lex_state = 64},
  [55] = {.lex_state = 64},
  [56] = {.lex_state = 64},
  [57] = {.lex_state = 64},
  [58] = {.lex_state = 64},
  [59] = {.lex_state = 64},
  [60] = {.lex_state = 64},
  [61] = {.lex_state = 64},
  [62] = {.lex_state = 64},
  [63] = {.lex_state = 64},
  [64] = {.lex_state = 64},
  [65] = {.lex_state = 64},
  [66] = {.lex_state = 64},
  [67] = {.lex_state = 64},
  [68] = {.lex_state = 64},
  [69] = {.lex_state = 64},
  [70] = {.lex_state = 64},
  [71] = {.lex_state = 64},
  [72] = {.lex_state = 64},
  [73] = {.lex_state = 64},
  [74] = {.lex_state = 64},
  [75] = {.lex_state = 64},
  [76] = {.lex_state = 64},
  [77] = {.lex_state = 64},
  [78] = {.lex_state = 64},
  [79] = {.lex_state = 80},
  [80] = {.lex_state = 65},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 66},
  [83] = {.lex_state = 65},
  [84] = {.lex_state = 66},
  [85] = {.lex_state = 65},
  [86] = {.lex_state = 66},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 67},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 67},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 67},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 67},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 64},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 67},
  [122] = {.lex_state = 67},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 67},
  [125] = {.lex_state = 67},
  [126] = {.lex_state = 67},
  [127] = {.lex_state = 67},
  [128] = {.lex_state = 67},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_loop] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_try] = ACTIONS(1),
    [anon_sym_catch] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_bool] = ACTIONS(1),
    [sym_type] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(111),
    [sym__statement] = STATE(117),
    [sym_let_stmt] = STATE(117),
    [sym_import_stmt] = STATE(117),
    [sym_break_stmt] = STATE(117),
    [sym_continue_stmt] = STATE(117),
    [sym_return_stmt] = STATE(117),
    [sym__expression] = STATE(70),
    [sym__atom] = STATE(70),
    [sym_pair_expr] = STATE(70),
    [sym_list_literal] = STATE(70),
    [sym_prefix_expr] = STATE(70),
    [sym_infix_expr] = STATE(70),
    [sym_member_expr] = STATE(70),
    [sym_index_expr] = STATE(70),
    [sym_call_expr] = STATE(70),
    [sym_assign_expr] = STATE(70),
    [sym_cast_expr] = STATE(70),
    [sym_if_expr] = STATE(70),
    [sym_for_expr] = STATE(70),
    [sym_while_expr] = STATE(70),
    [sym_loop_expr] = STATE(70),
    [sym_fn_expr] = STATE(70),
    [sym_try_expr] = STATE(70),
    [sym_paren_expr] = STATE(70),
    [sym_string] = STATE(35),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_null] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_if] = ACTIONS(25),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_loop] = ACTIONS(31),
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_try] = ACTIONS(35),
    [sym_number] = ACTIONS(37),
    [sym_bool] = ACTIONS(17),
    [sym_ident] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__statement] = STATE(117),
    [sym_let_stmt] = STATE(117),
    [sym_import_stmt] = STATE(117),
    [sym_break_stmt] = STATE(117),
    [sym_continue_stmt] = STATE(117),
    [sym_return_stmt] = STATE(117),
    [sym__expression] = STATE(70),
    [sym__atom] = STATE(70),
    [sym_pair_expr] = STATE(70),
    [sym_list_literal] = STATE(70),
    [sym_prefix_expr] = STATE(70),
    [sym_infix_expr] = STATE(70),
    [sym_member_expr] = STATE(70),
    [sym_index_expr] = STATE(70),
    [sym_call_expr] = STATE(70),
    [sym_assign_expr] = STATE(70),
    [sym_cast_expr] = STATE(70),
    [sym_if_expr] = STATE(70),
    [sym_for_expr] = STATE(70),
    [sym_while_expr] = STATE(70),
    [sym_loop_expr] = STATE(70),
    [sym_fn_expr] = STATE(70),
    [sym_try_expr] = STATE(70),
    [sym_paren_expr] = STATE(70),
    [sym_string] = STATE(35),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(45),
    [anon_sym_import] = ACTIONS(48),
    [anon_sym_break] = ACTIONS(51),
    [anon_sym_continue] = ACTIONS(54),
    [anon_sym_return] = ACTIONS(57),
    [anon_sym_null] = ACTIONS(60),
    [anon_sym_LBRACK] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(66),
    [anon_sym_DASH] = ACTIONS(66),
    [anon_sym_BANG] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(72),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(78),
    [anon_sym_loop] = ACTIONS(81),
    [anon_sym_fn] = ACTIONS(84),
    [anon_sym_try] = ACTIONS(87),
    [sym_number] = ACTIONS(90),
    [sym_bool] = ACTIONS(60),
    [sym_ident] = ACTIONS(60),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(96),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__statement] = STATE(117),
    [sym_let_stmt] = STATE(117),
    [sym_import_stmt] = STATE(117),
    [sym_break_stmt] = STATE(117),
    [sym_continue_stmt] = STATE(117),
    [sym_return_stmt] = STATE(117),
    [sym__expression] = STATE(70),
    [sym__atom] = STATE(70),
    [sym_pair_expr] = STATE(70),
    [sym_list_literal] = STATE(70),
    [sym_prefix_expr] = STATE(70),
    [sym_infix_expr] = STATE(70),
    [sym_member_expr] = STATE(70),
    [sym_index_expr] = STATE(70),
    [sym_call_expr] = STATE(70),
    [sym_assign_expr] = STATE(70),
    [sym_cast_expr] = STATE(70),
    [sym_if_expr] = STATE(70),
    [sym_for_expr] = STATE(70),
    [sym_while_expr] = STATE(70),
    [sym_loop_expr] = STATE(70),
    [sym_fn_expr] = STATE(70),
    [sym_try_expr] = STATE(70),
    [sym_paren_expr] = STATE(70),
    [sym_string] = STATE(35),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_null] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_if] = ACTIONS(25),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_loop] = ACTIONS(31),
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_try] = ACTIONS(35),
    [sym_number] = ACTIONS(37),
    [sym_bool] = ACTIONS(17),
    [sym_ident] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__statement] = STATE(110),
    [sym_let_stmt] = STATE(110),
    [sym_import_stmt] = STATE(110),
    [sym_break_stmt] = STATE(110),
    [sym_continue_stmt] = STATE(110),
    [sym_return_stmt] = STATE(110),
    [sym__expression] = STATE(70),
    [sym__atom] = STATE(70),
    [sym_pair_expr] = STATE(70),
    [sym_list_literal] = STATE(70),
    [sym_prefix_expr] = STATE(70),
    [sym_infix_expr] = STATE(70),
    [sym_member_expr] = STATE(70),
    [sym_index_expr] = STATE(70),
    [sym_call_expr] = STATE(70),
    [sym_assign_expr] = STATE(70),
    [sym_cast_expr] = STATE(70),
    [sym_if_expr] = STATE(70),
    [sym_for_expr] = STATE(70),
    [sym_while_expr] = STATE(70),
    [sym_loop_expr] = STATE(70),
    [sym_fn_expr] = STATE(70),
    [sym_try_expr] = STATE(70),
    [sym_paren_expr] = STATE(70),
    [sym_string] = STATE(35),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_null] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_if] = ACTIONS(25),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_loop] = ACTIONS(31),
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_try] = ACTIONS(35),
    [sym_number] = ACTIONS(37),
    [sym_bool] = ACTIONS(17),
    [sym_ident] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__statement] = STATE(92),
    [sym_let_stmt] = STATE(92),
    [sym_import_stmt] = STATE(92),
    [sym_break_stmt] = STATE(92),
    [sym_continue_stmt] = STATE(92),
    [sym_return_stmt] = STATE(92),
    [sym__expression] = STATE(70),
    [sym__atom] = STATE(70),
    [sym_pair_expr] = STATE(70),
    [sym_list_literal] = STATE(70),
    [sym_prefix_expr] = STATE(70),
    [sym_infix_expr] = STATE(70),
    [sym_member_expr] = STATE(70),
    [sym_index_expr] = STATE(70),
    [sym_call_expr] = STATE(70),
    [sym_assign_expr] = STATE(70),
    [sym_cast_expr] = STATE(70),
    [sym_if_expr] = STATE(70),
    [sym_for_expr] = STATE(70),
    [sym_while_expr] = STATE(70),
    [sym_loop_expr] = STATE(70),
    [sym_fn_expr] = STATE(70),
    [sym_try_expr] = STATE(70),
    [sym_paren_expr] = STATE(70),
    [sym_string] = STATE(35),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_null] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(103),
    [anon_sym_if] = ACTIONS(25),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_loop] = ACTIONS(31),
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_try] = ACTIONS(35),
    [sym_number] = ACTIONS(37),
    [sym_bool] = ACTIONS(17),
    [sym_ident] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__statement] = STATE(110),
    [sym_let_stmt] = STATE(110),
    [sym_import_stmt] = STATE(110),
    [sym_break_stmt] = STATE(110),
    [sym_continue_stmt] = STATE(110),
    [sym_return_stmt] = STATE(110),
    [sym__expression] = STATE(70),
    [sym__atom] = STATE(70),
    [sym_pair_expr] = STATE(70),
    [sym_list_literal] = STATE(70),
    [sym_prefix_expr] = STATE(70),
    [sym_infix_expr] = STATE(70),
    [sym_member_expr] = STATE(70),
    [sym_index_expr] = STATE(70),
    [sym_call_expr] = STATE(70),
    [sym_assign_expr] = STATE(70),
    [sym_cast_expr] = STATE(70),
    [sym_if_expr] = STATE(70),
    [sym_for_expr] = STATE(70),
    [sym_while_expr] = STATE(70),
    [sym_loop_expr] = STATE(70),
    [sym_fn_expr] = STATE(70),
    [sym_try_expr] = STATE(70),
    [sym_paren_expr] = STATE(70),
    [sym_string] = STATE(35),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_null] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_if] = ACTIONS(25),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_loop] = ACTIONS(31),
    [anon_sym_fn] = ACTIONS(33),
    [anon_sym_try] = ACTIONS(35),
    [sym_number] = ACTIONS(37),
    [sym_bool] = ACTIONS(17),
    [sym_ident] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_break,
    ACTIONS(13), 1,
      anon_sym_continue,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_while,
    ACTIONS(31), 1,
      anon_sym_loop,
    ACTIONS(33), 1,
      anon_sym_fn,
    ACTIONS(35), 1,
      anon_sym_try,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    STATE(35), 1,
      sym_string,
    ACTIONS(17), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(110), 6,
      sym__statement,
      sym_let_stmt,
      sym_import_stmt,
      sym_break_stmt,
      sym_continue_stmt,
      sym_return_stmt,
    STATE(70), 18,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_list_literal,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
      sym_index_expr,
      sym_call_expr,
      sym_assign_expr,
      sym_cast_expr,
      sym_if_expr,
      sym_for_expr,
      sym_while_expr,
      sym_loop_expr,
      sym_fn_expr,
      sym_try_expr,
      sym_paren_expr,
  [93] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_while,
    ACTIONS(31), 1,
      anon_sym_loop,
    ACTIONS(33), 1,
      anon_sym_fn,
    ACTIONS(35), 1,
      anon_sym_try,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(107), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(109), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(71), 18,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_list_literal,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
      sym_index_expr,
      sym_call_expr,
      sym_assign_expr,
      sym_cast_expr,
      sym_if_expr,
      sym_for_expr,
      sym_while_expr,
      sym_loop_expr,
      sym_fn_expr,
      sym_try_expr,
      sym_paren_expr,
  [167] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_while,
    ACTIONS(31), 1,
      anon_sym_loop,
    ACTIONS(33), 1,
      anon_sym_fn,
    ACTIONS(35), 1,
      anon_sym_try,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(113), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(115), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(72), 18,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_list_literal,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
      sym_index_expr,
      sym_call_expr,
      sym_assign_expr,
      sym_cast_expr,
      sym_if_expr,
      sym_for_expr,
      sym_while_expr,
      sym_loop_expr,
      sym_fn_expr,
      sym_try_expr,
      sym_paren_expr,
  [241] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_while,
    ACTIONS(31), 1,
      anon_sym_loop,
    ACTIONS(33), 1,
      anon_sym_fn,
    ACTIONS(35), 1,
      anon_sym_try,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_RBRACK,
    ACTIONS(123), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(119), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(67), 18,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_list_literal,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
      sym_index_expr,
      sym_call_expr,
      sym_assign_expr,
      sym_cast_expr,
      sym_if_expr,
      sym_for_expr,
      sym_while_expr,
      sym_loop_expr,
      sym_fn_expr,
      sym_try_expr,
      sym_paren_expr,
  [314] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_while,
    ACTIONS(31), 1,
      anon_sym_loop,
    ACTIONS(33), 1,
      anon_sym_fn,
    ACTIONS(35), 1,
      anon_sym_try,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    ACTIONS(129), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(125), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(68), 18,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_list_literal,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
      sym_index_expr,
      sym_call_expr,
      sym_assign_expr,
      sym_cast_expr,
      sym_if_expr,
      sym_for_expr,
      sym_while_expr,
      sym_loop_expr,
      sym_fn_expr,
      sym_try_expr,
      sym_paren_expr,
  [387] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_while,
    ACTIONS(31), 1,
      anon_sym_loop,
    ACTIONS(33), 1,
      anon_sym_fn,
    ACTIONS(35), 1,
      anon_sym_try,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(131), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(74), 18,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_list_literal,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
      sym_index_expr,
      sym_call_expr,
      sym_assign_expr,
      sym_cast_expr,
      sym_if_expr,
      sym_for_expr,
      sym_while_expr,
      sym_loop_expr,
      sym_fn_expr,
      sym_try_expr,
      sym_paren_expr,
  [457] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_while,
    ACTIONS(31), 1,
      anon_sym_loop,
    ACTIONS(33), 1,
      anon_sym_fn,
    ACTIONS(35), 1,
      anon_sym_try,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(135), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(75), 18,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_list_literal,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
      sym_index_expr,
      sym_call_expr,
      sym_assign_expr,
      sym_cast_expr,
      sym_if_expr,
      sym_for_expr,
      sym_while_expr,
      sym_loop_expr,
      sym_fn_expr,
      sym_try_expr,
      sym_paren_expr,
  [527] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_while,
    ACTIONS(31), 1,
      anon_sym_loop,
    ACTIONS(33), 1,
      anon_sym_fn,
    ACTIONS(35), 1,
      anon_sym_try,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(139), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(73), 18,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_list_literal,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
      sym_index_expr,
      sym_call_expr,
      sym_assign_expr,
      sym_cast_expr,
      sym_if_expr,
      sym_for_expr,
      sym_while_expr,
      sym_loop_expr,
      sym_fn_expr,
      sym_try_expr,
      sym_paren_expr,
  [597] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_while,
    ACTIONS(31), 1,
      anon_sym_loop,
    ACTIONS(33), 1,
      anon_sym_fn,
    ACTIONS(35), 1,
      anon_sym_try,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(143), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(76), 18,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_list_literal,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
      sym_index_expr,
      sym_call_expr,
      sym_assign_expr,
      sym_cast_expr,
      sym_if_expr,
      sym_for_expr,
      sym_while_expr,
      sym_loop_expr,
      sym_fn_expr,
      sym_try_expr,
      sym_paren_expr,
  [667] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_while,
    ACTIONS(31), 1,
      anon_sym_loop,
    ACTIONS(33), 1,
      anon_sym_fn,
    ACTIONS(35), 1,
      anon_sym_try,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(147), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(34), 18,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_list_literal,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
      sym_index_expr,
      sym_call_expr,
      sym_assign_expr,
      sym_cast_expr,
      sym_if_expr,
      sym_for_expr,
      sym_while_expr,
      sym_loop_expr,
      sym_fn_expr,
      sym_try_expr,
      sym_paren_expr,
  [737] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_while,
    ACTIONS(31), 1,
      anon_sym_loop,
    ACTIONS(33), 1,
      anon_sym_fn,
    ACTIONS(35), 1,
      anon_sym_try,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(151), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(69), 18,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_list_literal,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
      sym_index_expr,
      sym_call_expr,
      sym_assign_expr,
      sym_cast_expr,
      sym_if_expr,
      sym_for_expr,
      sym_while_expr,
      sym_loop_expr,
      sym_fn_expr,
      sym_try_expr,
      sym_paren_expr,
  [807] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_while,
    ACTIONS(31), 1,
      anon_sym_loop,
    ACTIONS(33), 1,
      anon_sym_fn,
    ACTIONS(35), 1,
      anon_sym_try,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(155), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(42), 18,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_list_literal,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
      sym_index_expr,
      sym_call_expr,
      sym_assign_expr,
      sym_cast_expr,
      sym_if_expr,
      sym_for_expr,
      sym_while_expr,
      sym_loop_expr,
      sym_fn_expr,
      sym_try_expr,
      sym_paren_expr,
  [877] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_while,
    ACTIONS(31), 1,
      anon_sym_loop,
    ACTIONS(33), 1,
      anon_sym_fn,
    ACTIONS(35), 1,
      anon_sym_try,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(159), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(40), 18,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_list_literal,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
      sym_index_expr,
      sym_call_expr,
      sym_assign_expr,
      sym_cast_expr,
      sym_if_expr,
      sym_for_expr,
      sym_while_expr,
      sym_loop_expr,
      sym_fn_expr,
      sym_try_expr,
      sym_paren_expr,
  [947] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_while,
    ACTIONS(31), 1,
      anon_sym_loop,
    ACTIONS(33), 1,
      anon_sym_fn,
    ACTIONS(35), 1,
      anon_sym_try,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(163), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(36), 18,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_list_literal,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
      sym_index_expr,
      sym_call_expr,
      sym_assign_expr,
      sym_cast_expr,
      sym_if_expr,
      sym_for_expr,
      sym_while_expr,
      sym_loop_expr,
      sym_fn_expr,
      sym_try_expr,
      sym_paren_expr,
  [1017] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_while,
    ACTIONS(31), 1,
      anon_sym_loop,
    ACTIONS(33), 1,
      anon_sym_fn,
    ACTIONS(35), 1,
      anon_sym_try,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(169), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(167), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(37), 18,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_list_literal,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
      sym_index_expr,
      sym_call_expr,
      sym_assign_expr,
      sym_cast_expr,
      sym_if_expr,
      sym_for_expr,
      sym_while_expr,
      sym_loop_expr,
      sym_fn_expr,
      sym_try_expr,
      sym_paren_expr,
  [1087] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_while,
    ACTIONS(31), 1,
      anon_sym_loop,
    ACTIONS(33), 1,
      anon_sym_fn,
    ACTIONS(35), 1,
      anon_sym_try,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(171), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(78), 18,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_list_literal,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
      sym_index_expr,
      sym_call_expr,
      sym_assign_expr,
      sym_cast_expr,
      sym_if_expr,
      sym_for_expr,
      sym_while_expr,
      sym_loop_expr,
      sym_fn_expr,
      sym_try_expr,
      sym_paren_expr,
  [1157] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_while,
    ACTIONS(31), 1,
      anon_sym_loop,
    ACTIONS(33), 1,
      anon_sym_fn,
    ACTIONS(35), 1,
      anon_sym_try,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(175), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(38), 18,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_list_literal,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
      sym_index_expr,
      sym_call_expr,
      sym_assign_expr,
      sym_cast_expr,
      sym_if_expr,
      sym_for_expr,
      sym_while_expr,
      sym_loop_expr,
      sym_fn_expr,
      sym_try_expr,
      sym_paren_expr,
  [1227] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_while,
    ACTIONS(31), 1,
      anon_sym_loop,
    ACTIONS(33), 1,
      anon_sym_fn,
    ACTIONS(35), 1,
      anon_sym_try,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(179), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(46), 18,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_list_literal,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
      sym_index_expr,
      sym_call_expr,
      sym_assign_expr,
      sym_cast_expr,
      sym_if_expr,
      sym_for_expr,
      sym_while_expr,
      sym_loop_expr,
      sym_fn_expr,
      sym_try_expr,
      sym_paren_expr,
  [1297] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_while,
    ACTIONS(31), 1,
      anon_sym_loop,
    ACTIONS(33), 1,
      anon_sym_fn,
    ACTIONS(35), 1,
      anon_sym_try,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(183), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(39), 18,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_list_literal,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
      sym_index_expr,
      sym_call_expr,
      sym_assign_expr,
      sym_cast_expr,
      sym_if_expr,
      sym_for_expr,
      sym_while_expr,
      sym_loop_expr,
      sym_fn_expr,
      sym_try_expr,
      sym_paren_expr,
  [1367] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_while,
    ACTIONS(31), 1,
      anon_sym_loop,
    ACTIONS(33), 1,
      anon_sym_fn,
    ACTIONS(35), 1,
      anon_sym_try,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(189), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(187), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(66), 18,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_list_literal,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
      sym_index_expr,
      sym_call_expr,
      sym_assign_expr,
      sym_cast_expr,
      sym_if_expr,
      sym_for_expr,
      sym_while_expr,
      sym_loop_expr,
      sym_fn_expr,
      sym_try_expr,
      sym_paren_expr,
  [1437] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_while,
    ACTIONS(31), 1,
      anon_sym_loop,
    ACTIONS(33), 1,
      anon_sym_fn,
    ACTIONS(35), 1,
      anon_sym_try,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(191), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(41), 18,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_list_literal,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
      sym_index_expr,
      sym_call_expr,
      sym_assign_expr,
      sym_cast_expr,
      sym_if_expr,
      sym_for_expr,
      sym_while_expr,
      sym_loop_expr,
      sym_fn_expr,
      sym_try_expr,
      sym_paren_expr,
  [1507] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_while,
    ACTIONS(31), 1,
      anon_sym_loop,
    ACTIONS(33), 1,
      anon_sym_fn,
    ACTIONS(35), 1,
      anon_sym_try,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(195), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(77), 18,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_list_literal,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
      sym_index_expr,
      sym_call_expr,
      sym_assign_expr,
      sym_cast_expr,
      sym_if_expr,
      sym_for_expr,
      sym_while_expr,
      sym_loop_expr,
      sym_fn_expr,
      sym_try_expr,
      sym_paren_expr,
  [1577] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_while,
    ACTIONS(31), 1,
      anon_sym_loop,
    ACTIONS(33), 1,
      anon_sym_fn,
    ACTIONS(35), 1,
      anon_sym_try,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(21), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(199), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(43), 18,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_list_literal,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
      sym_index_expr,
      sym_call_expr,
      sym_assign_expr,
      sym_cast_expr,
      sym_if_expr,
      sym_for_expr,
      sym_while_expr,
      sym_loop_expr,
      sym_fn_expr,
      sym_try_expr,
      sym_paren_expr,
  [1647] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_DOT,
    ACTIONS(203), 24,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DOT_DOT,
      anon_sym_catch,
  [1689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_DOT,
    ACTIONS(207), 24,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DOT_DOT,
      anon_sym_catch,
  [1731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_DOT,
    ACTIONS(211), 24,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DOT_DOT,
      anon_sym_catch,
  [1773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_DOT,
    ACTIONS(215), 24,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_DOT_DOT,
      anon_sym_catch,
  [1815] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_EQ,
    ACTIONS(223), 1,
      anon_sym_as,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(229), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(231), 1,
      anon_sym_AMP_AMP,
    ACTIONS(241), 1,
      anon_sym_STAR_STAR,
    ACTIONS(243), 1,
      anon_sym_DOT,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(227), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(233), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(235), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(237), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(239), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(247), 6,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
    ACTIONS(219), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [1884] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_EQ_GT,
    ACTIONS(251), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_DOT,
    ACTIONS(249), 22,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [1927] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_as,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_STAR_STAR,
    ACTIONS(243), 1,
      anon_sym_DOT,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(227), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(239), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(257), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(255), 19,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [1984] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_as,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_STAR_STAR,
    ACTIONS(243), 1,
      anon_sym_DOT,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_EQ,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(227), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(235), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(237), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(239), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(255), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [2045] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_as,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_STAR_STAR,
    ACTIONS(243), 1,
      anon_sym_DOT,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_EQ,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(227), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(233), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(235), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(237), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(239), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(255), 15,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [2108] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_as,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(231), 1,
      anon_sym_AMP_AMP,
    ACTIONS(241), 1,
      anon_sym_STAR_STAR,
    ACTIONS(243), 1,
      anon_sym_DOT,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_EQ,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(227), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(233), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(235), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(237), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(239), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(255), 14,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [2173] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_as,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_STAR_STAR,
    ACTIONS(243), 1,
      anon_sym_DOT,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(257), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(255), 19,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [2226] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_as,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_STAR_STAR,
    ACTIONS(243), 1,
      anon_sym_DOT,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(239), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(257), 5,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(255), 19,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [2281] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_STAR_STAR,
    ACTIONS(243), 1,
      anon_sym_DOT,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(257), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(255), 20,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [2332] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_EQ,
    ACTIONS(223), 1,
      anon_sym_as,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(229), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(231), 1,
      anon_sym_AMP_AMP,
    ACTIONS(241), 1,
      anon_sym_STAR_STAR,
    ACTIONS(243), 1,
      anon_sym_DOT,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(227), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(233), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(235), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(237), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(239), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(247), 6,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
    ACTIONS(259), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [2401] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_else,
    ACTIONS(263), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_DOT,
    ACTIONS(261), 22,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [2444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_DOT,
    ACTIONS(267), 23,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_EQ_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [2485] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(243), 1,
      anon_sym_DOT,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(273), 9,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
    ACTIONS(271), 20,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [2534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_DOT,
    ACTIONS(275), 23,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_EQ_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [2575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_DOT,
    ACTIONS(279), 22,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [2615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_DOT,
    ACTIONS(283), 22,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [2655] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_DOT,
    ACTIONS(287), 22,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [2695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_DOT,
    ACTIONS(291), 22,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [2735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_DOT,
    ACTIONS(295), 22,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [2775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_DOT,
    ACTIONS(299), 22,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [2815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_DOT,
    ACTIONS(303), 22,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [2855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_DOT,
    ACTIONS(307), 22,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [2895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_DOT,
    ACTIONS(311), 22,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [2935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_DOT,
    ACTIONS(315), 22,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [2975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_DOT,
    ACTIONS(319), 22,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [3015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_DOT,
    ACTIONS(323), 22,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [3055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_DOT,
    ACTIONS(327), 22,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [3095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_DOT,
    ACTIONS(331), 22,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [3135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_DOT,
    ACTIONS(335), 22,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [3175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_DOT,
    ACTIONS(339), 22,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [3215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_DOT,
    ACTIONS(343), 22,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [3255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_DOT,
    ACTIONS(347), 22,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [3295] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_EQ,
    ACTIONS(223), 1,
      anon_sym_as,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(229), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(231), 1,
      anon_sym_AMP_AMP,
    ACTIONS(241), 1,
      anon_sym_STAR_STAR,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_DOT,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(227), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(233), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(235), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(237), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(239), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(351), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    ACTIONS(247), 6,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
  [3360] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_EQ,
    ACTIONS(223), 1,
      anon_sym_as,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(229), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(231), 1,
      anon_sym_AMP_AMP,
    ACTIONS(241), 1,
      anon_sym_STAR_STAR,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(357), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      sym_arguments,
    STATE(97), 1,
      aux_sym_list_literal_repeat1,
    ACTIONS(227), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(233), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(235), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(237), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(239), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(247), 6,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
  [3429] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_EQ,
    ACTIONS(223), 1,
      anon_sym_as,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(229), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(231), 1,
      anon_sym_AMP_AMP,
    ACTIONS(241), 1,
      anon_sym_STAR_STAR,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      sym_arguments,
    STATE(91), 1,
      aux_sym_list_literal_repeat1,
    ACTIONS(227), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(233), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(235), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(237), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(239), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(247), 6,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
  [3498] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_EQ,
    ACTIONS(223), 1,
      anon_sym_as,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(229), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(231), 1,
      anon_sym_AMP_AMP,
    ACTIONS(241), 1,
      anon_sym_STAR_STAR,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_arguments,
    STATE(60), 1,
      sym_block,
    ACTIONS(227), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(233), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(235), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(237), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(239), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(247), 6,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
  [3564] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_EQ,
    ACTIONS(223), 1,
      anon_sym_as,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(229), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(231), 1,
      anon_sym_AMP_AMP,
    ACTIONS(241), 1,
      anon_sym_STAR_STAR,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_DOT,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(227), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(233), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(235), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(237), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(363), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(239), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(247), 6,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
  [3628] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_EQ,
    ACTIONS(223), 1,
      anon_sym_as,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(229), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(231), 1,
      anon_sym_AMP_AMP,
    ACTIONS(241), 1,
      anon_sym_STAR_STAR,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_DOT,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(227), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(233), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(235), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(237), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(365), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(239), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(247), 6,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
  [3692] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_EQ,
    ACTIONS(223), 1,
      anon_sym_as,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(229), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(231), 1,
      anon_sym_AMP_AMP,
    ACTIONS(241), 1,
      anon_sym_STAR_STAR,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_DOT,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(227), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(233), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(235), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(237), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(367), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(239), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(247), 6,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
  [3756] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_EQ,
    ACTIONS(223), 1,
      anon_sym_as,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(229), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(231), 1,
      anon_sym_AMP_AMP,
    ACTIONS(241), 1,
      anon_sym_STAR_STAR,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_arguments,
    STATE(61), 1,
      sym_block,
    ACTIONS(227), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(233), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(235), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(237), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(239), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(247), 6,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
  [3822] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_EQ,
    ACTIONS(223), 1,
      anon_sym_as,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(229), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(231), 1,
      anon_sym_AMP_AMP,
    ACTIONS(241), 1,
      anon_sym_STAR_STAR,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_block,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(227), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(233), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(235), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(237), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(239), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(247), 6,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
  [3888] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_EQ,
    ACTIONS(223), 1,
      anon_sym_as,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(229), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(231), 1,
      anon_sym_AMP_AMP,
    ACTIONS(241), 1,
      anon_sym_STAR_STAR,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_DOT,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(227), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(233), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(235), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(237), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(369), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(239), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(247), 6,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
  [3952] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_EQ,
    ACTIONS(223), 1,
      anon_sym_as,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(229), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(231), 1,
      anon_sym_AMP_AMP,
    ACTIONS(241), 1,
      anon_sym_STAR_STAR,
    ACTIONS(243), 1,
      anon_sym_DOT,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      anon_sym_DOT_DOT,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(227), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(233), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(235), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(237), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(239), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(247), 6,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
  [4015] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_EQ,
    ACTIONS(223), 1,
      anon_sym_as,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(229), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(231), 1,
      anon_sym_AMP_AMP,
    ACTIONS(241), 1,
      anon_sym_STAR_STAR,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(373), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(227), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(233), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(235), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(237), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(239), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(247), 6,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
  [4078] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_EQ,
    ACTIONS(223), 1,
      anon_sym_as,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(229), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(231), 1,
      anon_sym_AMP_AMP,
    ACTIONS(241), 1,
      anon_sym_STAR_STAR,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(227), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(233), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(235), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(237), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(239), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(247), 6,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
  [4141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(377), 14,
      anon_sym_let,
      anon_sym_import,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_null,
      anon_sym_if,
      anon_sym_for,
      anon_sym_while,
      anon_sym_loop,
      anon_sym_fn,
      anon_sym_try,
      sym_bool,
      sym_ident,
  [4172] = 4,
    ACTIONS(379), 1,
      anon_sym_SQUOTE,
    ACTIONS(383), 1,
      sym_comment,
    STATE(83), 1,
      aux_sym_string_repeat2,
    ACTIONS(381), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [4186] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_list_literal_repeat1,
    ACTIONS(351), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [4200] = 4,
    ACTIONS(383), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_DQUOTE,
    STATE(82), 1,
      aux_sym_string_repeat1,
    ACTIONS(390), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [4214] = 4,
    ACTIONS(383), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_SQUOTE,
    STATE(83), 1,
      aux_sym_string_repeat2,
    ACTIONS(395), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [4228] = 4,
    ACTIONS(383), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_DQUOTE,
    STATE(86), 1,
      aux_sym_string_repeat1,
    ACTIONS(400), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [4242] = 4,
    ACTIONS(383), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_SQUOTE,
    STATE(80), 1,
      aux_sym_string_repeat2,
    ACTIONS(402), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [4256] = 4,
    ACTIONS(379), 1,
      anon_sym_DQUOTE,
    ACTIONS(383), 1,
      sym_comment,
    STATE(82), 1,
      aux_sym_string_repeat1,
    ACTIONS(404), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [4270] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    ACTIONS(406), 1,
      anon_sym_if,
    STATE(57), 2,
      sym_block,
      sym_if_expr,
  [4284] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      sym_ident,
    STATE(99), 1,
      sym_parameters,
  [4297] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      aux_sym_parameters_repeat1,
  [4310] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_SEMI,
    ACTIONS(420), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      aux_sym_block_repeat1,
  [4323] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_list_literal_repeat1,
  [4336] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_SEMI,
    ACTIONS(426), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      aux_sym_block_repeat1,
  [4349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_EQ,
    ACTIONS(428), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4360] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      aux_sym_parameters_repeat1,
  [4373] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    ACTIONS(436), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      aux_sym_block_repeat1,
  [4386] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      aux_sym_parameters_repeat1,
  [4399] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(440), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      aux_sym_list_literal_repeat1,
  [4412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      sym_block,
  [4422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_block,
  [4432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_as,
    ACTIONS(448), 1,
      anon_sym_from,
  [4458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_block,
  [4476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_block,
  [4494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    ACTIONS(454), 1,
      sym_ident,
  [4504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_block,
  [4514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    STATE(106), 1,
      sym_parameters,
  [4524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      ts_builtin_sym_end,
  [4539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      sym_ident,
  [4546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_from,
  [4553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_catch,
  [4560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      sym_ident,
  [4567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_LBRACE,
  [4574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_SEMI,
  [4581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      sym_type,
  [4588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_in,
  [4595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
  [4602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      sym_ident,
  [4609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym_ident,
  [4616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
  [4623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      sym_ident,
  [4630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      sym_ident,
  [4637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_ident,
  [4644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      sym_ident,
  [4651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      sym_ident,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 93,
  [SMALL_STATE(9)] = 167,
  [SMALL_STATE(10)] = 241,
  [SMALL_STATE(11)] = 314,
  [SMALL_STATE(12)] = 387,
  [SMALL_STATE(13)] = 457,
  [SMALL_STATE(14)] = 527,
  [SMALL_STATE(15)] = 597,
  [SMALL_STATE(16)] = 667,
  [SMALL_STATE(17)] = 737,
  [SMALL_STATE(18)] = 807,
  [SMALL_STATE(19)] = 877,
  [SMALL_STATE(20)] = 947,
  [SMALL_STATE(21)] = 1017,
  [SMALL_STATE(22)] = 1087,
  [SMALL_STATE(23)] = 1157,
  [SMALL_STATE(24)] = 1227,
  [SMALL_STATE(25)] = 1297,
  [SMALL_STATE(26)] = 1367,
  [SMALL_STATE(27)] = 1437,
  [SMALL_STATE(28)] = 1507,
  [SMALL_STATE(29)] = 1577,
  [SMALL_STATE(30)] = 1647,
  [SMALL_STATE(31)] = 1689,
  [SMALL_STATE(32)] = 1731,
  [SMALL_STATE(33)] = 1773,
  [SMALL_STATE(34)] = 1815,
  [SMALL_STATE(35)] = 1884,
  [SMALL_STATE(36)] = 1927,
  [SMALL_STATE(37)] = 1984,
  [SMALL_STATE(38)] = 2045,
  [SMALL_STATE(39)] = 2108,
  [SMALL_STATE(40)] = 2173,
  [SMALL_STATE(41)] = 2226,
  [SMALL_STATE(42)] = 2281,
  [SMALL_STATE(43)] = 2332,
  [SMALL_STATE(44)] = 2401,
  [SMALL_STATE(45)] = 2444,
  [SMALL_STATE(46)] = 2485,
  [SMALL_STATE(47)] = 2534,
  [SMALL_STATE(48)] = 2575,
  [SMALL_STATE(49)] = 2615,
  [SMALL_STATE(50)] = 2655,
  [SMALL_STATE(51)] = 2695,
  [SMALL_STATE(52)] = 2735,
  [SMALL_STATE(53)] = 2775,
  [SMALL_STATE(54)] = 2815,
  [SMALL_STATE(55)] = 2855,
  [SMALL_STATE(56)] = 2895,
  [SMALL_STATE(57)] = 2935,
  [SMALL_STATE(58)] = 2975,
  [SMALL_STATE(59)] = 3015,
  [SMALL_STATE(60)] = 3055,
  [SMALL_STATE(61)] = 3095,
  [SMALL_STATE(62)] = 3135,
  [SMALL_STATE(63)] = 3175,
  [SMALL_STATE(64)] = 3215,
  [SMALL_STATE(65)] = 3255,
  [SMALL_STATE(66)] = 3295,
  [SMALL_STATE(67)] = 3360,
  [SMALL_STATE(68)] = 3429,
  [SMALL_STATE(69)] = 3498,
  [SMALL_STATE(70)] = 3564,
  [SMALL_STATE(71)] = 3628,
  [SMALL_STATE(72)] = 3692,
  [SMALL_STATE(73)] = 3756,
  [SMALL_STATE(74)] = 3822,
  [SMALL_STATE(75)] = 3888,
  [SMALL_STATE(76)] = 3952,
  [SMALL_STATE(77)] = 4015,
  [SMALL_STATE(78)] = 4078,
  [SMALL_STATE(79)] = 4141,
  [SMALL_STATE(80)] = 4172,
  [SMALL_STATE(81)] = 4186,
  [SMALL_STATE(82)] = 4200,
  [SMALL_STATE(83)] = 4214,
  [SMALL_STATE(84)] = 4228,
  [SMALL_STATE(85)] = 4242,
  [SMALL_STATE(86)] = 4256,
  [SMALL_STATE(87)] = 4270,
  [SMALL_STATE(88)] = 4284,
  [SMALL_STATE(89)] = 4297,
  [SMALL_STATE(90)] = 4310,
  [SMALL_STATE(91)] = 4323,
  [SMALL_STATE(92)] = 4336,
  [SMALL_STATE(93)] = 4349,
  [SMALL_STATE(94)] = 4360,
  [SMALL_STATE(95)] = 4373,
  [SMALL_STATE(96)] = 4386,
  [SMALL_STATE(97)] = 4399,
  [SMALL_STATE(98)] = 4412,
  [SMALL_STATE(99)] = 4422,
  [SMALL_STATE(100)] = 4432,
  [SMALL_STATE(101)] = 4440,
  [SMALL_STATE(102)] = 4448,
  [SMALL_STATE(103)] = 4458,
  [SMALL_STATE(104)] = 4466,
  [SMALL_STATE(105)] = 4476,
  [SMALL_STATE(106)] = 4484,
  [SMALL_STATE(107)] = 4494,
  [SMALL_STATE(108)] = 4504,
  [SMALL_STATE(109)] = 4514,
  [SMALL_STATE(110)] = 4524,
  [SMALL_STATE(111)] = 4532,
  [SMALL_STATE(112)] = 4539,
  [SMALL_STATE(113)] = 4546,
  [SMALL_STATE(114)] = 4553,
  [SMALL_STATE(115)] = 4560,
  [SMALL_STATE(116)] = 4567,
  [SMALL_STATE(117)] = 4574,
  [SMALL_STATE(118)] = 4581,
  [SMALL_STATE(119)] = 4588,
  [SMALL_STATE(120)] = 4595,
  [SMALL_STATE(121)] = 4602,
  [SMALL_STATE(122)] = 4609,
  [SMALL_STATE(123)] = 4616,
  [SMALL_STATE(124)] = 4623,
  [SMALL_STATE(125)] = 4630,
  [SMALL_STATE(126)] = 4637,
  [SMALL_STATE(127)] = 4644,
  [SMALL_STATE(128)] = 4651,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(115),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(128),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(101),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(70),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(126),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(104),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(88),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(98),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(70),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(84),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(85),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_stmt, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_stmt, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 5),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair_expr, 3, .production_id = 9),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_expr, 3, .production_id = 6),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix_expr, 3, .production_id = 6),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_expr, 3, .production_id = 6),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_expr, 2, .production_id = 3),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix_expr, 2, .production_id = 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expr, 3, .production_id = 7),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast_expr, 3, .production_id = 7),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expr, 3, .production_id = 8),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expr, 3, .production_id = 8),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 3),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_expr, 4, .production_id = 12),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_expr, 4, .production_id = 12),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_expr, 4, .production_id = 13),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_expr, 4, .production_id = 13),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_expr, 3, .production_id = 5),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_expr, 3, .production_id = 5),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 2, .production_id = 4),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 2, .production_id = 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 5),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 5),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 4),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 4),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_expr, 5),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_expr, 5),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expr, 7),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expr, 7),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_expr, 3),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_expr, 3),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_expr, 2),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_expr, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expr, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expr, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_literal_repeat1, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_stmt, 2, .production_id = 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_stmt, 2, .production_id = 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 4, .production_id = 10),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_literal_repeat1, 2), SHIFT_REPEAT(26),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(82),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(83),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(124),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 2, .production_id = 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_stmt, 4, .production_id = 11),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_stmt, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_stmt, 6, .production_id = 14),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [456] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hms(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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

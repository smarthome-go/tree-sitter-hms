#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 120
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 14

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
  anon_sym_PLUS = 12,
  anon_sym_DASH = 13,
  anon_sym_BANG = 14,
  anon_sym_PIPE_PIPE = 15,
  anon_sym_AMP_AMP = 16,
  anon_sym_EQ_EQ = 17,
  anon_sym_BANG_EQ = 18,
  anon_sym_LT = 19,
  anon_sym_LT_EQ = 20,
  anon_sym_GT = 21,
  anon_sym_GT_EQ = 22,
  anon_sym_STAR = 23,
  anon_sym_SLASH = 24,
  anon_sym_PERCENT = 25,
  anon_sym_STAR_STAR = 26,
  anon_sym_DOT = 27,
  anon_sym_LPAREN = 28,
  anon_sym_COMMA = 29,
  anon_sym_RPAREN = 30,
  anon_sym_STAR_EQ = 31,
  anon_sym_SLASH_EQ = 32,
  anon_sym_PERCENT_EQ = 33,
  anon_sym_PLUS_EQ = 34,
  anon_sym_DASH_EQ = 35,
  anon_sym_STAR_STAR_EQ = 36,
  anon_sym_LBRACE = 37,
  anon_sym_RBRACE = 38,
  anon_sym_if = 39,
  anon_sym_else = 40,
  anon_sym_for = 41,
  anon_sym_in = 42,
  anon_sym_DOT_DOT = 43,
  anon_sym_while = 44,
  anon_sym_loop = 45,
  anon_sym_fn = 46,
  anon_sym_try = 47,
  anon_sym_catch = 48,
  sym_number = 49,
  sym_bool = 50,
  sym_type = 51,
  sym_ident = 52,
  anon_sym_DQUOTE = 53,
  anon_sym_SQUOTE = 54,
  sym_unescaped_double_string_fragment = 55,
  sym_unescaped_single_string_fragment = 56,
  sym_escape_sequence = 57,
  sym_comment = 58,
  sym_program = 59,
  sym__statement = 60,
  sym_let_stmt = 61,
  sym_import_stmt = 62,
  sym_break_stmt = 63,
  sym_continue_stmt = 64,
  sym_return_stmt = 65,
  sym__expression = 66,
  sym__atom = 67,
  sym_pair_expr = 68,
  sym_prefix_expr = 69,
  sym_infix_expr = 70,
  sym_member_expr = 71,
  sym_call_expr = 72,
  sym_arguments = 73,
  sym_assign_expr = 74,
  sym_cast_expr = 75,
  sym_block = 76,
  sym_if_expr = 77,
  sym_for_expr = 78,
  sym_while_expr = 79,
  sym_loop_expr = 80,
  sym_fn_expr = 81,
  sym_parameters = 82,
  sym_try_expr = 83,
  sym_paren_expr = 84,
  sym_string = 85,
  aux_sym_program_repeat1 = 86,
  aux_sym_arguments_repeat1 = 87,
  aux_sym_block_repeat1 = 88,
  aux_sym_parameters_repeat1 = 89,
  aux_sym_string_repeat1 = 90,
  aux_sym_string_repeat2 = 91,
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
  [anon_sym_COMMA] = ",",
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
  [sym_prefix_expr] = "prefix_expr",
  [sym_infix_expr] = "infix_expr",
  [sym_member_expr] = "member_expr",
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
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
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
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym_prefix_expr] = sym_prefix_expr,
  [sym_infix_expr] = sym_infix_expr,
  [sym_member_expr] = sym_member_expr,
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
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
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
  [anon_sym_COMMA] = {
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
  [aux_sym_arguments_repeat1] = {
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
  field_field = 4,
  field_from = 5,
  field_function = 6,
  field_key = 7,
  field_left = 8,
  field_name = 9,
  field_object = 10,
  field_operator = 11,
  field_parameters = 12,
  field_right = 13,
  field_type = 14,
  field_value = 15,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_arguments] = "arguments",
  [field_as] = "as",
  [field_field] = "field",
  [field_from] = "from",
  [field_function] = "function",
  [field_key] = "key",
  [field_left] = "left",
  [field_name] = "name",
  [field_object] = "object",
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
  [13] = {.index = 22, .length = 3},
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
      if (lookahead == '!') ADVANCE(104);
      if (lookahead == '"') ADVANCE(194);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '%') ADVANCE(115);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(195);
      if (lookahead == '(') ADVANCE(118);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(113);
      if (lookahead == '+') ADVANCE(100);
      if (lookahead == ',') ADVANCE(119);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == ';') ADVANCE(82);
      if (lookahead == '<') ADVANCE(109);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(3);
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
      if (lookahead == '{') ADVANCE(127);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '}') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 1:
      if (lookahead == '&') ADVANCE(106);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(108);
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
          lookahead == 't') ADVANCE(202);
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
      if (lookahead == 'n') ADVANCE(140);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(136);
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
      if (lookahead == 'f') ADVANCE(129);
      if (lookahead == 'm') ADVANCE(42);
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 17:
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(147);
      END_STATE();
    case 19:
      if (lookahead == 'h') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'h') ADVANCE(144);
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
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'm') ADVANCE(149);
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
      if (lookahead == 'p') ADVANCE(138);
      END_STATE();
    case 42:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(149);
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
      if (lookahead == 'y') ADVANCE(142);
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
      if (lookahead == '|') ADVANCE(105);
      END_STATE();
    case 63:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (lookahead == '!') ADVANCE(103);
      if (lookahead == '"') ADVANCE(194);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '\'') ADVANCE(195);
      if (lookahead == '(') ADVANCE(118);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '+') ADVANCE(99);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == ';') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'l') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(189);
      if (lookahead == 'o') ADVANCE(160);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == 'w') ADVANCE(162);
      if (lookahead == '}') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 64:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (lookahead == '!') ADVANCE(2);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '%') ADVANCE(115);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '(') ADVANCE(118);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(113);
      if (lookahead == '+') ADVANCE(100);
      if (lookahead == ',') ADVANCE(119);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == ';') ADVANCE(82);
      if (lookahead == '<') ADVANCE(109);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(111);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'b') ADVANCE(35);
      if (lookahead == 'c') ADVANCE(5);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == '{') ADVANCE(127);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '}') ADVANCE(128);
      END_STATE();
    case 65:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '\'') ADVANCE(195);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 66:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(197);
      if (lookahead == '"') ADVANCE(194);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 67:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '(') ADVANCE(118);
      if (lookahead == ')') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(202);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(68);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
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
      if (lookahead == '!') ADVANCE(104);
      if (lookahead == '"') ADVANCE(194);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '%') ADVANCE(115);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(195);
      if (lookahead == '(') ADVANCE(118);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(113);
      if (lookahead == '+') ADVANCE(100);
      if (lookahead == ',') ADVANCE(119);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == ';') ADVANCE(82);
      if (lookahead == '<') ADVANCE(109);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(111);
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
      if (lookahead == '{') ADVANCE(127);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '}') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 80:
      if (eof) ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(80)
      if (lookahead == '!') ADVANCE(103);
      if (lookahead == '"') ADVANCE(194);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '\'') ADVANCE(195);
      if (lookahead == '(') ADVANCE(118);
      if (lookahead == '+') ADVANCE(99);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == 'b') ADVANCE(181);
      if (lookahead == 'c') ADVANCE(173);
      if (lookahead == 'f') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == 'l') ADVANCE(152);
      if (lookahead == 'n') ADVANCE(189);
      if (lookahead == 'o') ADVANCE(160);
      if (lookahead == 'r') ADVANCE(157);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == 'w') ADVANCE(162);
      if (lookahead == '}') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(107);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_continue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(125);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(108);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == '=') ADVANCE(121);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(122);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(123);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      if (lookahead == '=') ADVANCE(126);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(135);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_EQ);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_loop);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_loop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_try);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_try);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_catch);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_bool);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_type);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == 'o') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == 'n') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(153);
      if (lookahead == 'y') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(197);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(203);
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
  [28] = {.lex_state = 64},
  [29] = {.lex_state = 64},
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
  [71] = {.lex_state = 80},
  [72] = {.lex_state = 65},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 66},
  [75] = {.lex_state = 65},
  [76] = {.lex_state = 66},
  [77] = {.lex_state = 65},
  [78] = {.lex_state = 66},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 67},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 67},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 67},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 67},
  [106] = {.lex_state = 67},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 67},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 64},
  [111] = {.lex_state = 67},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 67},
  [115] = {.lex_state = 67},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 67},
  [119] = {.lex_state = 67},
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
    [anon_sym_COMMA] = ACTIONS(1),
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
    [sym_program] = STATE(117),
    [sym__statement] = STATE(112),
    [sym_let_stmt] = STATE(112),
    [sym_import_stmt] = STATE(112),
    [sym_break_stmt] = STATE(112),
    [sym_continue_stmt] = STATE(112),
    [sym_return_stmt] = STATE(112),
    [sym__expression] = STATE(63),
    [sym__atom] = STATE(63),
    [sym_pair_expr] = STATE(63),
    [sym_prefix_expr] = STATE(63),
    [sym_infix_expr] = STATE(63),
    [sym_member_expr] = STATE(63),
    [sym_call_expr] = STATE(63),
    [sym_assign_expr] = STATE(63),
    [sym_cast_expr] = STATE(63),
    [sym_if_expr] = STATE(63),
    [sym_for_expr] = STATE(63),
    [sym_while_expr] = STATE(63),
    [sym_loop_expr] = STATE(63),
    [sym_fn_expr] = STATE(63),
    [sym_try_expr] = STATE(63),
    [sym_paren_expr] = STATE(63),
    [sym_string] = STATE(35),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_null] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(25),
    [anon_sym_while] = ACTIONS(27),
    [anon_sym_loop] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_try] = ACTIONS(33),
    [sym_number] = ACTIONS(35),
    [sym_bool] = ACTIONS(17),
    [sym_ident] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__statement] = STATE(112),
    [sym_let_stmt] = STATE(112),
    [sym_import_stmt] = STATE(112),
    [sym_break_stmt] = STATE(112),
    [sym_continue_stmt] = STATE(112),
    [sym_return_stmt] = STATE(112),
    [sym__expression] = STATE(63),
    [sym__atom] = STATE(63),
    [sym_pair_expr] = STATE(63),
    [sym_prefix_expr] = STATE(63),
    [sym_infix_expr] = STATE(63),
    [sym_member_expr] = STATE(63),
    [sym_call_expr] = STATE(63),
    [sym_assign_expr] = STATE(63),
    [sym_cast_expr] = STATE(63),
    [sym_if_expr] = STATE(63),
    [sym_for_expr] = STATE(63),
    [sym_while_expr] = STATE(63),
    [sym_loop_expr] = STATE(63),
    [sym_fn_expr] = STATE(63),
    [sym_try_expr] = STATE(63),
    [sym_paren_expr] = STATE(63),
    [sym_string] = STATE(35),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_let] = ACTIONS(43),
    [anon_sym_import] = ACTIONS(46),
    [anon_sym_break] = ACTIONS(49),
    [anon_sym_continue] = ACTIONS(52),
    [anon_sym_return] = ACTIONS(55),
    [anon_sym_null] = ACTIONS(58),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_BANG] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_for] = ACTIONS(70),
    [anon_sym_while] = ACTIONS(73),
    [anon_sym_loop] = ACTIONS(76),
    [anon_sym_fn] = ACTIONS(79),
    [anon_sym_try] = ACTIONS(82),
    [sym_number] = ACTIONS(85),
    [sym_bool] = ACTIONS(58),
    [sym_ident] = ACTIONS(58),
    [anon_sym_DQUOTE] = ACTIONS(88),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__statement] = STATE(112),
    [sym_let_stmt] = STATE(112),
    [sym_import_stmt] = STATE(112),
    [sym_break_stmt] = STATE(112),
    [sym_continue_stmt] = STATE(112),
    [sym_return_stmt] = STATE(112),
    [sym__expression] = STATE(63),
    [sym__atom] = STATE(63),
    [sym_pair_expr] = STATE(63),
    [sym_prefix_expr] = STATE(63),
    [sym_infix_expr] = STATE(63),
    [sym_member_expr] = STATE(63),
    [sym_call_expr] = STATE(63),
    [sym_assign_expr] = STATE(63),
    [sym_cast_expr] = STATE(63),
    [sym_if_expr] = STATE(63),
    [sym_for_expr] = STATE(63),
    [sym_while_expr] = STATE(63),
    [sym_loop_expr] = STATE(63),
    [sym_fn_expr] = STATE(63),
    [sym_try_expr] = STATE(63),
    [sym_paren_expr] = STATE(63),
    [sym_string] = STATE(35),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(94),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_null] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(25),
    [anon_sym_while] = ACTIONS(27),
    [anon_sym_loop] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_try] = ACTIONS(33),
    [sym_number] = ACTIONS(35),
    [sym_bool] = ACTIONS(17),
    [sym_ident] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
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
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_loop,
    ACTIONS(31), 1,
      anon_sym_fn,
    ACTIONS(33), 1,
      anon_sym_try,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym_string,
    ACTIONS(17), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    ACTIONS(19), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(101), 6,
      sym__statement,
      sym_let_stmt,
      sym_import_stmt,
      sym_break_stmt,
      sym_continue_stmt,
      sym_return_stmt,
    STATE(63), 16,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
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
  [91] = 22,
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
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_loop,
    ACTIONS(31), 1,
      anon_sym_fn,
    ACTIONS(33), 1,
      anon_sym_try,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym_string,
    ACTIONS(17), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    ACTIONS(19), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(85), 6,
      sym__statement,
      sym_let_stmt,
      sym_import_stmt,
      sym_break_stmt,
      sym_continue_stmt,
      sym_return_stmt,
    STATE(63), 16,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
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
  [182] = 22,
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
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_loop,
    ACTIONS(31), 1,
      anon_sym_fn,
    ACTIONS(33), 1,
      anon_sym_try,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym_string,
    ACTIONS(17), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    ACTIONS(19), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(101), 6,
      sym__statement,
      sym_let_stmt,
      sym_import_stmt,
      sym_break_stmt,
      sym_continue_stmt,
      sym_return_stmt,
    STATE(63), 16,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
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
  [273] = 21,
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
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_loop,
    ACTIONS(31), 1,
      anon_sym_fn,
    ACTIONS(33), 1,
      anon_sym_try,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    STATE(35), 1,
      sym_string,
    ACTIONS(17), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    ACTIONS(19), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(101), 6,
      sym__statement,
      sym_let_stmt,
      sym_import_stmt,
      sym_break_stmt,
      sym_continue_stmt,
      sym_return_stmt,
    STATE(63), 16,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
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
  [361] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_loop,
    ACTIONS(31), 1,
      anon_sym_fn,
    ACTIONS(33), 1,
      anon_sym_try,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(106), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(102), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(19), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(104), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(67), 16,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
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
  [430] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_loop,
    ACTIONS(31), 1,
      anon_sym_fn,
    ACTIONS(33), 1,
      anon_sym_try,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(112), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(108), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(19), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(110), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(66), 16,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
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
  [499] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_loop,
    ACTIONS(31), 1,
      anon_sym_fn,
    ACTIONS(33), 1,
      anon_sym_try,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    ACTIONS(118), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(19), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(114), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(60), 16,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
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
  [567] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_loop,
    ACTIONS(31), 1,
      anon_sym_fn,
    ACTIONS(33), 1,
      anon_sym_try,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(19), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(120), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(70), 16,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
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
  [632] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_loop,
    ACTIONS(31), 1,
      anon_sym_fn,
    ACTIONS(33), 1,
      anon_sym_try,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(19), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(124), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(61), 16,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
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
  [697] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_loop,
    ACTIONS(31), 1,
      anon_sym_fn,
    ACTIONS(33), 1,
      anon_sym_try,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(130), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(19), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(128), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(68), 16,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
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
  [762] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_loop,
    ACTIONS(31), 1,
      anon_sym_fn,
    ACTIONS(33), 1,
      anon_sym_try,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(19), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(132), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(64), 16,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
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
  [827] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_loop,
    ACTIONS(31), 1,
      anon_sym_fn,
    ACTIONS(33), 1,
      anon_sym_try,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(138), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(19), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(136), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(69), 16,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
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
  [892] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_loop,
    ACTIONS(31), 1,
      anon_sym_fn,
    ACTIONS(33), 1,
      anon_sym_try,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(19), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(140), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(37), 16,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
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
  [957] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_loop,
    ACTIONS(31), 1,
      anon_sym_fn,
    ACTIONS(33), 1,
      anon_sym_try,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(19), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(144), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(34), 16,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
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
  [1022] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_loop,
    ACTIONS(31), 1,
      anon_sym_fn,
    ACTIONS(33), 1,
      anon_sym_try,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(150), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(19), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(148), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(44), 16,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
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
  [1087] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_loop,
    ACTIONS(31), 1,
      anon_sym_fn,
    ACTIONS(33), 1,
      anon_sym_try,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(154), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(19), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(152), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(42), 16,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
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
  [1152] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_loop,
    ACTIONS(31), 1,
      anon_sym_fn,
    ACTIONS(33), 1,
      anon_sym_try,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(19), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(156), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(62), 16,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
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
  [1217] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_loop,
    ACTIONS(31), 1,
      anon_sym_fn,
    ACTIONS(33), 1,
      anon_sym_try,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(162), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(19), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(160), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(65), 16,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
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
  [1282] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_loop,
    ACTIONS(31), 1,
      anon_sym_fn,
    ACTIONS(33), 1,
      anon_sym_try,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(19), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(164), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(36), 16,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
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
  [1347] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_loop,
    ACTIONS(31), 1,
      anon_sym_fn,
    ACTIONS(33), 1,
      anon_sym_try,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(170), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(19), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(168), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(33), 16,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
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
  [1412] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_loop,
    ACTIONS(31), 1,
      anon_sym_fn,
    ACTIONS(33), 1,
      anon_sym_try,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(174), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(19), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(172), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(38), 16,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
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
  [1477] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_loop,
    ACTIONS(31), 1,
      anon_sym_fn,
    ACTIONS(33), 1,
      anon_sym_try,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(178), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(19), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(176), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(41), 16,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
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
  [1542] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_loop,
    ACTIONS(31), 1,
      anon_sym_fn,
    ACTIONS(33), 1,
      anon_sym_try,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(182), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(19), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(180), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(39), 16,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
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
  [1607] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_loop,
    ACTIONS(31), 1,
      anon_sym_fn,
    ACTIONS(33), 1,
      anon_sym_try,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      sym_number,
    STATE(35), 1,
      sym_string,
    ACTIONS(19), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(184), 3,
      anon_sym_null,
      sym_bool,
      sym_ident,
    STATE(40), 16,
      sym__expression,
      sym__atom,
      sym_pair_expr,
      sym_prefix_expr,
      sym_infix_expr,
      sym_member_expr,
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
  [1672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 10,
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
    ACTIONS(188), 22,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
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
  [1712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 10,
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
    ACTIONS(192), 22,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
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
  [1752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 10,
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
    ACTIONS(196), 22,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
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
  [1792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 10,
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
    ACTIONS(200), 22,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
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
  [1832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_else,
    ACTIONS(206), 10,
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
    ACTIONS(204), 20,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
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
  [1873] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_EQ,
    ACTIONS(214), 1,
      anon_sym_as,
    ACTIONS(218), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(220), 1,
      anon_sym_AMP_AMP,
    ACTIONS(230), 1,
      anon_sym_STAR_STAR,
    ACTIONS(232), 1,
      anon_sym_DOT,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(216), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(222), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(224), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(226), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(228), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(210), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
    ACTIONS(236), 6,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
  [1938] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_as,
    ACTIONS(230), 1,
      anon_sym_STAR_STAR,
    ACTIONS(232), 1,
      anon_sym_DOT,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(216), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(228), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(240), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(238), 18,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
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
  [1991] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_EQ_GT,
    ACTIONS(244), 10,
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
    ACTIONS(242), 20,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
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
  [2032] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_EQ,
    ACTIONS(214), 1,
      anon_sym_as,
    ACTIONS(218), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(220), 1,
      anon_sym_AMP_AMP,
    ACTIONS(230), 1,
      anon_sym_STAR_STAR,
    ACTIONS(232), 1,
      anon_sym_DOT,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(216), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(222), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(224), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(226), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(228), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(236), 6,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
    ACTIONS(248), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [2097] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_as,
    ACTIONS(230), 1,
      anon_sym_STAR_STAR,
    ACTIONS(232), 1,
      anon_sym_DOT,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_EQ,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(216), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(224), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(226), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(228), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(238), 16,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
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
  [2154] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_as,
    ACTIONS(230), 1,
      anon_sym_STAR_STAR,
    ACTIONS(232), 1,
      anon_sym_DOT,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_EQ,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(216), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(222), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(224), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(226), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(228), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(238), 14,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_COMMA,
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
  [2213] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_as,
    ACTIONS(220), 1,
      anon_sym_AMP_AMP,
    ACTIONS(230), 1,
      anon_sym_STAR_STAR,
    ACTIONS(232), 1,
      anon_sym_DOT,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_EQ,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(216), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(222), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(224), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(226), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(228), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(238), 13,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
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
  [2274] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_DOT,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(252), 9,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
    ACTIONS(250), 19,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
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
  [2319] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_as,
    ACTIONS(230), 1,
      anon_sym_STAR_STAR,
    ACTIONS(232), 1,
      anon_sym_DOT,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(228), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(240), 5,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(238), 18,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
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
  [2370] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_STAR_STAR,
    ACTIONS(232), 1,
      anon_sym_DOT,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(240), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(238), 19,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
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
  [2417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 10,
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
    ACTIONS(254), 21,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_EQ_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
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
  [2456] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_as,
    ACTIONS(230), 1,
      anon_sym_STAR_STAR,
    ACTIONS(232), 1,
      anon_sym_DOT,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(240), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(238), 18,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
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
  [2505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 10,
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
    ACTIONS(258), 21,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_EQ_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
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
  [2544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 10,
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
    ACTIONS(262), 20,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
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
  [2582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 10,
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
    ACTIONS(266), 20,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
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
  [2620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 10,
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
    ACTIONS(270), 20,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
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
  [2658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 10,
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
    ACTIONS(274), 20,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
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
  [2696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 10,
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
    ACTIONS(278), 20,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
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
  [2734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 10,
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
    ACTIONS(282), 20,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
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
  [2772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 10,
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
    ACTIONS(286), 20,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
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
  [2810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 10,
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
    ACTIONS(290), 20,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
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
  [2848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 10,
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
    ACTIONS(294), 20,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
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
  [2886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 10,
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
    ACTIONS(298), 20,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
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
  [2924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 10,
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
    ACTIONS(302), 20,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
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
  [2962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 10,
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
    ACTIONS(306), 20,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
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
  [3000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 10,
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
    ACTIONS(310), 20,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
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
  [3038] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 10,
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
    ACTIONS(314), 20,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
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
  [3076] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_EQ,
    ACTIONS(214), 1,
      anon_sym_as,
    ACTIONS(218), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(220), 1,
      anon_sym_AMP_AMP,
    ACTIONS(230), 1,
      anon_sym_STAR_STAR,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(322), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      sym_arguments,
    STATE(87), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(216), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(222), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(224), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(226), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(228), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(236), 6,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
  [3142] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_EQ,
    ACTIONS(214), 1,
      anon_sym_as,
    ACTIONS(218), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(220), 1,
      anon_sym_AMP_AMP,
    ACTIONS(230), 1,
      anon_sym_STAR_STAR,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(324), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_arguments,
    STATE(58), 1,
      sym_block,
    ACTIONS(216), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(222), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(224), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(226), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(228), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(236), 6,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
  [3205] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_EQ,
    ACTIONS(214), 1,
      anon_sym_as,
    ACTIONS(218), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(220), 1,
      anon_sym_AMP_AMP,
    ACTIONS(230), 1,
      anon_sym_STAR_STAR,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(216), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(222), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(224), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(226), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(326), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(228), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(236), 6,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
  [3266] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_EQ,
    ACTIONS(214), 1,
      anon_sym_as,
    ACTIONS(218), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(220), 1,
      anon_sym_AMP_AMP,
    ACTIONS(230), 1,
      anon_sym_STAR_STAR,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(216), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(222), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(224), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(226), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(328), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(228), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(236), 6,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
  [3327] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_EQ,
    ACTIONS(214), 1,
      anon_sym_as,
    ACTIONS(218), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(220), 1,
      anon_sym_AMP_AMP,
    ACTIONS(230), 1,
      anon_sym_STAR_STAR,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(216), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(222), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(224), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(226), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(330), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(228), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(236), 6,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
  [3388] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_EQ,
    ACTIONS(214), 1,
      anon_sym_as,
    ACTIONS(218), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(220), 1,
      anon_sym_AMP_AMP,
    ACTIONS(230), 1,
      anon_sym_STAR_STAR,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(324), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_block,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(216), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(222), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(224), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(226), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(228), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(236), 6,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
  [3451] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_EQ,
    ACTIONS(214), 1,
      anon_sym_as,
    ACTIONS(218), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(220), 1,
      anon_sym_AMP_AMP,
    ACTIONS(230), 1,
      anon_sym_STAR_STAR,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(216), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(222), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(224), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(226), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(332), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(228), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(236), 6,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
  [3512] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_EQ,
    ACTIONS(214), 1,
      anon_sym_as,
    ACTIONS(218), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(220), 1,
      anon_sym_AMP_AMP,
    ACTIONS(230), 1,
      anon_sym_STAR_STAR,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(216), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(222), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(224), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(226), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(334), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(228), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(236), 6,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
  [3573] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_EQ,
    ACTIONS(214), 1,
      anon_sym_as,
    ACTIONS(218), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(220), 1,
      anon_sym_AMP_AMP,
    ACTIONS(230), 1,
      anon_sym_STAR_STAR,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(324), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_block,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(216), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(222), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(224), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(226), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(228), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(236), 6,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
  [3636] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_EQ,
    ACTIONS(214), 1,
      anon_sym_as,
    ACTIONS(218), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(220), 1,
      anon_sym_AMP_AMP,
    ACTIONS(230), 1,
      anon_sym_STAR_STAR,
    ACTIONS(232), 1,
      anon_sym_DOT,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      anon_sym_DOT_DOT,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(216), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(222), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(224), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(226), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(228), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(236), 6,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
  [3696] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_EQ,
    ACTIONS(214), 1,
      anon_sym_as,
    ACTIONS(218), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(220), 1,
      anon_sym_AMP_AMP,
    ACTIONS(230), 1,
      anon_sym_STAR_STAR,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(216), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(222), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(224), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(226), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(228), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(236), 6,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_STAR_EQ,
  [3756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 8,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(340), 14,
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
  [3786] = 4,
    ACTIONS(342), 1,
      anon_sym_SQUOTE,
    ACTIONS(346), 1,
      sym_comment,
    STATE(75), 1,
      aux_sym_string_repeat2,
    ACTIONS(344), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [3800] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_LBRACE,
    ACTIONS(348), 1,
      anon_sym_if,
    STATE(48), 2,
      sym_block,
      sym_if_expr,
  [3814] = 4,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      sym_comment,
    STATE(78), 1,
      aux_sym_string_repeat1,
    ACTIONS(350), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [3828] = 4,
    ACTIONS(346), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    STATE(77), 1,
      aux_sym_string_repeat2,
    ACTIONS(354), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [3842] = 4,
    ACTIONS(346), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_DQUOTE,
    STATE(76), 1,
      aux_sym_string_repeat1,
    ACTIONS(358), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [3856] = 4,
    ACTIONS(346), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_SQUOTE,
    STATE(77), 1,
      aux_sym_string_repeat2,
    ACTIONS(363), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [3870] = 4,
    ACTIONS(346), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    STATE(76), 1,
      aux_sym_string_repeat1,
    ACTIONS(366), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [3884] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym_parameters_repeat1,
  [3897] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym_parameters_repeat1,
  [3910] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
    ACTIONS(377), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_arguments_repeat1,
  [3923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_EQ,
    ACTIONS(380), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [3934] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_parameters_repeat1,
  [3947] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_SEMI,
    ACTIONS(389), 1,
      anon_sym_RBRACE,
    STATE(84), 1,
      aux_sym_block_repeat1,
  [3960] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_SEMI,
    ACTIONS(393), 1,
      anon_sym_RBRACE,
    STATE(88), 1,
      aux_sym_block_repeat1,
  [3973] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
    ACTIONS(397), 1,
      sym_ident,
    STATE(95), 1,
      sym_parameters,
  [3986] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_arguments_repeat1,
  [3999] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    ACTIONS(401), 1,
      anon_sym_SEMI,
    STATE(84), 1,
      aux_sym_block_repeat1,
  [4012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_block,
  [4022] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_as,
    ACTIONS(405), 1,
      anon_sym_from,
  [4032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    ACTIONS(413), 1,
      sym_ident,
  [4058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      sym_parameters,
  [4068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_block,
  [4078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_block,
  [4088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_block,
  [4098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_LBRACE,
    STATE(103), 1,
      sym_block,
  [4108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      sym_ident,
  [4139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_catch,
  [4146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_from,
  [4153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      sym_ident,
  [4160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_ident,
  [4167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LBRACE,
  [4174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      sym_ident,
  [4181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_LBRACE,
  [4188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      sym_type,
  [4195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym_ident,
  [4202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_SEMI,
  [4209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_LBRACE,
  [4216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_ident,
  [4223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym_ident,
  [4230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_in,
  [4237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      ts_builtin_sym_end,
  [4244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym_ident,
  [4251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      sym_ident,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 91,
  [SMALL_STATE(6)] = 182,
  [SMALL_STATE(7)] = 273,
  [SMALL_STATE(8)] = 361,
  [SMALL_STATE(9)] = 430,
  [SMALL_STATE(10)] = 499,
  [SMALL_STATE(11)] = 567,
  [SMALL_STATE(12)] = 632,
  [SMALL_STATE(13)] = 697,
  [SMALL_STATE(14)] = 762,
  [SMALL_STATE(15)] = 827,
  [SMALL_STATE(16)] = 892,
  [SMALL_STATE(17)] = 957,
  [SMALL_STATE(18)] = 1022,
  [SMALL_STATE(19)] = 1087,
  [SMALL_STATE(20)] = 1152,
  [SMALL_STATE(21)] = 1217,
  [SMALL_STATE(22)] = 1282,
  [SMALL_STATE(23)] = 1347,
  [SMALL_STATE(24)] = 1412,
  [SMALL_STATE(25)] = 1477,
  [SMALL_STATE(26)] = 1542,
  [SMALL_STATE(27)] = 1607,
  [SMALL_STATE(28)] = 1672,
  [SMALL_STATE(29)] = 1712,
  [SMALL_STATE(30)] = 1752,
  [SMALL_STATE(31)] = 1792,
  [SMALL_STATE(32)] = 1832,
  [SMALL_STATE(33)] = 1873,
  [SMALL_STATE(34)] = 1938,
  [SMALL_STATE(35)] = 1991,
  [SMALL_STATE(36)] = 2032,
  [SMALL_STATE(37)] = 2097,
  [SMALL_STATE(38)] = 2154,
  [SMALL_STATE(39)] = 2213,
  [SMALL_STATE(40)] = 2274,
  [SMALL_STATE(41)] = 2319,
  [SMALL_STATE(42)] = 2370,
  [SMALL_STATE(43)] = 2417,
  [SMALL_STATE(44)] = 2456,
  [SMALL_STATE(45)] = 2505,
  [SMALL_STATE(46)] = 2544,
  [SMALL_STATE(47)] = 2582,
  [SMALL_STATE(48)] = 2620,
  [SMALL_STATE(49)] = 2658,
  [SMALL_STATE(50)] = 2696,
  [SMALL_STATE(51)] = 2734,
  [SMALL_STATE(52)] = 2772,
  [SMALL_STATE(53)] = 2810,
  [SMALL_STATE(54)] = 2848,
  [SMALL_STATE(55)] = 2886,
  [SMALL_STATE(56)] = 2924,
  [SMALL_STATE(57)] = 2962,
  [SMALL_STATE(58)] = 3000,
  [SMALL_STATE(59)] = 3038,
  [SMALL_STATE(60)] = 3076,
  [SMALL_STATE(61)] = 3142,
  [SMALL_STATE(62)] = 3205,
  [SMALL_STATE(63)] = 3266,
  [SMALL_STATE(64)] = 3327,
  [SMALL_STATE(65)] = 3388,
  [SMALL_STATE(66)] = 3451,
  [SMALL_STATE(67)] = 3512,
  [SMALL_STATE(68)] = 3573,
  [SMALL_STATE(69)] = 3636,
  [SMALL_STATE(70)] = 3696,
  [SMALL_STATE(71)] = 3756,
  [SMALL_STATE(72)] = 3786,
  [SMALL_STATE(73)] = 3800,
  [SMALL_STATE(74)] = 3814,
  [SMALL_STATE(75)] = 3828,
  [SMALL_STATE(76)] = 3842,
  [SMALL_STATE(77)] = 3856,
  [SMALL_STATE(78)] = 3870,
  [SMALL_STATE(79)] = 3884,
  [SMALL_STATE(80)] = 3897,
  [SMALL_STATE(81)] = 3910,
  [SMALL_STATE(82)] = 3923,
  [SMALL_STATE(83)] = 3934,
  [SMALL_STATE(84)] = 3947,
  [SMALL_STATE(85)] = 3960,
  [SMALL_STATE(86)] = 3973,
  [SMALL_STATE(87)] = 3986,
  [SMALL_STATE(88)] = 3999,
  [SMALL_STATE(89)] = 4012,
  [SMALL_STATE(90)] = 4022,
  [SMALL_STATE(91)] = 4032,
  [SMALL_STATE(92)] = 4040,
  [SMALL_STATE(93)] = 4048,
  [SMALL_STATE(94)] = 4058,
  [SMALL_STATE(95)] = 4068,
  [SMALL_STATE(96)] = 4078,
  [SMALL_STATE(97)] = 4088,
  [SMALL_STATE(98)] = 4098,
  [SMALL_STATE(99)] = 4108,
  [SMALL_STATE(100)] = 4116,
  [SMALL_STATE(101)] = 4124,
  [SMALL_STATE(102)] = 4132,
  [SMALL_STATE(103)] = 4139,
  [SMALL_STATE(104)] = 4146,
  [SMALL_STATE(105)] = 4153,
  [SMALL_STATE(106)] = 4160,
  [SMALL_STATE(107)] = 4167,
  [SMALL_STATE(108)] = 4174,
  [SMALL_STATE(109)] = 4181,
  [SMALL_STATE(110)] = 4188,
  [SMALL_STATE(111)] = 4195,
  [SMALL_STATE(112)] = 4202,
  [SMALL_STATE(113)] = 4209,
  [SMALL_STATE(114)] = 4216,
  [SMALL_STATE(115)] = 4223,
  [SMALL_STATE(116)] = 4230,
  [SMALL_STATE(117)] = 4237,
  [SMALL_STATE(118)] = 4244,
  [SMALL_STATE(119)] = 4251,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(111),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(118),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(91),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(63),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(27),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(106),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(89),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(86),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(98),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(63),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(74),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(72),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_stmt, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_stmt, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 5),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_expr, 3, .production_id = 6),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_expr, 3, .production_id = 6),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix_expr, 3, .production_id = 6),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair_expr, 3, .production_id = 9),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_expr, 2, .production_id = 3),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix_expr, 2, .production_id = 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_expr, 5),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_expr, 5),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 5),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 5),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expr, 7),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expr, 7),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_expr, 2),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_expr, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_expr, 3, .production_id = 5),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_expr, 3, .production_id = 5),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_expr, 4, .production_id = 12),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_expr, 4, .production_id = 12),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expr, 3, .production_id = 8),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expr, 3, .production_id = 8),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 2, .production_id = 4),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 2, .production_id = 4),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expr, 3),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expr, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_expr, 3),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_expr, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expr, 3, .production_id = 7),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast_expr, 3, .production_id = 7),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 4, .production_id = 10),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_stmt, 2, .production_id = 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_stmt, 2, .production_id = 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(76),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(77),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(115),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(14),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 2, .production_id = 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_stmt, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_stmt, 6, .production_id = 13),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_stmt, 4, .production_id = 11),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [447] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
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

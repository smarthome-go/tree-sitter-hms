(comment) @comment.line
(string) @string
(escape_sequence) @string.escape
(bool) @boolean
(number) @number
(type) @type.builtin

(ident) @variable

(fn_expr
  name: (ident) @function)
(parameters (ident) @parameter)

(member_expr
  field: (ident) @field)

(object_literal
  (ident) @field)

(call_expr
  function: (ident) @function.call)
(call_expr
  function: (member_expr
    field: (ident) @method.call))

((ident) @function.builtin
  (#match? @function.builtin "^(exit|throw|assert|print|println|ping|switch_on|switch|notify|remind|log|exec|get|http)$"))

((ident) @variable.builtin
  (#match? @variable.builtin "^(user|weather|time)$"))

[
  "-"
  "-="
  "+"
  "+="
  "*"
  "*="
  "**"
  "**="
  "/"
  "/="
  "%"
  "%="
  "<"
  "<="
  "="
  "=="
  "!"
  "!="
  "=>"
  ">"
  ">="
  "&&"
  "||"
] @operator

[
  ";"
  "."
  ","
] @punctuation.delimiter

[
  "("
  ")"
  "{"
  "}"
  "["
  "]"
] @punctuation.bracket

[
  "as"
  "catch"
  "continue"
  "break"
  "else"
  "for"
  "from"
  "if"
  "import"
  "in"
  "let"
  "try"
  "while"
  "loop"
] @keyword
"fn" @keyword.function
"return" @keyword.return
["if" "else"] @conditional
["for" "while" "loop"] @repeat
["import" "from"] @include

"null" @constant.builtin

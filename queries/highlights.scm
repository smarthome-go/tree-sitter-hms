(comment) @comment.line
(string) @string
(escape_sequence) @string.escape
(bool) @boolean
(number) @number
(type) @type.builtin

((ident) @function.builtin
  (#match? @function.builtin "^(exit|throw|assert|println|sleep|switch_on|switch|notify|log|exec|get|http)$"))

((ident) @variable.builtin
  (#match? @variable.builtin "^(user|weather|time)$"))

(fn_expr
  name: (ident) @function)
(parameters (ident) @parameter)

(member_expr
  field: (ident) @property)

(call_expr
  function: (ident) @function.call)
(call_expr
  function: (member_expr
    field: (ident) @method.call))

(ident) @variable

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

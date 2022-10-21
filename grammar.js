module.exports = grammar({
    name: 'hms',
    extras: $ => [
        / |\n|\t|\r/,
        $.comment,
    ],
    precedences: $ => [
        [
            'member',
            'call',
            'unary',
            'binary_exp',
            'cast',
            'binary_times',
            'binary_plus',
            'binary_relation',
            'binary_equality',
            'logical_and',
            'logical_or',
            'assign',
        ],
    ],

    rules: {
        program: $ => repeat(seq($._statement, ';')),

        _statement: $ =>
            choice(
                $.let_stmt,
                $.import_stmt,
                $.break_stmt,
                $.continue_stmt,
                $.return_stmt,
                $._expression,
            ),
        let_stmt: $ =>
            seq('let', field('name', $.ident), optional(seq('=', field('value', $._expression)))),
        import_stmt: $ =>
            seq(
                'import',
                field('function', $.ident),
                optional(seq('as', field('as', $.ident))),
                'from',
                field('from', $.ident),
            ),
        break_stmt: $ => seq('break', optional(field('value', $._expression))),
        continue_stmt: $ => seq('continue'),
        return_stmt: $ => seq('return', optional(field('value', $._expression))),

        _expression: $ =>
            choice(
                $._atom,
                $.prefix_expr,
                $.infix_expr,
                $.member_expr,
                $.call_expr,
                $.assign_expr,
                $.cast_expr,
            ),
        _atom: $ =>
            choice(
                $.number,
                $.bool,
                $.string,
                $.pair_expr,
                'null',
                $.ident,
                $.if_expr,
                $.for_expr,
                $.while_expr,
                $.loop_expr,
                $.fn_expr,
                $.try_expr,
                $.paren_expr,
            ),
        pair_expr: $ =>
            prec.right(seq(
                field('key', $.string),
                '=>',
                field('value', $._expression),
            )),
        prefix_expr: $ =>
            prec.left(
                'unary',
                seq(
                    field('operator', choice('+', '-', '!')),
                    field('argument', $._expression),
                ),
            ),
        infix_expr: $ =>
            choice(
                ...[
                    ['||', 'logical_or'],
                    ['&&', 'logical_and'],
                    ['==', 'binary_equality'],
                    ['!=', 'binary_equality'],
                    ['<', 'binary_relation'],
                    ['<=', 'binary_relation'],
                    ['>', 'binary_relation'],
                    ['>=', 'binary_relation'],
                    ['+', 'binary_plus'],
                    ['-', 'binary_plus'],
                    ['*', 'binary_times'],
                    ['/', 'binary_times'],
                    ['%', 'binary_times'],
                    ['**', 'binary_exp', 'right'],
                ].map(([operator, precedence, associativity]) =>
                    (associativity === 'right' ? prec.right : prec.left)(
                        precedence,
                        seq(
                            field('left', $._expression),
                            field('operator', operator),
                            field('right', $._expression),
                        ),
                    )
                ),
            ),
        member_expr: $ =>
            prec(
                'member',
                seq(
                    field('object', $._expression),
                    '.',
                    field('field', $.ident),
                ),
            ),
        call_expr: $ =>
            prec(
                'call',
                seq(
                    field('function', $._expression),
                    field('arguments', $.arguments),
                ),
            ),
        arguments: $ => seq('(', commaSep($._expression), ')'),
        assign_expr: $ =>
            prec.right(
                'assign',
                seq(
                    // TODO: left should not allow *all* expressions
                    field('left', $._expression),
                    field('operator', choice('=', '*=', '/=', '%=', '+=', '-=', '**=')),
                    field('right', $._expression),
                ),
            ),
        cast_expr: $ =>
            prec.left('cast', seq(field('value', $._expression), 'as', field('type', $.type))),

        block: $ =>
            seq(
                '{',
                optional(seq($._statement, repeat(seq(';', $._statement)), optional(';'))),
                '}',
            ),
        if_expr: $ =>
            seq('if', $._expression, $.block, optional(seq('else', choice($.if_expr, $.block)))),
        for_expr: $ => seq('for', $.ident, 'in', $._expression, '..', $._expression, $.block),
        while_expr: $ => seq('while', $._expression, $.block),
        loop_expr: $ => seq('loop', $.block),
        fn_expr: $ =>
            seq('fn', optional(field('name', $.ident)), field('parameters', $.parameters), $.block),
        parameters: $ => seq('(', commaSep($.ident), ')'),
        try_expr: $ => seq('try', $.block, 'catch', $.ident, $.block),
        paren_expr: $ => seq('(', $._expression, ')'),

        number: $ => /[0-9]+(\.[0-9]+)?/,
        bool: $ => /true|false|on|off/,
        type: $ => /str|bool|num|null/,
        ident: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

        string: $ =>
            choice(
                seq(
                    '"',
                    repeat(choice(
                        alias($.unescaped_double_string_fragment, $.string_fragment),
                        $.escape_sequence,
                    )),
                    '"',
                ),
                seq(
                    "'",
                    repeat(choice(
                        alias($.unescaped_single_string_fragment, $.string_fragment),
                        $.escape_sequence,
                    )),
                    "'",
                ),
            ),
        unescaped_double_string_fragment: $ => token.immediate(prec(1, /[^"\\]+/)),
        unescaped_single_string_fragment: $ => token.immediate(prec(1, /[^'\\]+/)),
        escape_sequence: $ =>
            token.immediate(seq(
                '\\',
                choice(
                    /[\\'"bnrt]/,
                    /[0-7]{3}/,
                    /x[0-9a-fA-F]{2}/,
                    /u[0-9a-fA-F]{4}/,
                    /U[0-9a-fA-F]{8}/,
                ),
            )),

        comment: $ => /#.*/,
    },
})

function commaSep(rule) {
    return optional(seq(rule, repeat(seq(',', rule))))
}

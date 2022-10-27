# tree-sitter-hms

[Homescript](https://github.com/smarthome-go/homescript) v2 grammar for
[tree-sitter](https://github.com/tree-sitter/tree-sitter)

## Usage in Neovim

### Parser Installation

The [nvim-treesitter plugin](https://github.com/nvim-treesitter/nvim-treesitter)
does not include this parser. To use it you must instead manually add it to your
tree-sitter config and then install it with `:TSInstall hms` or by adding it to
your `ensure_installed` list:

```lua
require('nvim-treesitter.parsers').get_parser_configs().hms = {
    install_info = {
        url = 'https://github.com/smarthome-go/tree-sitter-hms.git',
        files = { 'src/parser.c' },
        branch = 'main',
    },
    filetype = 'homescript',
}
```

### File type detection

You will likely also have to add the `homescript` file type:

```lua
vim.filetype.add { extension = { hms = 'homescript' } }
```

### Highlighting and Indentation

If you want to use this parser for highlighting and indentation, you will also
have to add this repository as a plugin, for example for packer.nvim add this:

```lua
use { 'smarthome-go/tree-sitter-hms' }
```

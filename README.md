# 42 Piscine

My work from the 42 Piscine, focusing on C programming, Unix shell basics and peer learning.

## Structure

| Folder        | Content                                     |
|---------------|---------------------------------------------|
| `Shell00-01/` | Shell basics: files, permissions, git, ...  |
| `C00–C07/`     | C modules: syntax, pointers, memory, ...    |
| `Rush0X/`     | Weekend group projects                      |
| `BSQ/`        | Group project: largest square in a map      |

## Build & run

Most C exercises are unique functions. To test one, add a `main` and compile:

```sh
cc -Wall -Wextra -Werror ex00/ft_putchar.c main.c -o test
./test
```

Projects with a `Makefile` (e.g. BSQ):

```sh
make
./bsq map.txt
```

## Rules

- Code follows the **42 Norm** (checked with `norminette`)
- Only allowed functions per exercise (usually `write`, `malloc`, `free`)
- Compiled with `-Wall -Wextra -Werror`

## Note

This repo is for learning and reference, it is not complete and not checked for every error.

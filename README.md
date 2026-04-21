*This project has been created as part of the 42 curriculum by josamba-.*

# ft_printf

## Description

ft_printf is a partial reimplementation of the standard C `printf` function, built from scratch as part of the 42 curriculum. The goal is to understand variadic functions and to produce a reusable formatting library that integrates seamlessly with **libft**.

The function handles the most common conversion specifiers and relies on libft for low-level output operations.

### Prototype

```c
int ft_printf(const char *format, ...);
```

Upon successful return, the `printf` function returns the number of bytes printed (excluding the null byte used to end output to strings)

---

### Supported conversions

| Specifier | Description |
|---|---|
| `%c` | Prints a single character |
| `%s` | Prints a string |
| `%p` | Prints a pointer address in hexadecimal (`0x…`) |
| `%d` | Prints a signed decimal integer |
| `%i` | Prints a signed integer (identical to `%d`) |
| `%u` | Prints an unsigned decimal integer |
| `%x` | Prints an unsigned integer in lowercase hexadecimal |
| `%X` | Prints an unsigned integer in uppercase hexadecimal |
| `%%` | Prints a literal `%` character |

---

## Instructions

### Compilation

```bash
make
```

This will compile all source files and generate `ft_printf.a` at the root of the repository.

### Available Makefile rules

| Rule | Action |
|---|---|
| `make` / `make all` | Compiles the library |
| `make clean` | Removes object files |
| `make fclean` | Removes object files and `ft_printf.a` |
| `make re` | Runs `fclean` then `all` |

---

## Resources

- `man 3 printf` — reference behaviour for all supported specifiers
- `man stdarg` — variadic functions (`va_list`, `va_start`, `va_arg`, `va_end`)
- [42 Norm](https://github.com/42School/norminette) — coding standard enforced throughout the project

### AI usage

AI was not used to write any code in this project but was used to clarify some new concepts when the resources were not found on the internet.
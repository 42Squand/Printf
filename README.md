# ft_printf

> "This project is to recode printf. First introduction to variadic arguments."

| Program name     | libftprintf.a                                                |
| ---------------- | ------------------------------------------------------------ |
| Turn in files    | *.c, */*.c, *.h, */*.h, Makefile                             |
| Makefile         | all, clean, fclean, re, bonus                                |
| External functs. | malloc, free, write, va_start, va_arg, va_copy, va_end       |
| Libft authorized | yes                                                          |
| Description      | Write a library that contains ft_printf, a function that will mimic the real printf |

- The prototype of ft_printf should be `int ft_printf(const char *, ...);`
- You have to recode the libc’s printf function
- It must not do the buffer management like the real printf
- It will manage the following conversions: `c` `s` `p` `d` `i` `u` `x` `X`
- It will manage any combination of the following flags: ’-0.*’ and minimum field width with all conversions
- It will be compared with the real printf
- You must use the command ar to create your librairy, using the command libtool is forbidden.

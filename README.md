*This project has been created as part
of the 42 curriculum by ineguill*

# ft_printf

## Description

`ft_printf` is a C implementation of the standard library's `printf` function. This project focuses on replicating the core functionality of printf, including format specifier parsing, variable argument handling, and output formatting. The implementation demonstrates a deep understanding of variadic functions, format string parsing, and low-level character output manipulation.
The primary goal of this project is to:
- Create a fully functional printf implementation that behaves identically to the standard library function
- Understand how variadic functions work in C using `stdarg.h`
- Master format string parsing and conversion specifiers
- Implement proper handling of various data types (integers, strings, pointers, hexadecimal values, etc.)

## Overview
The project is structured modularly with separate functions for handling different format specifiers:

- **ft_printf.c** - Main function that parses the format string and dispatches to appropriate handlers
- **ft_printchar.c** - Handles character printing (`%c`)
- **ft_printstr.c** - Handles string printing (`%s`)
- **ft_printdec.c** - Handles signed integer printing (`%d`, `%i`)
- **ft_printui.c** - Handles unsigned integer printing (`%u`)
- **ft_printhex.c** - Handles hexadecimal printing (`%x`, `%X`)
- **ft_printptr.c** - Handles pointer printing (`%p`)

## Resources

### Classic References

- **[The C Programming Language](https://en.wikipedia.org/wiki/The_C_Programming_Language)** - Kernighan and Ritchie - Essential reference for understanding C's standard library and function design patterns
- **[Linux man pages - printf(3)](https://man7.org/linux/man-pages/man3/printf.3.html)** - Complete specification of printf behavior and format specifiers
- **[C99 Standard - stdarg.h](https://en.cppreference.com/w/c/variadic)** - Official documentation on variadic functions and the stdarg library
- **[GNU C Library Manual](https://www.gnu.org/software/libc/manual/)** - Comprehensive guide to C library implementation details

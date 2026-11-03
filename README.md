This project has been created as part of the 42 curriculum by mikhant.

# ft_printf

## Description

The *ft_printf* project is part of the 42 Common Core curriculum. The goal of this project is to recreate the behavior of the standard C library function printf().

The project introduces variadic functions in C and teaches how to handle a variable number of arguments. It also helps develop a better understanding of formatted output, data types, pointers, and memory representation.

The implementation supports the following format specifiers:

| Specifier | Description |
|---|---|
| %c | Prints a single character |
| %s | Prints a string |
| %p | Prints a pointer address |
| %d | Prints a decimal integer |
| %i | Prints an integer |
| %u | Prints an unsigned decimal integer |
| %x | Prints a hexadecimal number (lowercase) |
| %X | Prints a hexadecimal number (uppercase) |
| %% | Prints a percent sign |

## Instructions

### Compilation

Compile the library using the Makefile:

bash
make


This generates the static library:

text
libftprintf.a


### Available Makefile Commands

bash
make        # Compile the library
make clean  # Remove object files
make fclean # Remove object files and library
make re     # Recompile everything


### Usage

Include the header file in your C program:

c
#include "ft_printf.h"


Compile your program with the library:

bash
cc main.c libftprintf.a -o test


Run the executable:

bash
./test


Example:

c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s!\n", "42");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hexadecimal: %x\n", 255);
    return (0);
}


## Algorithm and Data Structure

### Algorithm

The implementation uses a sequential parsing algorithm.

1. The function receives a format string and a variable number of arguments.
2. It initializes a va_list using va_start().
3. It iterates through the format string character by character.
4. When a normal character is encountered, it is printed directly.
5. When a % character is encountered, the next character is checked to identify the corresponding format specifier.
6. Depending on the specifier, the appropriate helper function is called to print the argument.
7. Each helper function returns the number of characters printed.
8. The total number of printed characters is accumulated and returned.
9. Finally, va_end() is called to clean up the variadic argument list.

### Data Structure

The main data structure used is va_list, which allows the function to access a variable number of arguments.

The implementation also uses ordinary variables such as:

- i: Tracks the current position in the format string.
- count: Tracks the total number of characters printed.
- args: Stores the state required to access variadic arguments.
- c: Temporarily stores individual characters when printing.

No complex data structures such as linked lists, trees, or arrays are required.

### Why This Approach?

A sequential parsing algorithm is suitable because the format string must be processed in its original order.

Using helper functions for individual format specifiers keeps the implementation modular, makes the code easier to maintain, and avoids repeating printing logic.

The use of va_list allows the function to retrieve arguments of different types depending on the format specifier.

## Resources

### Documentation and References

- [42 ft_printf Subject](https://cdn.intra.42.fr/pdf/pdf/XXXXX/en.subject.pdf)
- [Linux Manual - printf](https://man7.org/linux/man-pages/man3/printf.3.html)
- [Linux Manual - stdarg](https://man7.org/linux/man-pages/man3/stdarg.3.html)
- [GNU C Library - Variadic Functions](https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html)
- [C Programming - Variadic Functions](https://en.cppreference.com/w/c/variadic.html)

### AI Usage

AI tools were used as a learning assistant throughout the development of this project.

They were used for:

- Understanding variadic functions, including va_list, va_start, va_arg, and va_end.
- Understanding how format specifiers work.
- Learning how to structure helper functions and manage character counting.
- Debugging and understanding compilation errors.
- Reviewing the implementation and explaining C programming concepts.

The AI was used to support learning and problem-solving. The implementation, testing, and final decisions were carried out by the student.
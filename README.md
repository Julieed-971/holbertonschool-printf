# <p align="center">C - Printf project</p>

The Printf project is a customized implementation of the printf function in the C language. The printf function is a standard library function used to display formatted messages on standard output (usually the console).

## Table of Contents

-   [Objective](#objective)
-	[Compilation command](#compilation-command)	
-   [Requirements](#requirements)
-   [Mandatory Tasks](#mandatory-tasks)
-   [Features](#features)
-   [Installation](#installation)
-   [Authors](#contributors)

## Objective

The objective of this project is to create our own printf function to understand the underlying concepts related to variable arguments and format specifiers in C.

## Compilation command

`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c`

## Requirements

-	Allowed editors: `vi`, `vim`, `emacs`
-   All files will be compiled on Ubuntu 20.04 LTS
-   Code must follow the `Betty` style
-   Global variables are not allowed
-	No more than  functions per file
-	All prototypes for functions should be included in our header file `main.h`
-   Authorized functions and macros:
	- write (man 2 write)
	- malloc (man 3 malloc)
	- free (man 3 free)
	- va_start (man 3 va_start)
	- va_end (man 3 va_end)
	- va_copy (man 3 va_copy)
	- va_arg (man 3 va_arg)

## Mandatory Tasks

### Task 0
	
-   Write a function that produces output according to a format and the following conversion specifiers `c`, `s`, and `%`.

### Task 1

-   Handle the following conversion specifiers `d`, `i`.

### Task 2

-   Create a man page for your function.

## Specifiers

\_printf supports the following format specifiers:

-   %c: prints a single character
-   %s: prints a string of characters
-	%%: prints a literal '%' character
-   %d: prints a decimal number 
-	%i: signed integer number

## Examples and tests

My own tests in comparison with the standard printf function(main.c file):

*Input*

```c
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
        int len;
        int len2;

        len = _printf("Printf is so much fun!\n");
        len2 = printf("Printf is so much fun!\n");
        _printf("Length:[%d, %i]\n", len, len);
        printf("Length:[%d, %i]\n", len2, len2);
        _printf("Negative:[%d]\n", -823405);
        printf("Negative:[%d]\n", -823405);
        _printf("Character:[%c]\n", 'A');
        printf("Character:[%c]\n", 'A');
        _printf("String:[%s]\n", "Learning for a lifetime");
        printf("String:[%s]\n", "Learning for a lifetime");
        len = _printf("Percent:[%%]\n");
        len2 = printf("Percent:[%%]\n");
        _printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);
        _printf("Unknown:[%r]\n");
        printf("Unknown:[%r]\n");
        _printf("Len:[%d]\n", INT_MIN);
        printf("Len:[%d]\n", INT_MIN);
        return (0);
}
```

*Output*

`
Printf is so much fun!
Printf is so much fun!
Length:[23, 23]
Length:[23, 23]
Negative:[-823405]
Negative:[-823405]
Character:[A]
Character:[A]
String:[Learning for a lifetime]
String:[Learning for a lifetime]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
Len:[-2147483648]
Len:[-2147483648]
`

## Man page
More information with the command: `man ./man_3_printf` or on our man page

![Image](https://github.com/Julieed-971/holbertonschool-printf/blob/master/Other_files_and_tests/man_3_printf.png)

## Flowchart

![Image](https://github.com/Julieed-971/holbertonschool-printf/blob/master/Other_files_and_tests/C%20-%20Printf%20flowchart.png)

## Installation

1.  Clone this repository on your local machine:

`git clone` [https://github.com/Julieed-971/holbertonschool-printf.git]

2.  Compile the source files with the following command:

```gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o 0-printf```

## Thanks

Special thanks to my #C22 peers Rodrigues, and his infinite patience, Yasine, Theo, Nathan, Gilles, Chloe and Elie. 
Very special thanks to Fabien, Yoann and Xavier, the absolute best tutors that can ever be !

## Authors
#### Julie Dedieu
-   Github: [@Julieed-971](https://github.com/Julieed-971)
#### Saadi Khemchane
-   Github: [@SaadiKhemchane](https://github.com/SaadiKhemchane)

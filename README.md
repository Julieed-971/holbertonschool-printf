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

## Features

\_printf supports the following format specifiers:

-   %c: prints a single character
-   %s: prints a string of characters
-	%%: prints a literal '%' character
-   %d: prints a decimal number 
-	%i: signed integer number

## Man page
More information with the command: `man ./man_3_printf` or on our man page

## Flowchart

![Image](https://github.com/Julieed-971/holbertonschool-printf/blob/master/Other_files_and_tests/C%20-%20Printf%20flowchart.png)

## Installation

1.  Clone this repository on your local machine:

`git clone [https://github.com/Julieed-971/holbertonschool-printf.git]`: https://github.com/Julieed-971/holbertonschool-printf.git

2.  Compile the source files with the following command:

```gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o 0-printf```

## Authors
#### Julie Dedieu
-   Github: [@Julieed-971](https://github.com/Julieed-971)
#### Saadi Khemchane
-   Github: [@SaadiKhemchane](https://github.com/SaadiKhemchane)

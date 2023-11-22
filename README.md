# Printf

The Printf project is a customized implementation of the printf function in the C language. The printf function is a standard library function used to display formatted messages on standard output (usually the console).

## Table of Contents

-   [Objective](#objective)
-   [Requirements](#requirements)
-   [Mandatory Tasks](#mandatory-tasks)
-   [Features](#features)
-   [Installation](#installation)
-   [Authors](#contributors)

## Objective

The objective of this project is to create a simplified version of the printf function to understand the underlying concepts related to variable arguments and format specifiers in C.

## Requirements

-   All files will be compiled on Ubuntu 20.04 LTS
-   Programs and functions will be compiled with gcc 4.8.4 using flags -Wall -Werror -Wextra and -pedantic
-   Code must follow the Betty style
-   Global variables are not allowed
-   Authorized functions and macros:
	- write (man 2 write)
	- malloc (man 3 malloc)
	- free (man 3 free)
	- va_start (man 3 va_start)
	- va_end (man 3 va_end)
	- va_copy (man 3 va_copy)
	- va_arg (man 3 va_arg)

## Mandatory Tasks

-   Write function that produces output with conversion specifiers c, s, and %.
-   Handle conversion specifiers d, i.
-   Create a man page for your function.

## Features

printf supports the following format specifiers:

-   %c: character
-   %s: string of characters
-   %d or %i: signed integer in base 10

More information with the command: `man _printf`

## Installation

1.  Clone this repository on your local machine:

`git clone https://github.com/Julieed-971/holbertonschool-printf.git`

2.  Compile the source files with the following command:

`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o 0-printf`

``` 

```

## Authors
#### Julie Dedieu
-   Github: https://github.com/Julieed-971
#### Saadi Khemchane
-   Github: https://github.com/SaadiKhemchane

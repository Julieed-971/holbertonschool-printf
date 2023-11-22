#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * struct specifier - Structure of a format specifier
 * and corresponding function.
 * @c: Format specifier of the type of data to be processed.
 * @spec: Function pointer to corresponding function processing the data.
 *
 * Description: This structure associate format specifiers with functions
 *	in variadic functions in order to process various types
 *	of data with the provided format specifier.
 *	The c member corresponds to the format specifier
 *	and the format member is a function pointer
 *	poiting to the function that will process the data of that type.
 */
typedef struct specifier
{
	char c;
	int (*spec)(va_list);
} spec_t;

int _putchar(char c);
int spec_char(va_list args);
int spec_str(va_list args);
int spec_percent(va_list args);
int _printf(const char *format, ...);
int print_num(va_list args);

#endif

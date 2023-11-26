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

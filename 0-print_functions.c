#include "main.h"

/**
 * spec_char - write a char
 * @args: pointer to the arguments list
 *
 * Return: int
 */

int spec_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (0);
}

/**
 * spec_str - write a string
 * @args: pointer to the arguments list
 *
 * Return: int
 */

int spec_str(va_list args)
{
	char *str = va_arg(args, char *);

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	return (0);
}

/**
 * spec_percent - write a percentage
 * @args: pointer to the arguments list
 *
 * Return: int
 */
int spec_percent(__attribute__((unused))va_list args)
{
	_putchar('%');
	return (0);
}

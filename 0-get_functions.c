#include "main.h"

/**
 * spec_char - write a char
 * @args: pointer to the arguments list
 *
 * Return: int
 */

int spec_char(va_list args)
{
	int count = 0;

	_putchar(va_arg(args, int));
	count++;
	return (count);
}

/**
 * spec_str - write a string
 * @args: pointer to the arguments list
 *
 * Return: int
 */

int spec_str(va_list args)
{
	int count = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}

/**
 * spec_percent - write a percentage
 * @args: pointer to the arguments list
 *
 * Return: int
 */
int spec_percent(__attribute__((unused))va_list args)
{
	int count = 0;

	_putchar('%');
	count++;
	return (count);
}

#include "main.h"

/**
 * spec_char - write a single character
 * @args: pointer to the arguments list
 *
 * Return: length of the arguments list element
 */

int spec_char(va_list args)
{
	int count = 0;

	_putchar(va_arg(args, int));
	count++;
	return (count);
}

/**
 * spec_str - write a string of characters
 * @args: pointer to the arguments list
 *
 * Return: length of the string
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
 * spec_percent - write a percentage symbol
 * @args: pointer to the arguments list
 *
 * Return: length of the arguments list element
 */
int spec_percent(__attribute__((unused))va_list args)
{
	int count = 0;

	_putchar('%');
	count++;
	return (count);
}

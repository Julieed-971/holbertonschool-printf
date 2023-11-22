#include "main.h"

/**
 * _printf - write many things
 * @...: list of arguments
 * @format: pointer to string
 *
 * Return: int
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int j = 0;
	spec_t spec_list[] = {
		{'c', spec_char},
		{'s', spec_str},
		{'%', spec_percent},
		{'\0', NULL}
	};

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			while (spec_list[j].c != '\0')
			{
				if (format[i + 1] == spec_list[j].c)
				{
					spec_list[j].spec(args);
				}
				j++;
			}
			j = 0;
			i++;
		}
		else
			_putchar(format[i]);
		i++;
	}
	va_end(args);

	return (0);
}

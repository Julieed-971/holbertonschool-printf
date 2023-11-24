#include "main.h"
/**
 * _printf - write many things
 * @...: list of arguments
 * @format: pointer to string
 *
 * Return: length of the string
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, i = 0, j = 0;
	spec_t spec_list[] = {{'c', spec_char}, {'s', spec_str},	{'%', spec_percent},
		{'d', spec_deci}, {'i', spec_deci},	{'\0', NULL}};
	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			while (spec_list[j].c != '\0')
			{
				if (format[i + 1] == spec_list[j].c)
				{
					count += spec_list[j].spec(args);
					break;
				}
				j++;
			}
			if (spec_list[j].c == '\0')
			{
				count += _putchar(format[i]);
				count += _putchar(format[i + 1]);
			}
			j = 0;
			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}

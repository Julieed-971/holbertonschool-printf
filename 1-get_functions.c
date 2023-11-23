#include "main.h"

/**
 * spec_deci - convert and write decimal numbers
 * @args: pointer to the arguments list
 *
 * Return: length of the string
 */

int spec_deci(va_list args)
{
        int num = va_arg(args, int);
        int i = 0;
        int digit_number = 0;
        int digit_string[21];

        if (num == 0)
        {
                _putchar('0');
                return (0);
        }
        if (num < 0)
        {
                _putchar('-');
                num *= -1;
                digit_number++;
        }
        while (num != 0)
        {
                digit_string[i] = (num % 10);
                num /= 10;
                i++;
        }
        while (i > 0)
        {
          _putchar(digit_string[i - 1] + '0');
          digit_number++;
          i--;
        }
        return (digit_number);
}

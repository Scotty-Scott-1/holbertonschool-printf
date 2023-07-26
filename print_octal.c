#include "main.h"
/**
 * printoctal - write an number in octal format
 * @args: macro for the variadic function
 * Return: the number of characters printed or failure code
 */
int printoctal(va_list args)
{
	unsigned int o = va_arg(args, unsigned int), pow, value, ch = 0;
	char start_to_print = 0;

	for (pow = 1073741824; pow >= 1; pow /= 8)
	{
		value = (o / pow) % 8 + '0';
		if ((start_to_print == 0 && value - '0' > 0) || start_to_print)
		{
			start_to_print = 1;
			ch += write(1, &value, 1);
		}
	}
	return (ch);
}

#include "main.h"
/**
 * printunsigned - write an unsigned
 * @args: macro for the variadic function
 * Return: the number of characters printed or failure code
 */
int printunsigned(va_list args)
{
	unsigned int u = va_arg(args, unsigned int), pow, value, ch = 0;
	char start_to_print = 0;

	for (pow = 1000000000; pow >= 1; pow /= 10)
	{
		value = (u / pow) % 10 + '0';
		if ((start_to_print == 0 && value - '0' > 0) || start_to_print)
		{
			start_to_print = 1;
			ch += write(1, &value, 1);
		}
	}
	return (ch);
}

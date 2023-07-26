#include "main.h"
/**
 * printhexa - write an number in hexadecimal
 * @args: macro for the variadic function
 * Return: the number of characters printed or failure code
 */
int printhexa(va_list args)
{
	unsigned int h = va_arg(args, unsigned int), pow, value, ch = 0;
	char start_to_print = 0;

	for (pow = 268435456; pow >= 1; pow /= 16)
	{
		value = (h / pow) % 16 + '0';
		if (value > '9')
			value += 39;
		if ((start_to_print == 0 && value - '0' > 0) || start_to_print)
		{
			start_to_print = 1;
			ch += write(1, &value, 1);
		}
	}
	return (ch);
}

#include "main.h"
/**
 * printint - write an int
 * @args: macro for the variadic function
 * Return: the number of characters printed or failure code
 */
int printint(va_list args)
{
	int integer = va_arg(args, int), pow, value, ch = 0;
	char start_to_print = 0;

	if (integer < 0)
	{
		integer = -integer;
		ch += write(1, "-", 1);
	}
	for (pow = 1000000000; pow >= 1; pow /= 10)
	{
		value = (integer / pow) % 10 + '0';
		if ((start_to_print == 0 && value - '0' > 0) || start_to_print)
		{
			start_to_print = 1;
			ch += write(1, &value, 1);
		}
	}
	return (ch);
}

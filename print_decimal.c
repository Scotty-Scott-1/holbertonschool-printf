#include "main.h"
/**
 * printint - write an int
 * @args: macro for the variadic function
 * Return: the number of characters printed or failure code
 */
int printint(va_list args)
{
	int integer = va_arg(args, int), num_of_digits = 1, pow, value, ch = 0;

	if (integer < 0)
	{
		integer = -integer;
		ch += write(1, "-", 1);
	}
	for (pow = 10; integer >= pow; pow = pow * 10)
	{
		num_of_digits++;
	}
	for (pow = pow / 10; num_of_digits >= 1; pow = pow / 10, num_of_digits--)
	{
		value = (integer / pow) % 10 + '0';
		ch += write(1, &value, 1);
	}
	return (ch);
}

#include "main.h"
#include <stdio.h>
/**
 * print_pointer - write an number in pointerdecimal
 * @args: macro for the variadic function
 * Return: the number of characters printed or failure code
 */
int print_pointer(va_list args)
{
	unsigned long p = va_arg(args, unsigned long);
	int ch = 0, i = 0;
	char temp[16];

	if (p == 0)
		return (write(1, "(nil)", 5));
	ch += write(1, "0x", 2);
	do {
		temp[i] = p % 16 + '0';
		if (temp[i] >= ':')
			temp[i] += ('a' - ':');
		p = p / 16;
		i++;
	} while (p > 0);
	i--;
	while (i >= 0)
	{
		ch += write(1, &temp[i], 1);
		i--;
	}
	return (ch);
}

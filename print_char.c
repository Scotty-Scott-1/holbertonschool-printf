#include "main.h"
/**
 * print_char - write a char
 * @args: macro for the variadic function
 * Return: the number of characters printed or failure code
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (write(1, &c, 1));
}

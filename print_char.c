#include "main.h"
/**
 * printchar - write a char
 * @args: macro for the variadic function
 * Return: the number of characters printed or failure code
 */
int printchar(va_list args)
{
	char c = va_arg(args, int);

	return (write(1, &c, 1));
}

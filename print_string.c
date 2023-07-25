#include "main.h"
/**
 * printstring - write a string
 * @args: macro for the variadic function
 * Return: the number of characters printed or failure code
 */
int printstring(va_list args)
{
	char *s = va_arg(args, char *);
	int size = 0;

	if (s)
	{
		for (; s[size] != '\0';)
			size++;
		return (write(1, s, size));
	}
	return (0);
}

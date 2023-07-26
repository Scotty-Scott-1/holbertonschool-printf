#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
* print_string - writes the value of c and returns count
* @args: macro of args
* Return: Number of characters printed
*/
int print_string(va_list args)
{
	char *c = va_arg(args, char *);
	int i = 0, printed_characters = 0;

	if (c == NULL)
		return (write(1, "(null)", 6));

	while (c[i] != '\0')
		i++;

	printed_characters = write(1, c, i);
	return (printed_characters);
}

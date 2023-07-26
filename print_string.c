#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
* print_string - writes the value of c and returns count
* @args: macro of args
* Return: int
*/
int print_string(va_list args)
{
	char *c = va_arg(args, char *);
	int i = 0;
	int j = 0;

	if (c == NULL)
	{
		return (write(1, "(null)", 6));
	}
	while (c[i] != '\0')
	{
		i++;
	}
	j = write(1, c, i);
	return (j);
}

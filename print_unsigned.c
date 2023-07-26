#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
* function_unsigned - writes the value of c and returns count
*
* @args: macro of args
* Return: int
*/
int function_unsigned(va_list args)
{
	char temp[10];
	unsigned int number = va_arg(args, unsigned int);
	int i = 0;
	unsigned int write_v = 0;

	while (number > 0)
	{
		temp[i++] = number % 10 + '0';
		number = number / 10;
	}
	while (i >= 0)
	{
		write_v = write_v + write(1, &temp[i], 1);
		i--;
	}

return (write_v);
}



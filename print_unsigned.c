#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
* print_unsigned - writes the value of c and returns count
*
* @args: macro of args
* Return: number of bytes printed or -1
*/
int print_unsigned(va_list args)
{
	char temp[10];
	unsigned int number = va_arg(args, unsigned int);
	int i = 0;
	unsigned int write_v = 0;


	do {
		temp[i++] = number % 10 + '0';
		number = number / 10;
	} while (number > 0);
	i--;
	while (i >= 0)
	{
		write_v = write_v + write(1, &temp[i], 1);
		i--;
	}

return (write_v);
}



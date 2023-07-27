#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
* print_binary - writes the value in binary
* @args: macro of args
* Return: number of bytes printed or -1
*/
int print_binary(va_list args)
{
	unsigned int number = va_arg(args, unsigned int);
	int i = 0, temp[32];
	unsigned int write_v = 0;


	do {
		temp[31 - i++] = number % 2 + '0';
		number = number / 2;
	} while (number > 0);
	i--;
	while (i >= 0)
	{
		write_v = write_v + write(1, &temp[31 - i], 1);
		i--;
	}

return (write_v);
}

#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
* print_heXa - writes the value of c and returns count
*
* @args: macro of args
* Return: number of bytes printed or -1
*/
int print_heXa(va_list args)
{
	char temp[10];
	unsigned int number = va_arg(args, unsigned int);
	int i = 0;
	unsigned int write_v = 0;


	do {
		temp[i] = number % 16 + '0';
		if (temp[i] >= 58)
		{
			temp[i] += 7;
		}
		number = number / 16;
		i++;
	} while (number > 0);
	i--;
	while (i >= 0)
	{
		write_v = write_v + write(1, &temp[i], 1);
		i--;
	}

return (write_v);
}

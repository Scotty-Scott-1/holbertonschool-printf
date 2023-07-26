#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
* print_hexa - writes the value of c and returns count
*
* @args: macro of args
* Return: int
*/
int print_hexa(va_list args)
{
	char temp[10];
	unsigned int number = va_arg(args, unsigned int);
	int i = 0;
	unsigned int write_v = 0;

	while (number > 0)
	{
		temp[i] = number % 16 + '0';
		if (temp[i] >= 58)
		{
			temp[i] += 39;
		}
		number = number / 16;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write_v = write_v + write(1, &temp[i], 1);
		i--;
	}

return (write_v);
}

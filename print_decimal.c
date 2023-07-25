#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
* function_dec - writes the value of c and returns count
*
* @args: macro of args
* Return: int
*/
int function_dec(va_list args)
{
	int number = va_arg(args, int);
	int write_v = 0;
	int i = 0;
	char temp[10];

	if (number < 0)
	{
		write_v = write_v + write(1, "-", 1);
		number = -number;
	}
	if (number == 0)
	{
		temp[i] = '0';
		i++;
	}
	else
	{
		while (number > 0)
		{
			temp[i++] = number % 10 + '0';
			number = number / 10;

		}
	}
	while (i >= 0)
	{
		write_v += write(1, &temp[i], 1);
		i--;
	}

return (write_v);

}

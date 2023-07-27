#include "main.h"
/**
* print_oct - writes the value of c and returns count
*
* @args: macro of args
* Return: int
*/
int print_oct(va_list args)
{
	char temp[11];
	unsigned int number = va_arg(args, unsigned int);
	int i = 0;
	unsigned int write_v = 0;

	while (number >= 1)
	{
		temp[i] = number % 8 + '0';
		number = number / 8;
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

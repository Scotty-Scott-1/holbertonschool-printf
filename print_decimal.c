#include "main.h"
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>
/**
* print_decimal - writes the value of c and returns count
*
* @args: macro of args
* Return: int
*/
int print_decimal(va_list args)
{
	int number = va_arg(args, int);
	int write_v = 0;
	int i = 0;
	char temp[10];

	if (number == INT_MIN)
		return (write(1, "-2147483648", 11));
	if (number == 0)
		return (write(1, "0", 1));
	if (number < 0)
	{
		write_v = write_v + write(1, "-", 1);
		number = -number;
	}
	while (number > 0)
	{
		temp[9 - i++] = number % 10 + '0';
		number = number / 10;
	}
	write_v += write(1, (temp + 9 - i + 1), i);

return (write_v);

}

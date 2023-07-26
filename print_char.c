#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
* function_char - writes the value of c and returns count
*
* @args: macro of args
* Return: int
*/
int function_char(va_list args)
{
	int count = 0;
	int c = va_arg(args, int);

	count = write(1, &c, 1);
	return (count);
}


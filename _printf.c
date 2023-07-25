#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
* _printf - a copy of the printf function
*
* @format: strings, chars, vars
* Return: int
*/
int _printf(const char *const format, ...)
{
	int i = 0, j = 0, write_v = 0;
	va_list args;
	ref_t array_of_funcs[] = {
	{"c", function_char},
	{"s", function_string},
	};

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				write_v = write_v + write(1, "%", 1);
				i++;
			}
			else
			{
				j = 0;

				while (j < 2)
				{
					if (format[i + 1] == *array_of_funcs[j].ref)
					{
						write_v = write_v + array_of_funcs[j].func(args);
						break;
					}
					j++;
				}
				if (j < 2)
				{
					i = i + 1;
				}
				else
				{
					write_v = write_v + write(1, "%", 1);
				}
			}
		}
		else
		{
			write_v = write_v + write(1, &format[i], 1);
		}

		i++;
	}
va_end(args);
return (write_v);
}




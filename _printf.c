#include "main.h"
/**
* _printf - a copy of the printf functions
*
* @format: strings, chars, var
* Return: int
*/
int _printf(const char *const format, ...)
{
	int i = 0, j = 0, write_v = 0;
	va_list args;
	ref_t array_of_funcs[] = {{"c", function_char}, {"s", function_string},
	{"u", function_unsigned}, {"d", function_dec}, {"i", function_dec},
	{"x", function_hexa}, {"X", function_heXa}, {"o", function_oct},};

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
				for (j = 0; j < 8; j++)
				{
					if (format[i + 1] == *array_of_funcs[j].ref)
					{
						write_v = write_v + array_of_funcs[j].func(args);
						break;
					}
				}
				if (j < 8)
					i++;
				else
					write_v = write_v + write(1, "%", 1);
			}
		}
		else
			write_v = write_v + write(1, &format[i], 1);
		i++;
	}
va_end(args);
return (write_v);
}

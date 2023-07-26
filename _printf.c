#include "main.h"

/**
 * _printf - write a string with multiple variables
 *
 * @format: the list of chars & variables to print
 *
 * Return: the number of characters printed or failure code
 */

int _printf(const char *format, ...)
{
	f_struct coresponding_char_to_funct[] = {{'c', printchar},
	{'s', printstring}, {'d', printint}, {'i', printint}, {'u', printunsigned},
	{'o', printoctal}, {'x', printhexa}, {'X', printhexa}, {'p', printpointer}};
	va_list args;
	int i = 0, j, w_value = 0;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				w_value = w_value + write(1, "%", 1);
				i++;
			}
			else
			{
				for (j = 0; j < 9 ; j++)
				{
					if (format[i + 1] == coresponding_char_to_funct[j].func_char)
					{
						w_value = w_value + coresponding_char_to_funct[j].func_to_call(args);
						break;
					}
				}
				if (j != 9)
					i = i + 1;
				else
					w_value = w_value + write(1, "%", 1);
			}
		}
		else
			w_value = w_value + write(1, &format[i], 1);
		i++;
	}

	va_end(args);
	return (w_value);
}

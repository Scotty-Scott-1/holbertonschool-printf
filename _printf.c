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
	f_struct pair_char_and_func[] = {{'c', print_char},
	{'s', print_string}, {'d', print_int}, {'i', print_int}, {'u', print_unsigned},
	{'o', print_octal}, {'x', print_hexa}, {'X', print_heXa}, {'p', print_pointer}};
	va_list args;
	int i = 0, j, lenght = 0;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				lenght = lenght + write(1, "%", 1);
				i++;
			}
			else
			{
				for (j = 0; j < 9 ; j++)
				{
					if (format[i + 1] == pair_char_and_func[j].func_char)
					{
						lenght = lenght + pair_char_and_func[j].func_to_call(args);
						break;
					}
				}
				if (j != 9)
					i = i + 1;
				else
					lenght = lenght + write(1, "%", 1);
			}
		}
		else
			lenght = lenght + write(1, &format[i], 1);
		i++;
	}

	va_end(args);
	return (lenght);
}

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
	f_struct pair_char_and_func[] = {{'c', print_char}, {'s', print_string},
	{'d', print_decimal}, {'i', print_decimal}, {'u', print_unsigned},
	{'o', print_oct}, {'x', print_hexa}, {'X', print_heXa},
	{'p', print_pointer}};
	va_list args;
	int i = 0, j, length = 0;

	va_start(args, format);
	if (format == NULL)
	return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{	length = length + write(1, "%", 1);
				i++; }
			else
			{
				for (j = 0; j < 9 ; j++)
				{
					if (format[i + 1] == pair_char_and_func[j].func_char)
					{	length = length + pair_char_and_func[j].func_to_call(args);
						break; }
				}
				if (j != 9)
					i = i + 1;
				else
				{
					if (format[i + 1] != '\0')
					length = length + write(1, "%", 1);
					if (format[i + 1] == '\0')
						length = -1; }
			}
		}
		else
			length = length + write(1, &format[i], 1);
		i++; }
	va_end(args);
	return (length);
}

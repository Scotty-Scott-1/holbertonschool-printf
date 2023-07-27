#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
int _printf(const char *format, ...);

/**
 * struct funct_structure - store a char and the function that
 * we need to call when we match with the caracter
 * @func_char: the char we search
 * @func_to_call: the function to call when the chars matches
 */
typedef struct funct_structure
{
	char func_char;
	int (*func_to_call)();
} f_struct;

int print_char(va_list args);
int print_string(va_list args);
int print_decimal(va_list args);
int print_unsigned(va_list args);
int print_oct(va_list args);
int print_hexa(va_list args);
int print_heXa(va_list args);
int print_pointer(va_list args);
int print_binary(va_list args);
#endif /* MAIN_H */

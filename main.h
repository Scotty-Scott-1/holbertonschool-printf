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

int printchar(va_list args);
int printstring(va_list args);
int printint(va_list args);
int printunsigned(va_list args);
int printoctal(va_list args);
int printhexa(va_list args);
int printpointer(va_list args);
#endif /* MAIN_H */

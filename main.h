#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

/**
* struct struct_of_funcs - a structure that contains 2 members
* Description: a struct
* @ref: a reference
* @func:a pointer function
*/
typedef struct struct_of_funcs
{
	char *ref;
	int (*func)();
} ref_t;
int _printf(const char *format, ...);

int function_dec(va_list args);
int function_string(va_list args);
int function_char(va_list args);


#endif /* MAIN_H */

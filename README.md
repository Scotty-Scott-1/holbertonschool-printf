#_printf

## Table of contents
- [Project description](#Project_description)
- [Requirements](#Requirements)
- [Useage](#Useage)
- [Testing](#Testing)


# Project_description:
This project attemps to recreate the function printf from the standard stdio library. It is to be submitted for evaluation before 28 July 2023. In this project standard library function are not allowed; the only exceptions being write, malloc, free, va_start, va_end, va_copy, va_arg.

# Requirements
ubuntu-22.04 or later

# Useage
To test this project use the gcc compiler and include all related file and output an executable with the desired title.
The list of files to include are:
- _printf.c
- main.h
- print_decimal.c
- print_hexa.c
- print_heXa.c
- print_char.c
- print_oct.c
- print_string.c
- print_unsigned.c

For the purposes of testing a main.c file is used (and required) to pass arguments to _printf.c file.

Execute the compiled file

# Testing
in this example the value of printf("Let's try to printf a simple sentence.\n"); is stored in the int variable len. Our own _printf function is called with len as an argument.

	len = _printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);

Once our function determines that the character passed to the argumrnt "format" in not a format identifer, it runs through a loop to where when format[i] matches a character in an array the loop stops. The corrresponding function is then called, in this case, the function print_decimal. In said function, the if the argument passed is the min value of an int, it writes the min value and returns the amount of bytes written. Else if the the argument is negative and greater than the min value the '-' character is written and the number is converted to a postive value, and stored in a variable. While the variable value is greater than 0 then number is stored in an array starting from the last digit. This array is written starting from the last digit and the amount of bytes writted is returned.

For example the value of len is a passed a an argument and the return value is Length:[39, 39].




#_printf

##Table of contents
- [Project description](#Project_description)
- [Requirements](#Requirements)
- [Useage](#Useage)
- [Testing](#Testing)


#Project_description:
This project attemps to recreate the function printf from the standard stdio library. It is to be submitted for evaluation before 28 July 2023. In this project standard library function are not allowed; the only exceptions being write, malloc, free, va_start, va_end, va_copy, va_arg.

#Requirements
ubuntu-22.04 or later

#Useage
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
#Testing
in this example the value of printf("Let's try to printf a simple sentence.\n"); is stored in the int variable len. Our own _prtinf function is called wtih len as an argument.

	len = _printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);

Once our function determines that the character passed in not a format identifer runs through a loop to 




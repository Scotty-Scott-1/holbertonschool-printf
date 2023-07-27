# _printf

## Table of contents
- [Project description](#Project_description)
- [Requirements](#Requirements)
- [Flow_chart](#Flow_chart)
- [Useage](#Useage)
- [Testing](#Testing)
- [Contributing](#Contributing)
- [Credits](#Credits)


## Project_description:
This project attemps to recreate the function printf from the standard stdio library. This function should write any characters, strings, decimals, ints, unsigned ints, hexidecials, octals passed as arguments and return the number of bytes written.

It is to be submitted for evaluation before 28 July 2023. In this project standard library function are not allowed; the only exceptions being write, malloc, free, va_start, va_end, va_copy, va_arg.

## Requirements
- ubuntu-22.04 or later
- gcc later 11.3.0 or later

## Flow_chart

![flow_chart](https://github.com/Scotty-Scott-1/holbertonschool-printf/blob/common/Flowchart.png)


## Useage
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

For convenience use this command to compile: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

A main.c file is used (and required) to pass arguments to _printf.c file.

Execute the compiled file using ./a.out

## Testing
Test 1:

In this example the value of printf("Let's try to printf a simple sentence.\n"); is stored in the int variable len. Our own _printf function is called with len as an argument.

	len = _printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);

Once our function determines that the character passed to the argumrnt "format" in not a valid format identifer, it runs through a loop to where when format[i] matches a character in an array the loop stops. The corrresponding function is then called, in this case, the function print_decimal. In said function, the if the argument passed is the min value of an int, it writes the min value and returns the amount of bytes written. Else if the the argument is negative and greater than the min value the '-' character is written and the number is converted to a postive value, and stored in a variable. While the variable value is greater than 0 then number % 10 + '0' is stored in an array starting a the last position. The number variable value is divied by 10 and the loop continues This array is written starting from the last digit and the amount of bytes writted is returned.

In this example if the value of len is 39 and is passed to an argument the return value is Length:[39, 39].
***
Test 2:

If an unknown (invalid) format specifier in a string is passed as an argument the _printf function to will print the characters. The function will check whether format[i] is "%". If true the function will check whether the following character format[i + 1] is "%". If true "%" is written and i is incremented by 1. At the end of the loop i is incremented by 1 and the loop restarts if it's conditions remain true.

In another case, if an unknown (invalid) format specifier in a string is passed as an argument the _printf function to will print the characters. The function will check whether format[i] is "%". If true the function will check whether the following character format[i + 1] is "%". If false the next character is evaluated against characters in an array of structs. Each character corresponds to a function which is subsequently called. If no matches are found "%" is written and at the end of the loop i is incremented by 1 and the loop restarted as long as it's conditions remain true.

In another case, if an unknown (invalid) format specifier in a string is passed as an argument the _printf function to will print the characters. The function will check whether format[i] is "%". If true the function will check whether the following character format[i + 1] is "%". If false the next character is evaluated against characters in an array of structs. Each character corresponds to a function which is subsequently called. If a match is found a the corresponding function is called. Its return value is written and i is incremented by 1. The loop restarted as long as it's conditions remain true.

As discussed the following function will return "%r"
_printf("Unknown:[%%r]\n")

Likewise the following function will return "%r"
_printf("Unknown:[%r]\n");

## Contributing

Each collaborator works on the common git branch of the the holbertonschool-printf. The methodology is to use small commits. When a commit is made by collaborator A, collaborator B git pulls the common branch before making any changes. Likewise when a commit is made by collaborator B, collaborator A git pulls the common branch before making any changes. Communication is essential for this project.

## Credits
Worked on this project:
- Erwan Rocal
- Solomon William

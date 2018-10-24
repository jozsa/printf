# 0x10. C- printf
## Description

In this project, we created our own printf function handling various cases

File | Task
-----|-----
holberton.h | Header file containing all prototype functions and structs used in this project
_printf.c | The actual _printf function to print the string as well as whatever argument corresponds with each format specifier
print_functions.c | The file containing the printing functions called and pointed to by _printf.c
conversion_functions.c | The file containing the conversion functions called to and pointed to by _printf.c

Format Specifier | Data Type | Prototype Function
-----|-----|-----
%c | char | print_char
%d | base 10 decimal number | print_int
%i | base 10 integer | print_int
%s | string/array of chars | print_str
%% | percent sign | print_per
%b | binary number | print_bin
%o | octal number | print_oct
%u | unsigned integer | print_u
%X | hexadecimal number (uppercase) | print_Xhexa

 Function | Description
-----|-----
_printf | Prints a formatted string to standard output
_putchar | Prints a single character to standard output (the basis for all of our printing)
print_char | Prints to standard output the single character passed to _printf as an argument 
print_int | Prints to standard output the base 10 number passed to _printf as an argument
print_str | Prints to standard output the string passed to _printf as an argument
print_per | Prints to standarad output a percent sign passed to _printf as an argument
print_bin | Converts a decimal number passed to _printf to a binary number and prints it to standard output
print_oct | Converts a decimal number passed to _printf to a octal number and prints it to standard output
print_u | Prints to standard output a number passed to _printf as an unsigned integer
print_Xhexa | Converts a decimal number passed to _printf to a hexadecimal number and prints it to standard output
*convert | Converts a number according to the base of that number (e.g. 2 for binary, 8 for octal, 16 for hexadecimal)

## Authors/Collaborators
Allison Weiner & Phu Truong
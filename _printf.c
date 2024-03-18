#include "main.h"

/**
 * _printf - A custom implementation of printf.
 * @format: A string containing format specifiers.
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
int print;
convert cases_list[] = {
{"c", print_char},
{"s", print_string},
{"%", print_percent},
{"d", print_integer},
{"i", print_integer},
{NULL, NULL}
};
va_list arg_list;

if (format == NULL)
return (-1);
va_start(arg_list, format);
/*Calling parser function*/
print = cases(format, cases_list, arg_list);
va_end(arg_list);
return (print);
}

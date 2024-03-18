#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include "main.h"

/**
 * cases - selects the appropriate format specifiers
 * @convert_list: A list of all the expected functions.
 * @arg_list: A list containing all the argumentents passed to the program
 * @format: the format specifier
 * Return: printed characters
 */
int cases(const char *format, convert convert_list[], va_list arg_list)
{
int i, j, value, print;
print = 0;
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
for (j = 0; convert_list[j].operator != NULL; j++)
{
if (format[i + 1] == convert_list[j].operator[0])
{
value = convert_list[j].assoc(arg_list);
if (value == -1)
return (-1);
print += value;
break;
}
}
if (convert_list[j].operator == NULL && format[i + 1] != ' ')
{
if (format[i + 1] != '\0')
{
_putchar(format[i]);
_putchar(format[i + 1]);
print = print + 2;
}
else
return (-1);
}
i += 1;
}
else
{
_putchar(format[i]);
print++;
}
}
return (print);
}

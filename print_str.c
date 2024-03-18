#include "main.h"

/**
 * print_string - writes a string to stdout
 * @list: the argument containing the string
 * Return: updated count of printed characters
 */
int print_string(va_list list)
{
int i;
char *str;

str = va_arg(list, char *);
if (str == NULL)
str = "(null)";
for (i = 0; str[i] != '\0'; i++)
_putchar(str[i]);
return (i);
}

#include "main.h"
#include <unistd.h>

/**
 * print_char - prints a character
 * @list: the arguments to use
 * Return: printed characters
 */
int print_char(va_list list)
{
_putchar(va_arg(list, int));
return (1);
}

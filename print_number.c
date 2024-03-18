#include "main.h"

/**
 * print_num - prints a number send to this function
 * @args: List of arguments
 * Return: The number of arguments printed
 */
int print_num(va_list args)
{
int n;
int dividing;
int length;
unsigned int number;

n  = va_arg(args, int);
dividing = 1;
length = 0;

if (n < 0)
{
length += _putchar('-');
number = n * -1;
}
else
number = n;

for (; number / dividing > 9; )
dividing *= 10;

for (; dividing != 0; )
{
length += _putchar('0' + number / dividing);
number %= dividing;
dividing /= 10;
}

return (length);
}

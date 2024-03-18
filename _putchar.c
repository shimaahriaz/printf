#include "main.h"

/**
 * _putchar - prints/writes character
 * @character: The character to print
 * Return: On success 1.
 */

int _putchar(char character)
{
return (write(1, &character, 1));
}

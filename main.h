#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
* struct converter - defines a structure for symbols and functions
*
* @operator: The operator
* @assoc: The function associated
*/
struct converter
{
char *operator;
int (*assoc)(va_list);
};
typedef struct converter convert;

int cases(const char *format, convert convert_list[], va_list arg_list);
int _printf(const char *format, ...);
int _putchar(char);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_num(va_list);
#endif

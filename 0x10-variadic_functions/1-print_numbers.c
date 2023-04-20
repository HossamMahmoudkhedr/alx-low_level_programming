#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: the string to be printed between numbers
 * @n: the number of numbers to be printed
 * @...: ellipsis
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int value;
va_list arg;

va_start(arg, n);

for (i = 0; i < n; i++)
{
value = va_arg(arg, int);
if (separator != NULL)
{
if(i == n - 1){
printf("%d", value);
}
else
printf("%d%s", value, separator);
}
else
{
printf("%d", value);
}
}
printf("\n");
va_end(arg);
}

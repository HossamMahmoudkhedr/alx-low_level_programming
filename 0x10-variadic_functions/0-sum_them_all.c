#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: number of arguments
 * @...: ellipsis
 * Return: 0 if n = 0, or the sum of the number otherwise
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum, value;
va_list arg;
sum = 0;

if (n == 0)
{
return (0);
}
va_start(arg, n);

for (i = 0; i < n; i++)
{
value = va_arg(arg, unsigned int);
sum += value;
}

va_end(arg);
return (sum);
}

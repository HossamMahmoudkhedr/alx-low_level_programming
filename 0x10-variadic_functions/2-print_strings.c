#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 *
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * @...: ellipsis
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *value;
va_list arg;

va_start(arg, n);

for (i = 0; i < n; i++)
{
value = va_arg(arg, char *);
if (value == NULL)
{
value = "(nil)";
}
if (separator == NULL || i == n - 1)
{
printf("%s", value);
}
else
{
printf("%s%s", value, separator);
}
}
printf("\n");
va_end(arg);
}

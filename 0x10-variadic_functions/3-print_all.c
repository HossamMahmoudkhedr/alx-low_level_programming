#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - prints anything
 *
 * @format: list of types of arguments passed to the function
 * @...: ellipsis
 * Return: void
 */

void print_all(const char *const format, ...)
{
int i;
double f;
char *str;
va_list arg;
i = 0;
va_start(arg, format);
while (format && format[i])
{
switch (format[i++])
{
case 'c':
printf("%c", va_arg(arg, int));
break;
case 'i':
printf("%d", va_arg(arg, int));
break;
case 'f':
f = va_arg(arg, double);
printf("%f", f);
break;
case 's':
str = va_arg(arg, char *);
if (str)
{
printf("%s", str);
}
else
{
printf("(nil)");
}
break;
default:
continue;
}
if (format[i])
{
printf(", ");
}
}
va_end(arg);
printf("\n");
}

#include <stdio.h>

/**
 * _puts_recursion -  prints a string, followed by a new line
 *
 * @s: the string to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
putchar(*s);
if (*s != '\0')
{
_puts_recursion(s + 1);
}
else
{
putchar('\n');
}
}

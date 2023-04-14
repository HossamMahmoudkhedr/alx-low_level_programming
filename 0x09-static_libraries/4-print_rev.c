#include <stdio.h>
#include "2-strlen.c"
#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: the string to be printed in reverse
 * Return: void
 */
void print_rev(char *s)
{
int i;
int length;
length = _strlen(s);
i = length - 1;

while (i >= 0 && i < length)
{
putchar(s[i]);
i--;
}
putchar('\n');
}

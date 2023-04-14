#include <stdio.h>
#include "main.h"

/**
 * _puts - print a string
 *
 * @str: the string to be printed
 * Return: void
 */

void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
putchar(str[i]);
i++;
}
putchar('\n');
}

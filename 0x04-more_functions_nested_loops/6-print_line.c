#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: the number of lines to be drawn
 * Return: void
 */

void print_line(int n)
{
int i;
i = 1;

while (i <= n && i > 0)
{
putchar('_');
i++;
}

putchar('\n');
}

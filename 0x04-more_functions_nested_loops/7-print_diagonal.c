#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: the number of times the character \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
int i;
int j;
i = 1;

while (i <= n && i > 0)
{
j = 0;
while (j < i)
{
putchar(' ');
j++;
}
putchar('\\');
putchar('\n');
i++;
}

putchar('\n');
}

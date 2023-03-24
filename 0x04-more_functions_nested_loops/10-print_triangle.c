#include <stdio.h>
#include "main.h"

/**
 * print_triangle - print a triangle aligned right, using '#'
 *
 * @size: Size of triangle
 * Return: void
 */
void print_triangle(int size)
{
int c, i, j;

c = 0;
i = size - 1;
while (c < size)
{
i = size - 1 - c;
j = c + 1;
while (i > 0)
{
putchar(' ');
i--;
}
while (j > 0)
{
putchar('#');
j--;
}
putchar('\n');
c++;
}

if (size <= 0)
putchar('\n');
}

#include <stdio.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to a string
 * @b: constant byte
 * @n: number of bytes
 * Return: the string
 */

void *_memset(void *s, int b, unsigned int n)
{
unsigned int i;

while (n--)
{
s[i] = b;
i++;
}

return (s);
}

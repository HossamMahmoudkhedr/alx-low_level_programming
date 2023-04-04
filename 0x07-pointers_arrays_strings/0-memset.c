#include <stdio.h>

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

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
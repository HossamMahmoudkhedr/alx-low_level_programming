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

char *_memset(char *s, char b, unsigned int n)
{
while (n--)
{
*s++ = b;
}
return (s);
}

#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * @n: Maximum number of bytes to be copied from src
 * Return: Pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;

for (i = 0; dest[i] != '\0'; i++)
{
continue;
}
for (j = 0; src[j] != '\0' && j < n; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0';
return (dest);
}

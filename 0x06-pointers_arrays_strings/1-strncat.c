#include <stdio.h>
#include <string.h>

/**
 * _strncat - Concatenates two strings
 *
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * @n: Maximum number of bytes to be copied from src
 *
 * Return: Pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int destSize;

i = 0;
destSize = strlen(dest);

while (dest[i] != '\0')
{
dest[destSize] = src[i];
if (i == n - 1)
{
break;
}
i++;
destSize++;
}

return (dest);
}

#include <stdio.h>
#include <string.h>

/**
 * *_strncat - concatenates two strings and use at most n bytes from src
 *
 * @dest: the first string
 * @src: the second string which will be appended to the first one
 * @n: number of bytes that will be used from src
 * Return: the concatenated string (dest)
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

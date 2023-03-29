#include <stdio.h>
#include <string.h>

/**
 * _strncat - Write a function that concatenates two strings
 *
 * @dest: This is the output  dest
 * @src: This is the input src
 * @n: This is the number bytes fro src
 *
 * Return: This is my return
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

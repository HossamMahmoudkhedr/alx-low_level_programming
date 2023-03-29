#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - Write a function that copies a string, with number of bytes
 * @dest: This is the output dest
 * @src: This is the input source
 * @n: This is the number of bytes to copy
 *
 *Return: Copied string with the number of bytes
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;

i = 0;
while (i < n && *(src + i))
{
*(dest + i) = *(src + i);
i++;
}
while (i < n)
{
*(dest + i) = '\0';
i++;
}
return (dest);
}

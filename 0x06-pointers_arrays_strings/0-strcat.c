#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - concatenates two strings (appends the src string to the dest string)
 *
 * @dest: pointer to the first string
 * @src: pointer to the second string which will be appended to the first one
 *
 * Return: pointer to the concatenated string (dest)
 */

char *_strcat(char *dest, char *src)
{
int i;
int destSize;

i = 0;
destSize = strlen(dest);

while (dest[i] != '\0')
{
dest[destSize] = src[i];
i++;
destSize++;
}

return (dest);
}

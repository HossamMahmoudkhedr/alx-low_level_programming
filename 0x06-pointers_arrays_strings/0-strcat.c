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
int i, j;

for (i = 0; dest[i] != '\0'; i++)
;
for (j = 0; src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}
return (dest);
}

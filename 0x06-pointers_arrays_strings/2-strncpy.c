#include <stdio.h>
#include <string.h>

/**
 *  *_strncpy -  copies a string (copies src to dest)
 *
 * @dest: the main string
 * @src: the string to be copied
 * @n: number of bytes that will be used from src
 * Return: the string (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
int srcSize;

i = 0;
srcSize = strlen(src);

while (i < n)
{
if (src[i] == '\0')
{
break;
}
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}

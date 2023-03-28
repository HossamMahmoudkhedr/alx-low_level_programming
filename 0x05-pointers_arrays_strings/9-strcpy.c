#include <stdio.h>
#include <string.h>

/**
 * @*_strcpy - copies the string pointed to by src
 *
 * @dest: the pointer which would have the copy of src
 * @src: the pointer which has the original value
 * @Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
int length;

i = 0;
length = strlen(src);
while (i < length)
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 *
 * @str: the string to be dublicated
 * Return: returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
int size;
char *newStr;
int i;
size = 0;

if (strcmp(str, "") == 0)
{
size += 1;
}

if (size == 0)
{
return (NULL);
}
else
{
for (i = 0; str[i] != '\0'; i++)
{
size++;
}
newStr = malloc(sizeof(char) * size);
}

for (i = 0; i < size; i++)
{
newStr[i] = str[i];
}
return (newStr);
}

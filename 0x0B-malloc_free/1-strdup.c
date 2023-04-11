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
int len, i;
char *new_str;
len = 0;
if (str == NULL)
{
return (NULL);
}

while (str[len] != '\0')
{
len++;
}

new_str = (char *)malloc(len + 1);

if (new_str == NULL)
{
return (NULL);
}

for (i = 0; i <= len; i++)
{
new_str[i] = str[i];
}

return (new_str);
}

#include <stdio.c>

/**
 * _strlen - returns the length of a string
 *
 * @s: string to be counted
 * Return: the number of characters in the string
 */
int _strlen(char *s)
{
int i;
int c;
i = 0;
c = 0;
while(s[i] != '\0')
{
c++;
i++;
}

return (c);
}

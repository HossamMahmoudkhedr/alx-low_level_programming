#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: the string to be counted
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
int length = 1;

if (*s != '\0')
{

length += _strlen_recursion(s + 1);
}
else
{
length -= 1;
}
return (length);
}

#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks if the character is uppercase or not
 *
 * @c: is the character to be checked
 * Return: 1 for uppercase letters and 0 otherwise
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}

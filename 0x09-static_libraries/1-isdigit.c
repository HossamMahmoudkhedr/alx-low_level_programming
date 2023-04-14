#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks if the number is a digit or not
 *
 * @c: is the number to be checked
 * Return: 1 for digits and 0 otherwise
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}

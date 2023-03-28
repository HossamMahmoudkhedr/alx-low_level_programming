#include <stdio.h>
#include <ctype.h>
/**
 * _atoi - convert a string to an integer
 *
 * @s: the string to be converted
 * Return: the integer
 */

int atoi(const char *str)
{
int num = 0, sign = 1;

// Ignore leading white space
while (*str == ' ')
{
str++;
}

// Check for sign
if (*str == '-' || *str == '+')
{
sign = (*str == '-') ? -1 : 1;
str++;
}

// Convert digits to integer
while (isdigit(*str))
{
num = num * 10 + (*str++ - '0');
}

return (sign *num);
}

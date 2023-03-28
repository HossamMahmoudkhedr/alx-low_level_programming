#include <stdio.h>
#include <ctype.h>
/**
 * convert a string to an integer
 *
 * @s: the string to be converted
 * Return: the integer
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;

while (isspace(*s))
{
s++;
}

if(*s == '+' || *s == '-')
{
if(*s == '-')
{
sign = -1;
}
s++;
}

while (isdigit(*s))
{
result = result * 10 + (*s - '0');
s++;
}

return result * sign;
}

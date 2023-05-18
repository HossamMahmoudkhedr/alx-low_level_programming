#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: the string to be converted
 * Return: the unsigned int value
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int number;

if (b == NULL)
{
return (0);
}

for (n = 0; *b != 0; b++)
{
if (*b == '0')
{
number = number << 1;
}
else if (*b == '1')
{
number = number << 1;
number++;
}
else
{
return (0);
}
}
return (number);
}

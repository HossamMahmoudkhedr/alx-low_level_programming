#include "main.h"

/**
 * get-bit - returns the value of a bit at a given index
 *
 * @n: the number
 * @index: index of bit
 * Return: value of bit, or -1 otherwise
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int x;

if (index > 63)
{
return (-1);
}
x = 1 << index;
return ((n & x) > 0);
}

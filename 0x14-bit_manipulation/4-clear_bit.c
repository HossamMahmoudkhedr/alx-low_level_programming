#include "main.h"
/**
 * clear_bit - clears the value of a bit at index
 *
 * @n: number to get bit from
 * @index: index of bit
 * Return: value of bit, or -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
{
return (-1);
}
else
{
*n = *n & ~(1ul << index);
return (1);
}
}

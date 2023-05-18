#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 *
 * @n: first number
 * @m: second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m;
unsigned int c = 0;

while (xor)
{
if (xor & 1ul)
{
c++;
}
xor = xor >> 1;
}
return (c);
}

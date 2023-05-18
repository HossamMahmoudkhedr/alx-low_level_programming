#include <unistd.h>
#include <limits.h>

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: the number
 * Return: void
 */

void print_binary(unsigned long int n)
{
unsigned long int bit = 1ul << 63;
char character = '0';

while (!(bit & n) && bit != 0)
{
bit = bit >> 1;
}

if (bit == 0)
{
write(1, &character, 1);
}

while (bit)
{
if (bit & n)
{
character = '1';
}
else
{
character = '0';
}
write(1, &character, 1);
bit = bit >> 1;
}
}

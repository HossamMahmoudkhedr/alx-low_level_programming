#include <stdio.h>
#include <unistd.h>

/**
 * print_number -print number putchar
 * @n:integer
 * Return: void
 */


int _putchar(char c)
{
    return (write(1, &c, 1));
}
void print_number(int n)
{
int x = n;

if (n < 0)
{
_putchar('-');
x = -x;
}
if ((x / 10) > 0)
{
print_number(x / 10);
}

_putchar(x % 10 + '0');
}

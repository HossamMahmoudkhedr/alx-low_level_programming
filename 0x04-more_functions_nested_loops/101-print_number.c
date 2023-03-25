#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * print_number - Function that prints an integer.
 * @n: int type number
 * Description: Can only use _putchar to print.
 */

void print_number(int n)
{
int digits[100];
int i = 0;
int j = 0;
if (n < 0)
{
n *= -1;
putchar('-');
}

if (n == 0)
{
putchar(n + '0');
}
if (n > 0)
{

while(n > 0)
{
digits[i] = n % 10;
n /= 10;
i++;
}

for (j = i - 1; j >= 0; j--)
{
putchar(digits[j] + '0');
}
}
}

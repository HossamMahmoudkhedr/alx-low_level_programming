#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints the numbers from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
int i = 0;
int j;
int divi;
int mod;

while (i < 10)
{
j = 0;
while (j <= 14)
{
if (j >= 10)
{
divi = j / 10;
putchar(divi + '0');
}
mod = j % 10;
putchar(mod + '0');
j++;
}
putchar('\n');
i++;
}
}

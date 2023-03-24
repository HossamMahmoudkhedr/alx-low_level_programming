#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints the numbers from 0 to 14
 *
 * Return : void
 */

void more_numbers(void)
{
int i=0;
int j;

while (i < 10)
{
j = 0;
while (j <= 14)
{
if (j >= 10)
{
_putchar((j / 10) + '0');
}
_putchar((j % 10) + '0');
j++;
}
_putchar('\n');
i++;
}
}

#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints all the numbers from 0 to 9
 *
 * Return: void
 */

void print_numbers(void)
{
int i = 0;
while (i <= 9)
{
putchar(i + '0');
i++;
}

putchar('\n');

}

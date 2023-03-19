#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i = 0;

while (i < 10)
{
putchar(i + '0');
if (i == 9)
{
break;
}
else
{
putchar(',');
putchar(' ');
}

i++;
}

putchar('\n');
return (0);
}

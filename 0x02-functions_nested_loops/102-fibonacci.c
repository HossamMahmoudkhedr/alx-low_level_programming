#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int a = 1, b = 2;
int i = 3;

printf("%d, %d", a, b);

while (i < 46)
{
int c = a + b;
printf(", %d", c);
a = b;
b = c;
i++;
}

printf("\n");

return (0);
}

#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n = 0123456789;
int i = 0

char str[10];

sprintf(str, "%d", n);
while (str[i] != '\0')
{
putchar("%d", str[i]);
i++;
}

printf("\n");

return (0);
}

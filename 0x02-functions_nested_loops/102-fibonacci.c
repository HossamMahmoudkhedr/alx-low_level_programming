#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main()
{
int prev1 = 1, prev2 = 2, next_fib;

printf("%d, %d", prev1, prev2);

for (int i = 0; i < 48; i++)
{
next_fib = prev1 + prev2;
printf(", %d", next_fib);
prev1 = prev2;
prev2 = next_fib;
}

printf("\n");

return (0);
}

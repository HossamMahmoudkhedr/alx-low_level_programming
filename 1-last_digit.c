#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int lastDigit = n % 10;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (lastDigit > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, lastDigit);
}
else if (lastDigit == 0)
{
printf("Last digit of %d is %d and is 0", n, lastDigit);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0", n, lastDigit);
}

return (0);
}
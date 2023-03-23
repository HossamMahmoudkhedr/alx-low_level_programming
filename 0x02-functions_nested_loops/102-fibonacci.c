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
int a = 0;
int b = 1;
int result = 0;
while (i < 50)
{
result = a + b;
if (i == 49)
{
printf("%d", result);
}
else
{
printf("%d, ", result)
}
a = b;
b = result;
i++;
}
return (0);
}

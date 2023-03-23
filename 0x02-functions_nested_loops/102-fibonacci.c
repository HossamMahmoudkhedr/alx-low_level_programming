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
long int a = 0;
long int b = 1;
long int result = 0;
while (i < 50)
{
result = a + b;
if (i == 49)
{
printf("%ld", result);
}
else
{
printf("%ld, ", result);
}
a = b;
b = result;
i++;
}
printf("\n");
return (0);
}

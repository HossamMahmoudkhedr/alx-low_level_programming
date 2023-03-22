#include <stdio.h>

/**
 * print_to_98 - prints all the numbers from n to 98
 *
 * @n: the end of the print loop
 * Return: void
 */
void print_to_98(int n)
{
if (n < 98)
{
for (int i = n; i <= 98;i++)
{
if(i == 98){
printf("%d",i);
}
else
{
printf("%d, ",i);
}
}
}
else if (n > 98)
{
for (int i = n; i >= 98;i--)
{
if (i == 98)
{
printf("%d", i);
}
else
{
printf("%d, ", i);
}
}
}
else
{
printf("%d", 98);
}
}

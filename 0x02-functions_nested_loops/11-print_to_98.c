#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all the numbers from n to 98
 *
 * @n: the end of the print loop
 * Return: void
 */
void
print_to_98(int n)
{
if (n < 98)
{
int i =0;
while (i <= 98)
{
if(i == 98){
printf("%d",i);
}
else
{
printf("%d, ",i);
}
i++;
}
}
else if (n > 98)
{
int j = n;
while (j >= 98)
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
j--;
}
else
{
printf("%d", 98);
}
}

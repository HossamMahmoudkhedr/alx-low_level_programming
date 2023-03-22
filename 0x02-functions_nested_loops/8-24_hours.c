#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 *
 * Description: print all the minutes from 00:00 to 23:59
 * Return: void
 */
void jack_bauer(void)
{
int min1 = 0;
int min2 = 0;
int sec1 = 0;
int sec2 = 0;
while (min1 <= 2)
{
while (min2 <= 9)
{
while (sec1 <= 5)
{
while (sec2 <= 9)
{
putchar(min1 + '0');
putchar(min2 + '0');
putchar(58);
putchar(sec1 + '0');
putchar(sec2 + '0');
putchar('\n');
sec2++;
}
sec2 = 0;
sec1++;
}
sec1 = 0;
min2++;
}
min2 = 0;
min1++;
if (min1 > 2)
{
min1 = 0;
}
if (min1 == 2 && min2 == 3 && sec1 == 5 && sec2 == 9)
{
break;
}
}
}
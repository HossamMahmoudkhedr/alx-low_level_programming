#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string, followed by a new line
 *
 * @str: the string to be printed
 * Return: void
 */
void puts_half(char *str)
{
int i;
int length;

length = strlen(str);

if (length % 2 == 0)
{
i = (length / 2);
}
else
{
i = (length / 2) + 1;
}

while (i < length)
{
putchar(str[i]);
i++;
}
putchar('\n');
}

#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every other character of a string, starting with the first
 *
 * @str: the string to be printed
 * Return: void
 */

void puts2(char *str)
{
int i;
int length;

i = 0;
length = strlen(str);
while (i < length)
{
putchar(str[i]);
i += 2;
}

putchar('\n');

}

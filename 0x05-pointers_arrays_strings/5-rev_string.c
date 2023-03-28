#include <stdio.h>
#include <string.h>

/**
 * rev_string -  reverses a string
 *
 * @s: the string to be reserved
 * Return: void
 */

void rev_string(char *s)
{
int i;
int j;
int length;
char tmp;
j = 0;
length = strlen(s);
i = length - 1;

while (j < i + 1)
{
tmp = s[j];
s[j] = s[i];
s[i--] = tmp;
j++;
}
}

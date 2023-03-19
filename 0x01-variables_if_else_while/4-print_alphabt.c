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
char string[] = "abcdefghijklmnopqrstuvwxyz";

while (string[i] != '\0')
{
if (string[i] == 'q')
{
i++;
continue;
}
else if (string[i] == 'e')
{
i++;
continue;
}
else
{
putchar(string[i]);
}

i++;
}

return (0);
}

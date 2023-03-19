#include <stdio.h>
#include <ctype.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i = 0;
int j = 0;
char string[] = "abcdefghijklmnopqrstuvwxyz";

while (string[i] != '\0')
{
putchar(string[i]);
i++;
}

while (string[j] != '\0')
{
putchar(toupper(string[j]));
j++;
}

putchar('\n');

return (0);
}

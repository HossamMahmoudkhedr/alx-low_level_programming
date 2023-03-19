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
putchar(string[i]);
i++;
}
putchar('\n');
return (0);
}

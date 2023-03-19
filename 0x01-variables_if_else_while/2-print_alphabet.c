#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char string[] = "abcdefghijklmnopqrstuvwxyz";
for (int i = 0; string[i] != '\0'; i++)
{
putchar(string[i]);
}

return (0);
}

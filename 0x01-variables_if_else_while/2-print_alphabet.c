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
char string[] = "abcdefghijklmnopqrstuvwxyz/n";

while (string[i] != '\0')
{
putchar(string[i]);
i++;
}

return (0);
}

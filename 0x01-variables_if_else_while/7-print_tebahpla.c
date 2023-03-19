#include <stdio.h>
#include <ctype.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

char string[] = "abcdefghijklmnopqrstuvwxyz";
int size = strlen(string);
int i = strlen(string) - 1;

while (i < size && i >= 0)
{
putchar(string[i]);
i--;
}

putchar('\n');

return (0);
}

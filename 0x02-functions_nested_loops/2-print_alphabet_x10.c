#include <stdio.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * print_alphabet - Prints the lowercase alphabet ten times (x10)
 *
 * Description: Prints the lowercase alphabet ten times using putchar
 * Return: void
 */

void print_alphabet_x10(void);
{

char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
int size = strlen(alphabet);
int i = 0;
int counter = 0;
while (counter < 10)
{

while (i < size)
{

putchar(alphabet[i]);
i++;
}
putchar('\n');
counter++;
i = 0;
}
}

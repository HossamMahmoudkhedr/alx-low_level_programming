#include <stdio.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * print_alphabet - Prints the lowercase alphabet
 *
 * Description: Prints the lowercase alphabet using putchar
 * Return: void
 */

void print_alphabet(void)
{

char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
int size = strlen(alphabet);
int i = 0;

while (i < size)
{

putchar(alphabet[i]);
i++;

}

putchar('\n');

}

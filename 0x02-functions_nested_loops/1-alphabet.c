#include <stdio.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
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

return (0);
}

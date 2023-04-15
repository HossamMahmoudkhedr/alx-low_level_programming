#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 *
 * @argc: the number of arguments
 * @argv: Array of strings
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int i, sum, n;
sum = 0;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
n = atoi(argv[i]);
if (n == 0)
{
printf("Error\n");
return (1);
}
}
}
for (i = 1; i < argc; i++)
{
n = atoi(argv[i]);
sum += n;
}
printf("%d\n", sum);
return (0);
}

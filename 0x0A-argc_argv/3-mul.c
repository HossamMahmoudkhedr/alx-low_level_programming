#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 *
 * @argc: the number of arguments
 * @argv: Array of strings
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int mul;
if (argc <= 2 || argc > 3)
{
printf("Error\n");
}
else
{
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);
}
return (0);
}

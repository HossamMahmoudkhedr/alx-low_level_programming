#include <stdio.h>

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
if (argc < 2)
{
printf("Error");
}
else
{
mul = atoi(argv[0]) * atoi(argv[1]);
printf("%d", mul);
}
return (0);
}

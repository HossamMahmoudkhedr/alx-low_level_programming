#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
size_t charSize = sizeof(char);
size_t intSize = sizeof(int);
size_t longSize = sizeof(long int);
size_t longLongSize = sizeof(long long int);
size_t floatSize = sizeof(float);

printf("Size of a char: %zu byte(s)\n", charSize);
printf("Size of an int: %zu byte(s)\n", intSize);
printf("Size of a long int: %zu byte(s)\n", longSize);
printf("Size of a long long int: %zu byte(s)\n", longLongSize);
printf("Size of a float: %zu byte(s)\n", floatSize);
return (0);
}

#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using the Binary search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
int min, max, guess,i;
min = 0;
max = (int)size - 1;
if (array == NULL)
{
return (-1);
}

while (min <= max)
{
guess = (min + max) / 2;
printf("Searching in array: ");
for (i = min; i <= max;i++)
{
if (i == max)
{
printf("%d\n", i);
}
else
{
printf("%d, ", i);
}
}
if (array[guess] == value)
{
return (value);
}
else if (array[guess] > value)
{
max = guess - 1;
}
else
{
min = guess + 1;
}
}

return (-1);
}
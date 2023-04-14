#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: the first element in the array
 * @max: the last element in the array
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
int *arr;
int size, i;
if (min > max)
{
return (NULL);
}
size = (max - min) + 1;
arr = malloc(size * sizeof(int));

if (arr == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
arr[i] = min + i;

}

return (arr);
}

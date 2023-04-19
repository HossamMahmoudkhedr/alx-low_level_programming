#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: the array to search in it for the integer
 * @size: the size of the array
 * @cmp: the pointer to the array
 * Return: the index of the integer if founded, or -1 otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size > 0)
{
if (array != NULL && cmp != NULL)
{
for (i = 0; i < size; i++)
{
if ((*cmp)(array[i]))
{
return (i);
}
}
}
}

return (-1);
}

#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on the array
 *
 * @array: the array
 * @size: the size of the array
 * @action: pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
i = 0;
while (i < size)
{
(*action)(array[i]);
i++;
}
}

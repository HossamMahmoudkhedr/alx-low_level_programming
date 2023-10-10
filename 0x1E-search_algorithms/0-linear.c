#include <stdio.h>
/**
 * linear_search - Searches for a value in an array of integers using the Linear search algorithm
 *
 * @array: The array passed to search in the value in side it
 * @size: The size of the array
 * @value: The value to search for
 * Return:  the first index where value is located, or -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array == NULL)
        return (-1);

    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value)
        {
            return (i);
        }
    }
    return (-1);
}

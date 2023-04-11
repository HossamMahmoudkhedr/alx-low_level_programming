#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 *
 * @size: the size of bytes needed to be allocated in memeory
 * @c: the character to allocated in the saved blocks
 * Return: NULL if size = 0, pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{

if (size == 0)
{
return (NULL);
}

char *arr = malloc(sizeof(char) * size);
if (arr == NULL)
{
return (NULL);
}

for (unsigned int i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}

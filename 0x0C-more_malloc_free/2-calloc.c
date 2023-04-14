#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: array of elements
 * @size: size of the elements
 * Return: If nmemb or size is 0 returns NULL if malloc fails returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
int *ptr;
unsigned int c;
unsigned int totalSize;
if (nmemb == 0 || size == 0)
{
return (NULL);
}

totalSize = nmemb * size;
ptr = malloc(totalSize);
if (ptr == NULL)
{
return (NULL);
}
c = 0;
while (c < totalSize)
{
ptr[c] = 0;
c++;
}

return (ptr);
}

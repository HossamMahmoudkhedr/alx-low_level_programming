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
int c;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

ptr = (int *)malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
while (c < nmemb * size)
{
ptr[c] = 0;
c++;
}

return (ptr);
}

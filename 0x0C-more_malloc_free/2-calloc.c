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
int i, j;

if (nmemb == 0 || size == 0)
{
exit(0)
}

ptr = (int *)malloc(nmemb * size);
if (ptr == NULL)
{
exit(0)
}

for (i = 0; i < nmemb; i++)
{
for (j = 0; j < size; j++)
{
ptr[i * size + j] = 0;
}
}

}

#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees a dog struct
 *
 * @d: the dog struct to be freed
 * Return: void
 */
void free_dog(dog_t *d)
{
if(d != 0)
{
free(d->name);
free(d->owner);
free(d);
}
}

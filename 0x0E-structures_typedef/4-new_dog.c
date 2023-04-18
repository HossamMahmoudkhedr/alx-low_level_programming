#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog -  creates a new dog
 *
 * @name: dog name
 * @age: age name
 * @owner: owner name
 * Return: null if the function fails, or new dog otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog;
newDog = malloc(sizeof(struct dog));
if (newDog == NULL)
{
return (NULL);
}
newDog->name = strdup(name);
newDog->owner = strdup(owner);

newDog->name = name;
newDog->age = age;
newDog->owner = owner;
if (newDog->name == 0)
{
free(newDog);
return (0);
}
if (newDog->owner == 0)
{
free(newDog);
free(newDog->name);
return (0);
}
return (newDog);
}

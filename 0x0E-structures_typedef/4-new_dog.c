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

newDog->name = (char *)malloc(strlen(name) + 1);

if (newDog->name == NULL)
{
free(newDog);
return (NULL);
}

strcpy(newDog->name, name);

newDog->age = age;

newDog->owner = (char *)malloc(strlen(owner) + 1);

if (newDog->owner == NULL)
{
free(newDog->name);
free(newDog);
return (NULL);
}

strcpy(newDog->owner, owner);
return (newDog);
}

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
new_dog->name = strdup(name);
new_dog->owner = strdup(owner);

newDog->name = name;
newDog->age = age;
newDog->owner = owner;

return (newDog);
}

#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: string to copy
 *
 * Return: Pointer
 */
char *_strdup(char *str)
{
int l, i;
char *s;

if (str == NULL)
return (0);

l = 0;
while (*(str + l))
l++;

s = malloc(sizeof(char) * l + 1);

if (s == 0)
return (0);

for (i = 0; i <= l; i++)
{
*(s + i) = *(str + i);
}
return (s);
}
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
new_dog->name = _strdup(name);
new_dog->owner = _strdup(owner);

newDog->name = name;
newDog->age = age;
newDog->owner = owner;

return (newDog);
}

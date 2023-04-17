#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 *
 * @d: the struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
if (d == 0)
{
printf("\n");
}
else
{
if (d->name == 0)
{
printf("Name: (nil)\n");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
else if (d->owner == 0)
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: (nil)\n");
}
else
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
}

#include <stdio.h>
#include "dog.h"
void print_dog(struct dog *d)
{
if (d == NULL)
{
printf("\n");
}
else if (d->name == NULL)
{
printf("Name: (nil)\n");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
else if (d->age == NULL)
{

printf("Name: %s\n", d->name);
printf("Age: (nil)");
printf("Owner: %s\n", d->owner);
}
else if (d->owner == NULL)
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: (nil)\n");
}
}

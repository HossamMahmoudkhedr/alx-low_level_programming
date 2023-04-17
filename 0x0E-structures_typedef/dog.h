#ifndef STRUCTS
#define STRUCTS

/**
 * struct dog - description for a pet
 * @name: dog name
 * @age: dog age
 * @owner: owner
 *
 * Description: the data of the dog
 */
struct dog
{
char *name;
float age;
char *owner;
};
#endif
#ifndef FUNCTIONS
#define FUNCTIONS
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

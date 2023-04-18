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
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
#endif
#ifndef FUNCTIONS
#define FUNCTIONS
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

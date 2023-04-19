#include <stdio.h>
/**
 * print - prints the name passed to it
 *
 * @c: the name to be printed
 * Return: void
 */
void print(char *c)
{
printf("%s", c);
}

/**
 * print_name - prints a name using print function
 *
 * @name: the name to be printed
 * @f: pointer to a function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
f = print;
f(name);
}

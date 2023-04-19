#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name using print function
 *
 * @name: the name to be printed
 * @f: pointer to a function
 *  * Description: This function takes a name and a pointer to a function that
 *  takes a string as an argument and prints it. If both arguments
 *  are not NULL, it calls the specified function with the name
 *  argument.
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL){
(*f)(name);
}
}

#include <stdio.h>
 /**
  * swap_int - swaps the values of a two integers
  *
  * @a: The first pointer 
  * @b: the second pointer
  * Return: void 
  */
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}

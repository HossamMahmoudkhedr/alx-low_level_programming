#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: the array to be reversed
 * @n: the number of elements inside the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
int i,tmp;

for (i = 0; i < n; i++)
{
tmp = a[i];
a[i] = a[n - 1];
a[n - 1] = tmp;
n--;
}
}

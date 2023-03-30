#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverse array
 * @a:array
 * @n:integer
 * Return:void
 */
void reverse_array(int *a, int n)
{
int i, tmp;

for (i = 0; i < n - 2; i++)
{
tmp = a[i];
a[i] = a[n - 1];
a[n - 1] = tmp;
n--;
}
}
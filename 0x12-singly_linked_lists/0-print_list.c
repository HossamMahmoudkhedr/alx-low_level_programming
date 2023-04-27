#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the linked list valuse
 * 
 * @h: the head pointer to the first node
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
size_t length;
int i;
length = 0;
while (h != NULL)
{
if (h->str != NULL)
{

for (i = 0; i < h->len; i++)
{
putchar(h->str[i]);
}
length++;
}
else
{
putchar('(');
putchar('n');
putchar('i');
putchar('l');
putchar(')');
}
h = h->next;
}
return (length);
}

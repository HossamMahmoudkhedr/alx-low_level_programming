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
putchar('[');
putchar(h->len + '0');
putchar(']');
putchar(' ');
for (i = 0; i < h->len; i++)
{
putchar(h->str[i]);
}
putchar('\n');
}
else
{
putchar('[');
putchar('0');
putchar(']');
putchar(' ');
putchar('(');
putchar('n');
putchar('i');
putchar('l');
putchar(')');
putchar('\n');
}
length++;
h = h->next;
}
putchar('\n');
return (length);
}

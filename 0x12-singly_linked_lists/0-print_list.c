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
length = 0;
while (h != NULL)
{
if (h->str != NULL)
{
printf("[%i] %s", h->len, h->str);
}
else
{
printf("[0] (nil)");
}
length++;
h = h->next;
putchar('\n');
}
return (length);
}

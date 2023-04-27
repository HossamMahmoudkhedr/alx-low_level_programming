#include <stdio.h>
#include "lists.h"

/**
 * list_len - return the number of the nodes
 *
 * @h: a header to the fist node to the linked list
 * Return: the length of the linked list
 */

size_t list_len(const list_t *h)
{
size_t length;

length = 0;
while (h != NULL)
{
length++;
h = h->next;
}

return (length);
}

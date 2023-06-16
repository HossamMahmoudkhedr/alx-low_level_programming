#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - returns the length of the linked list
 *
 * @h: a pointer to the first node in the linked list
 * Return: the length of the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t length = 0;

while (h != NULL)
{
length++;
h = h->next;
}

return (length);
}

#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints all the elements of a listint_t list.
 *
 * @h: the head to the first element of the linked list
 * Return: the length of the linked list
 */

size_t listint_len(const listint_t *h)
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

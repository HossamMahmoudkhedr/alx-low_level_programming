#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: the head to the first element of the linked list
 * Return: the length of the linked list
 */

size_t print_listint(const listint_t *h)
{
size_t length;
length = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
length++;
}

return (length);
}

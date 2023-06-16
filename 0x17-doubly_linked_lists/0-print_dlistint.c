#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 *
 * @h: a pointer to the first node
 * Return: the length of the linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		length++;
	}
	return (length);
}

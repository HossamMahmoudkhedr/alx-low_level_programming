#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the linked list values.
 * @h: The head pointer to the first node.
 *
 * Return: Number of nodes.
 */
size_t print_list(const list_t *h)
{
size_t nelem;

nelem = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[%d] %s\n", 0, "(nil)");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
nelem++;
}
return (nelem);
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: a pointer to the first node
 * @idx: the index of the newNode
 * @n: the data to be added to the newNode
 * Return: the address of the newNode, or NULL otherwise
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *newNode, *temp;
unsigned int i;
newNode = malloc(sizeof(dlistint_t));

if (newNode == NULL)
{
return (NULL);
}

newNode->n = n;
temp = *h;
for (i = 0; i < idx; i++)
{
if (temp != NULL)
{
temp = temp->next;
}
else
{
return (NULL);
}
}

newNode->next = temp->next;
newNode->prev = temp;
temp->next = newNode;
temp = newNode->next;
temp->prev = newNode;

return (newNode);
}

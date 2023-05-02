#include <stdio.h>
#include <stdlib.h>
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

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: a pointer to the first element
 * @idx: the index of the newNode
 * @n: the value will be saved in the newNode
 * Return: the address of the newNode
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
size_t len;
unsigned int len_ui, i;
listint_t *newNode;
len = listint_len(*head);
len_ui = (unsigned int)len;

if (idx > len_ui)
{
return (NULL);
}
newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
{
return (NULL);
}
for (i = 0; i < idx - 1; i++)
{
(*head) = (*head)->next;
}

if (idx == len_ui - 1)
{
newNode->next = NULL;
}
else
{
newNode->next = (*head)->next;
}

*head = newNode;
newNode->n = n;
return (newNode);
}

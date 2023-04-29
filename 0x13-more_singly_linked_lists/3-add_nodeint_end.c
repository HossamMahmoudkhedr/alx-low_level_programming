#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list
 *
 * @head: a pointer to the first address in the linked list
 * @n: the value to be added to the node
 * Return: the pointer to the head
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp, *newNode;
int val;
val = n;
newNode = malloc(sizeof(*newNode));

if (newNode == NULL)
{
return (NULL);
}

newNode->n = val;
newNode->next = NULL;
if (*head == NULL)
{
*head = newNode;
}
else
{
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = newNode;
}

return (*head);
}

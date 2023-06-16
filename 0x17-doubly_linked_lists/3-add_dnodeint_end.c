#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - add a new node to the end of the linked list
 *
 * @head: a pointer to the first node of the linked list
 * @n: a value to be assigned to the new node value
 * Return: the address of the new node, or NULL otherwise
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newNode, *temp;

newNode = malloc(sizeof(dlistint_t));
if (newNode == NULL)
{
return (NULL);
}
temp = *head;
newNode->n = n;
newNode->next = NULL;
if (*head == NULL)
{
*head = newNode;
newNode->prev = NULL;
}
else
{
while (temp->next != NULL)
{
temp = temp->next;
}

temp->next = newNode;
newNode->prev = temp;
}

return (newNode);
}

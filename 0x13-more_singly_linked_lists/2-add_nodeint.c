#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 *
 * @head: pinter to the address of the first element
 * @n: the value to be added
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *temp;
int val;
val = n;
temp = malloc(sizeof(*temp));
if (temp == NULL)
{
return (NULL);
}

temp->n = val;
if (*head == NULL)
{
temp->next = NULL;
}
else
{
temp->next = *head;
}
*head = temp;
return (temp);
}

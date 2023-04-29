#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint -
 *
 * @head: pinter to the first elemnt
 * @n: the value to be added
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *temp;
int val;
val = n;
temp = malloc(sizeof(*temp));
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

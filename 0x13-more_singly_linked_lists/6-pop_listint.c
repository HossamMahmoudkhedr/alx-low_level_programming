#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: the pointer to the first element
 * Return: the value of the deleted node, or 0 if it is empty
 */

int pop_listint(listint_t **head)
{
int value;
listint_t *temp;

if (*head == NULL)
{
return (0);
}

temp = *head;
value = (*head)->n;
*head = (*head)->next;
free(temp);
return (value);
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: a pointer to the first element
 * Return: void
 */

void free_listint2(listint_t **head)
{
listint_t *temp;

if(head == NULL)
{
return;
}
while (*head != NULL)
{
temp = *head;
*head = (*head)->next;
free(temp);
}
head = NULL;
}

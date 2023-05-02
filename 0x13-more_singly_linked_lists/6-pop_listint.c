#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int pop_listint(listint_t **head)
{
int value;
listint_t *temp;

if (head == NULL)
{
return (0);
}

temp = *head;
value = (*head)->n;
*head = (*head)->next;
free(temp);
return (value);
}

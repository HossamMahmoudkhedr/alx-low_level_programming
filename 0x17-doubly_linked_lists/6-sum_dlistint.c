#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a linked list
 *
 * @head: a pointer to the first node in the linked list
 * Return: the sum of all the data in each node in the list
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}

return (sum);
}

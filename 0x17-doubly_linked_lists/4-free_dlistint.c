#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t list
 *
 * @head: a pointer to the first node
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp;

    temp = head;
    while (head->prev != NULL)
    {
		head = head->prev;
    }
    
    while (head != NULL)
    {
        head = head->next;
        temp->next = NULL;
        free(temp);
    }
}

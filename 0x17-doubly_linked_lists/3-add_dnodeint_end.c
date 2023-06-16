#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

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
    newNode->next =NULL;
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
        newNode->prev = *temp;
    }
}

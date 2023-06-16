#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *newNode;

    newNode = malloc(sizeof(dlistint_t));
    if (newNode == NULL)
    {
        return (NULL);
    }

    newNode->n = n;
    newNode->next = *head;
    // head->prev = *newNode;
    *head = newNode;
    newNode->prev = NULL;

    return (newNode);
}

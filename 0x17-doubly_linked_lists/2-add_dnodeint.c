#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - add a new node to the beginning of the list
 *
 * @head: a pointer to the first node
 * @n: the value to be added in the new node
 * Return: the address of the new node or NULL otherwise
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *newNode;
    size_t length = dlistint_len(*head);

    newNode = malloc(sizeof(dlistint_t));
    if (newNode == NULL)
    {
        return (NULL);
    }

    newNode->n = n;
    if (length != 0)
    {
        newNode->next = *head;
    }
    else
    {
        newNode->next = NULL;
    }
    *head = newNode;
    newNode->prev = NULL;
    return (newNode);
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - returns the length of the linked list
 *
 * @h: a pointer to the first node in the linked list
 * Return: the length of the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t length = 0;

while (h != NULL)
{
length++;
h = h->next;
}

return (length);
}


/**
 * add_dnodeint - add a new node to the beginning of the list
 *
 * @head: a pointer to the first node
 * @n: the value to be added in the new node
 * Return: the address of the new node or NULL otherwise
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *newNode, *temp;

    newNode = malloc(sizeof(dlistint_t));
    if (newNode == NULL)
    {
        return (NULL);
    }

    newNode->n = n;
    if (*head != NULL)
    {
        newNode->next = *head;
    }
    else
    {
        tmp = *head;
        newNode->next = NULL;
        temp->prev = newNode;
    }
    *head = newNode;
    newNode->prev = NULL;
    return (newNode);
}

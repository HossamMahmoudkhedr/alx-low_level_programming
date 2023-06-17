#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Get the dnodeint at index object
 *
 * @head: a pointer to the first node in the linked list
 * @index: the index of a sepecefic node
 * Return: the node at the given index, or NULL otherwise
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int counter = 0;

    while (head != NULL)
    {
        if (counter == index)
        {
            return (head)
        }
        else
        {
            head = head->next;
        }
    }
    return (NULL);
}

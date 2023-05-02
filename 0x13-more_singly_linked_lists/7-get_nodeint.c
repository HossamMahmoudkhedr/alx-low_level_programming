#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Get the nodeint at index object
 *
 * @head: the pointer to the first node
 * @index: the index of the node
 * Return: the node, or NULL if the list is empty
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
size_t len;
len = listint_len(head);

if (index >= len)
{
return (NULL);
}

i = 0;
while (i != index)
{
head = head->next;
i++;
}

return (head);
}

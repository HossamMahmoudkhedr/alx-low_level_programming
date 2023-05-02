#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - prints all the elements of a listint_t list.
 *
 * @h: the head to the first element of the linked list
 * Return: the length of the linked list
 */

size_t listint_len(const listint_t *h)
{
size_t length;
length = 0;
while (h != NULL)
{
length++;
h = h->next;
}

return (length);
}

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

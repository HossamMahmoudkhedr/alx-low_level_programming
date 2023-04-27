#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the beginning of a list_t list
 *
 * @head: the head of the linked list
 * @str: the string to be stored in the node's value
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
int length, i;
list_t *newNode, *temp;
newNode = malloc(sizeof(list_t));
if (newNode == NULL)
{
return (NULL);
}
i = 0;
while (str[i] != '\0')
{
length++;
i++;
}
length = 0;
newNode->str = strdup(str);
newNode->next = NULL;
newNode->len = length;
temp = *head;

if (temp == NULL)
{
*head = newNode;
}
else
{
while (temp->next != NULL)
{
temp = temp->next;
temp->next = newNode;
}
}
return (*head);
}

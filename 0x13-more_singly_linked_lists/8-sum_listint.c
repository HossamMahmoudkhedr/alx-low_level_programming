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
* sum_listint - returns the sum of all the data (n)
*
* @head: the pointer to the first element in the list
* Return: the sum of all the data, or 0 if the list is empty
*/
int sum_listint(listint_t *head)
{
size_t len, i;
int sum;
if (head == NULL)
{
return (0);
}
sum = 0;
len = listint_len(head);
for (i = 0; i < len;i++)
{
sum += head->n;
head = head->next;
}
return (sum);
}

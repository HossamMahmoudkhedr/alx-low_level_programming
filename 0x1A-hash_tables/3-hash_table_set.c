#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * create_item - Create an item object to be added
 *
 * @key: the key
 * @value: the value
 * Return: the new item
 */

hash_node_t *create_item(const char *key, const char *value)
{
hash_node_t *item = malloc(sizeof(hash_node_t));
if (item == NULL)
{
return (NULL);
}
item->key = (char *)malloc(strlen(key) + 1);
item->value = (char *)malloc(strlen(value) + 1);
strcpy((char *)item->key, key);
strcpy((char *)item->value, value);

return (item);
}

/**
 * hash_table_set - insert a new item in the table
 *
 * @ht: the hash table
 * @key: the key of the item
 * @value: the value of the item
 * Return: 1 if succeeded, 0 otherwise 
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *item = create_item(key, value);

unsigned long int index = key_index((const unsigned char *)key, ht->size);

hash_node_t *current_item = ht->array[index];

if (current_item == NULL)
{
if (index >= ht->size)
{
return (0);
}
ht->array[index] = item;
return (1);
}
else
{
ht->array[index]->next = item;
return (1);
}
return (0);
}

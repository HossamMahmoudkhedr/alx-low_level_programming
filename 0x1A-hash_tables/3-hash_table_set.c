#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

hash_node_t create_item(char *key, char *value)
{
hash_node_t *item = malloc(sizeof(hash_node_t));
if (item == NULL)
{
return (NULL);
}

strcpy(item->key, key);
strcpy(item->value, value);
return (item);
}

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *item = create_item(key, value);

unsigned long int index = key_index(key, ht->size);

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
}

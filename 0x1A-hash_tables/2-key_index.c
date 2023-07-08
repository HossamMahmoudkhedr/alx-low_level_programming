#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - gives you the index of a key.
 *
 * @key: the key
 * @size: the size of the array in the hash table
 * Return: the index of the key in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
int n = hash_djb2(key);
return (n % size);
}

#include "main.h"

/**
 * get_endianness - return the endianness of the machine
 *
 * Return: 0 for big endian, or 1 otherwise
 */
int get_endianness(void)
{
int n = 1;

return (*((char *) &n) + '0');
}

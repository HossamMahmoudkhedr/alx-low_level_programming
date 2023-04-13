#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes of s2
 * Return: pointer should point to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
size_t len1;
size_t len2;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);

if (n >= len2)
n = len2;

result = malloc(len1 + n + 1);
if (result == NULL)
return NULL;

memcpy(result, s1, len1);
memcpy(result + len1, s2, n);
result[len1 + n] = '\0';

return (result);
}

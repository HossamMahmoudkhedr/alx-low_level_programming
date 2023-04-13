#include <stdio.h>
#include <stdlib.h>

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
int len1, len2, i, j, newSize;
char *newStr;
len1 = 0;
len2 = 0;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[len1] != '\0')
{
len1++;
}

while (s2[len2] != '\0')
{
len2++;
}
if (n < len2)
{
len2 = n;
}
newSize = len1 + len2;
newStr = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
if (newStr == NULL)
{
return (NULL);
}
for (i = 0; i < len1; i++)
{
newStr[i] = s1[i];
}
len2 = i;
len1 = 0;
for (j = len2; j < newSize; j++)
{
newStr[j] = s2[len1];
len1++;
}
newStr[j] = '\0';
return (newStr);
}

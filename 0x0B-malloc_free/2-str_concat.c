#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 * Return: pointer should point to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
int len1, len2, i, j ,l newSize;
char *newStr;
len1 = 0;
len2 = 0;

while (s1[len1] != '\0')
{
len1++;
}

while (s2[len2] != '\0')
{
len2++;
}
newSize = len1 + len2;
newStr = (char *)malloc(sizeof(char) * newSize + 2);

for (i = 0; i < len1; i++)
{
newStr[i] = s1[i];
}
len2 = i;
for (j = len2; j < newSize;j++)
{
newStr[j] = *s2;
*s2++;
}
}

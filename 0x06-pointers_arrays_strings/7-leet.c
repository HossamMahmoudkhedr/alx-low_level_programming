#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @str: the pointer to string
 *
 * Return: the string after changing the letters
 */

char *leet(char *str)
{
int i, j;
char letters[] = "AEOTLaeotl";
char nums[] = "4307143071";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0'; j++)
{
if (str[i] == letters[j])
{
str[i] = nums[j];
}
}
}

return (str);
}

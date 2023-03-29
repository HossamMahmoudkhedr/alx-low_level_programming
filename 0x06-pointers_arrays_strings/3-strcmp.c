#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcmp - Write a function that compares two strings.
 *
 * @s1: This is the input string
 * @s2: This is the input string
 *
 * Return: If the strings are equals return "0", if not return other number
 */

int _strcmp(char *s1, char *s2)
{
int i;
int result;
int max;
i = 0;
result = 0;
max = strlen(s1);
if (strlen(s2) > max)
{
max = strlen(s2);
}

while (i < max)
{
if (s1[i] != s2[i])
{
result = s1[i] - s2[i];
break;
}
i++;
}

return (result);
}

#include <stdio.h>
#include <string.h>

/**
 * main - return fizz or buzz if the number mod 3 or mod 5 equals 0
 *
 * Return: int
 */

int main(void)
{
int i;
i = 1;

char status[9] = "";
while (i <= 100)
{
if (i % 3 == 0)
{
strcat(status, "Fizz");
}

if (i % 5 == 0)
{
strcat(status, "Bizz");
}

if (status[0] != '\0')
{
printf("%s ", status);
}
else
{
printf("%d ", i);
}
strcpy(status, "");
i++;
}
printf("\n");
return (0);
}

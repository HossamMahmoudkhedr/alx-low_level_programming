#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a new password
 *
 * Return: 0
 */
int main(void)
{
char password[7];
int i;
const char charset[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
srand(time(NULL));

i = 0;
while(i < 6)
{
password[i] = charset[rand() % sizeof(charset)];
i++;
}
password[6] = '\0';

printf("%s\n", password);

return (0);
}

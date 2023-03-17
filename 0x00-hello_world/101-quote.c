#include <stdio.h>

int main(void)
{
char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015 - 10 - 19\n";
for (int i = 0; quote[i] != '\0';++i)
{
putchar(quote[i]);
}
return (1);
}
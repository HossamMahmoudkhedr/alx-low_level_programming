#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(void)
{

char *quote = "and that piece of art is useful\" - Dora Korpar, 2015 - 10 - 19\n";
write(STDOUT_FILENO, quote, 59);
return (1);
}

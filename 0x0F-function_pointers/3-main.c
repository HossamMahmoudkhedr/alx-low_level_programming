#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
get_op_func(argv[1][2])(atoi(argv[1][0]), atoi(argv[1][4]));
return (0);
}

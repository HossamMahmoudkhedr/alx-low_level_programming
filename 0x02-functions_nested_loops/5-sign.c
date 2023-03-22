#include <stdio.h>

/**
 * print_sign - prints the sign of a number
 *
 * @n: is the character to be checked
 * Return: 1 for n bigger than 0 or 0 for n equals 0 or -1 for n smaller than 0
 */
int print_sign(int n)
{
    
    if (n > 0)
    {
        return (1);
        putchar('+');
    }
    else if (n == 0)
    {
        return (0);
        putchar('0');
    }else
    {
        return (-1);
        putchar('-');
    }

}

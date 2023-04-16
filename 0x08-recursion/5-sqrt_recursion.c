#include <stdio.h>
/**
 * sqrt - Makes possible to evaluate from 1 to n
 * @a: same number as n
 * @c: number that iterates from 1 to n
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int sqrt(int n, int c)
{
    if (c * c == n)
    {
        return (c);
    }
    else if (c * c > n)
    {
        return (-1);
    }
    return (sqrt(n, c + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
    return (sqrt(n, 1));
}

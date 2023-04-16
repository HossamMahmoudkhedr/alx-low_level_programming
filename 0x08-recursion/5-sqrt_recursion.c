#include <stdio.h>
/**
 * sqrtValue - Makes possible to evaluate from 1 to n
 * @n: same number as n
 * @c: number that iterates from 1 to n
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int sqrtValue(int n, int c)
{
if (c * c == n)
{
return (c);
}
else if (c * c > n)
{
return (-1);
}
return (sqrtValue(n, c + 1));
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
return (sqrtValue(n, 1));
}

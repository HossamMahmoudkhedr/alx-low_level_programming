#include <stdio.h>
/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: an integer
 * @y: the power value
 * Return: -1 If y is lower than 0, 1 if y = 0, or the value otherwise
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}

if (y == 0)
{
return (1);
}

return (x * _pow_recursion(x, y - 1));
}

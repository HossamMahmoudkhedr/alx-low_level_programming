#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: the input number
 * Return: the last number of the digit
 */
int print_last_digit(int n)
{

int lastDigit = abs(n) % 10;
_putchar(lastDigit + '0');
return (lastDigit);

}

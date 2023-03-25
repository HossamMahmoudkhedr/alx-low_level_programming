#include <stdio.h>
#include <stdbool.h>

/**
 * bool - check if the number is prime or not
 * main - prints the factors of 612852475143
 *
 * @num: the number to be checked
 * Return: true if the number prime and false otherwise
 * Return: 0
 */
bool is_prime(long long int num)
{
if (num < 2)
{
return false;
}
for (long long int i = 2; i * i <= num; i++)
{
if (num % i == 0)
{
return false;
}
}
return true;
}

int main()
{
long long int n = 612852475143;
long long int i = 2;

while (i <= n)
{
if (is_prime(i))
{
if (n % i == 0)
{
printf("%lld ", i);
n = n / i;
}
else
{
i++;
}
}
else
{
i++;
}
}

return 0;
}

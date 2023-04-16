#include <stdio.h>

int checkPrime(int n,int start, int end)
{
    //if (!(n % start == 0 && (n == start || start == 1)))
    if (n % start != 0 && start == n && start == end)
    {
        return (1);
    }
    else
    {
        return (0);
    }

    checkPrime(n, start + 1, end);
}

int is_prime_number(int n)
{
    
    return (checkPrime(n, 2, n / 2));
}
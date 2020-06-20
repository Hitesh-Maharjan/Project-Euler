#include <stdio.h>

void prime(unsigned long long int factor, unsigned long long int *ptr) /*Finding whether a number is prime or not */
{
    unsigned long long int i, f = 0;

    for (i = 1; i <= factor; i++)
    {
        if (factor % i == 0)
        {
            f++;
        }
    }
    if (f == 2)
    {
        *ptr = factor;
    }
    return;
}


int main()
{
    unsigned long long int n, i, factor, prime_factor = 1;

    printf("Enter a number --> ");
    scanf("%llu", &n);

    for(i = 1; i < n; i++)
    {
        if ((n % i) == 0)
        {
            factor = i;
            prime(factor, &prime_factor);
        }
    }
    printf("Largest prime factor for %llu is %llu", n,prime_factor);
    return 0;
}


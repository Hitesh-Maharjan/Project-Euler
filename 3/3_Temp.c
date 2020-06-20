#include <stdio.h>

void prime(int factor, int *ptr) /*Finding whether a number is prime or not */
{
    int i, f = 0;

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
    int a = 0;
    prime(1, &a);
    printf("%i", a);
    return 0;
}

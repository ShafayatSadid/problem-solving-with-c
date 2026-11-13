#include <stdio.h>

void doFactor(int n, long long int factor, int i)
{

    if (i > n)
    {
        printf("%lld", factor);
        return;
    }

    factor *= i;
    doFactor(n, factor, i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    long long int factor = 1;
    doFactor(n, factor, 1);
}
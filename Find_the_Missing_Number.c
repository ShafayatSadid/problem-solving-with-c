#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        long long int a, x, y, z;
        scanf("%lld %lld %lld %lld", &a, &x, &y, &z);

        long long int b = x * y * z;
        long long int ans = (a % b == 0) ? a / b : -1;

        printf("%lld\n", ans);
    }
}
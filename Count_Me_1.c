#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    long long int count_divided_by_2 = 0, count_divided_by_3 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            count_divided_by_2++;
        }
        else if (a[i] % 3 == 0)
        {
            count_divided_by_3++;
        }
    }

    printf("%lld %lld", count_divided_by_2, count_divided_by_3);
}
#include <stdio.h>

void sum(int a[], int n, long long int sumArr)
{

    if (n == 0)
    {
        printf("%lld", sumArr);
        return;
    }

    sumArr += a[n - 1];

    sum(a, n - 1, sumArr);
}

int main()
{

    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    long long int sumArr = 0;
    sum(a, n, sumArr);
}
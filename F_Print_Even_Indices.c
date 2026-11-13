#include <stdio.h>

void ind(int n, int a[])
{
    if (n < 0)
    {
        return;
    }

    if (n % 2 == 0)

        printf("%d ", a[n]);

    ind(n - 1, a);
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
    ind(n - 1, a);
    return 0;
}
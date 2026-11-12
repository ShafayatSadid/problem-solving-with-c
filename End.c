#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int i = 0, j = n - 1;

    int b[n];
    int x = 0;
    while (i <= j)
    {
        b[x] = a[i];
        b[x + 1] = a[j];

        i++;
        j--;
        x += 2;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
}
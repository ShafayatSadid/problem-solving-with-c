#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int diff = a[1] - a[0];

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int x = a[j] - a[i];
            if (diff <= x)
            {
                diff = x;
            }
        }
    }

    printf("%d", diff);
    return 0;
}
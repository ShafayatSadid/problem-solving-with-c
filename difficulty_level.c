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

    int difficulty = a[0];

    for (int i = 0; i < n-1; i++)
    {
        if (a[i + 1] > a[i])
        {
            difficulty = a[i + 1];
        }
        else
        {
            break;
        }
    }

    printf("%d", difficulty);
    return 0;
}
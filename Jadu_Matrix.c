#include <stdio.h>

#include <stdbool.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    bool isJadu = true;

    if (n != m)
    {
        isJadu = false;
        printf("NO\n");
        return 0;
    }

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            // printf("%d%d ", i, j);

            if (i == j || i + j == n - 1)
            {
                if (a[i][j] != 1)
                {
                    isJadu = false;
                    break;
                }
            }
            else
            {
                if (a[i][j] != 0)
                {
                    isJadu = false;
                    break;
                }
            }
        }

        // printf("\n");
    }

    if (isJadu)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
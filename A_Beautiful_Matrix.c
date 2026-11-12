#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;

    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int isBeautiful = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] != 0)
            {
                isBeautiful = (abs(2 - i)) + (abs(2 - j));
            }
        }
        
    }

    printf("%d", isBeautiful);
}
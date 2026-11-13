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

    int operations = 0;

    while (1)
    {
        int isEven = 1;
        for (int i = 0; i < n; i++)
        {

            if (a[i] % 2 != 0)
            {
                isEven = 0;
                break;
            }
        }

        if (!isEven)
        {
            break;
        }
        for (int i = 0; i < n; i++)
        {
            a[i] /= 2;
        }

        operations++;

        
    }
    printf("%d", operations);
}
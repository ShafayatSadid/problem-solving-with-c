#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int loop = 5 + ((n/2 )+1);

    int stars = 1, space = loop - 1;

    while (loop--)
    {
        for (int i = 0; i < space; i++)
        {
            printf(" ");
        }

        for (int i = 0; i < stars; i++)
        {
            printf("*");
        }
        printf("\n");
        stars += 2;
        space--;
    }

    int star = 5;
    while (star--)
    {
        for (int i = 0; i < 5; i++)
        {
            printf(" ");
        }

        for (int i = 0; i < n; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
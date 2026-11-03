#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int star = 1;
    int space = n - 1;
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        // star
        for (int j = 0; j < star; j++)
        {
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }


    int stars = n*2;
    int spaces = 0;
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }

        // star
        for (int j = 1; j < stars; j++)
        {
            printf("*");
        }
        printf("\n");
        stars -= 2;
        spaces++;
    }
}
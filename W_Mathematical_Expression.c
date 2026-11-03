#include <stdio.h>

int main()
{
    int a;
    char s;
    int b;
    char q;
    int c;

    scanf("%d %c %d %c %d", &a, &s, &b, &q, &c);
    // printf("%d %c %d %c %d", a, s, b, q, c);

    if (s == '+')
    {
        if (a + b == c)
        {
            printf("Yes");
        }
        else
        {
            printf("%d", a + b);
        }
    }
    else if (s == '-')
    {
        if (a - b == c)
        {
            printf("Yes");
        }
        else
        {
            printf("%d", a - b);
        }
    }
    else
    {
        if (a * b == c)
        {
            printf("Yes");
        }
        else
        {
            printf("%d", a * b);
        }
    }
}
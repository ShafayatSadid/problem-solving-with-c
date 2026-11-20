#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b && a > c && a > d)
    {
        printf("Rahim");
    }
    else if(b > a && b > c && b > d)
    {
        printf("Karim");
    }
    else if(c > b && c > a && c > d)
    {
        printf("Sakib");
    }
    else if(d > b && d > a && d > c)
    {
        printf("Nabil");
    }
    else{
        printf("Tie");
    }
}
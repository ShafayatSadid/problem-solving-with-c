#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char a[n];
    scanf("%s", a);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int digit = a[i] - '0';
        sum += digit;
        
    }

    printf("%d", sum);
}
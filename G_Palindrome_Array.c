#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    long long a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    int i = 0;
    int j = n - 1;
    int isPalindrome = 1;

    while (i < j)
    {
        if (a[i] != a[j])
        {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
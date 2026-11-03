#include <stdio.h>

int count_distinct(int a[], int n)
{
    int present[2001] = {0};
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int idx = a[i] + 1000;
        if (present[idx] == 0)
        {
            present[idx] = 1;
            count++;
        }
    }

    return count;
}
int main()
{

    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("%d", count_distinct(a, n));

    return 0;
}
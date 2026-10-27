#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    scanf("%s", s);

    int size = strlen(s);

    int isPalindrome = 1;

    int i = 0, j = size - 1;
    while (i < j)
    {

        if (s[i] != s[j])
        {
            isPalindrome = 0;
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
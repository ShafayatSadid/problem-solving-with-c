#include <stdio.h>
#include <string.h>

void printDigit(char num[], int i)
{
    if (num[i] == '\0')
        return;

    printf("%c ", num[i]);

    printDigit(num, i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        char num[20];
        scanf("%s", num);

        printDigit(num, 0);
        printf("\n");
    }
    return 0;
}
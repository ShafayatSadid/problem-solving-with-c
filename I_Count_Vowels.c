#include <stdio.h>
#include <string.h>

int main()
{

    char str[205];

    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    int countV = 0;

    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            countV++;
    }

    printf("%d", countV);
}
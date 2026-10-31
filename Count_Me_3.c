#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {

        char str[10005];
        scanf("%s", str);

        int count_capitals = 0, count_smalls = 0, count_digits = 0;
        int len = strlen(str);

        for (int i = 0; i < len; i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                count_smalls++;
            }
            else if (str[i] >= 'A' && str[i] <= 'Z')
            {
                count_capitals++;
            }
            else
            {
                count_digits++;
            }
        }

        printf("%d %d %d\n", count_capitals, count_smalls, count_digits);
    }
}
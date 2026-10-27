#include <stdio.h>
#include <string.h>

int main()
{
    char s[100005];
    scanf("%s", s);
    

    int size = strlen(s);

    for (int i = 0; i < size; i++)
    {
        if (s[i] == ',')
        {
            s[i] = ' ';
        }
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
        printf("%c", s[i]);
    }
    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        char s[101], t[101];
        scanf("%s %s", s, t);

        int Slen = strlen(s);
        int Tlen = strlen(t);

        int len = Slen > Tlen ? Slen : Tlen;

        for (int i = 0; i < len; i++)
        {
            if (i < Slen) printf("%c", s[i]);
            
            if (i < Tlen) printf("%c", t[i]);
            
        }
        printf("\n");
    }
}
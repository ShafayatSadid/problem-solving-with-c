#include <stdio.h>
#include <string.h>

int main()
{
    char a[101], b[101];

    scanf("%s %s", a, b);

    if (strcmp(a, b) < 0)
    {
        printf(a);
    }
    else if (strcmp(a, b) > 0)
    {
        printf(b);
    }
    else if(strcmp(a,b) == 0){
        printf(a);
    }
}
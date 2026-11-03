#include <stdio.h>
#include <string.h>

int main()
{
    char str[100005];
    scanf("%s", str);

    int count_consonants = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if(str[i]!= 'a'&&str[i]!= 'e'&&str[i]!= 'i'&&str[i]!= 'o'&&str[i]!= 'u'){
            count_consonants++;
        }
    }
    printf("%d", count_consonants);
}
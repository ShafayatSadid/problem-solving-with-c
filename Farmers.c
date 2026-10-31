#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {

        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);

        int total_work = M1 * D;
        int new_days = total_work / (M1 + M2);

        int final_days = D - new_days;
        
        printf("%d\n", final_days);
    }
}
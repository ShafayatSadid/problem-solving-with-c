// #include <stdio.h>
// // hoe mto push
// int main(){
//     char s[50];
//     scanf("%s", &s);
 
//     int count = 0;

//     for(int i = 0; s[i] != '\0' ; i++){
//         count ++;
//     }
//     printf("%d",count);
// }

#include <stdio.h>
#include <string.h>

int main(){
    
    char s[50];
    scanf("%s", &s);

    int sz = strlen(s);

    printf("%d", sz);
}
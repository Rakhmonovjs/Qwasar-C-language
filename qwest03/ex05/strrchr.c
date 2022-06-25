#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* my_strrchr(char* p1, char p2)
{
//     char *a;
// a = (char*)malloc(strlen(param_1) * sizeof(char));
// int index_a = 0;
//     for(int c = strlen(param_1)-1; c >= 0; c--){
//         if(param_1[c]== param_2){
//             for(int i = c; param_1[i] != '\0'; i++){
//         a[index_a] = param_1[i];
//         index_a++;
//     }
//     return a;
// }
// }
 for(int i=strlen(p1)-1;i>=0; i--){
        if(p1[i]==p2){
            return &p1[i];
        }
    }
    return 0;
}
// int main(){
//     printf("%s", my_strrchr("abcabc" , 'b'));
// }
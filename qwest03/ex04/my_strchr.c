#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* my_strchr(char* p1, char p2)
{
    // for(int i = 0; param_1[i] != '\0'; i++){
    //     if(param_1[i] == param_2){
    //         char* a;
    //         a=(char*)malloc(strlen(param_1) * sizeof(char));
    //         int q = 0;
    //         for(int c = i; param_1[c] != '\0'; c++){
    //             a[q] = param_1[c];
    //             q++;
    //         }return a;
    //     }
    // }
    for(int i =0; i <strlen(p1); i++){
        if(p1[i]==p2){
            return &p1[i];
        }
    }
    return 0;
}

// int main(){
//     printf("%s", my_strchr("asd", 's'));
// }
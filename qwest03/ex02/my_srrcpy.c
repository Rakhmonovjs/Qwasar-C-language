#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* my_strcpy(char* param_1, char* param_2)
{
    // int len = 0;
    // for(int i = 0; param_2[i] != '\0'; i++){
    //     len++;
    // }

    for(int c = 0; param_2[c] != '\0'; c++){
        param_1[c] = param_2[c];
    }
    return param_1;
}
// int main(){
//     printf("%s\n", my_strcpy(" ", "abc"));
// }
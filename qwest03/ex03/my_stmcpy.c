#include <stdio.h>
#include <string.h>
char* my_strncpy(char* param_1, char* param_2, int param_3)
{
    // int len = 0;
    // for(int i = 0; param_2[i] != '\0'; i++){
    //     len++;
    // }
// for(int i=0;  i <= param_3; i++){
//      param_1[i]=param_2[i];
// }



    for(int i = 0; param_2[i] && param_3--; i++){
        param_1[i] = param_2[i];
    }
    return param_1;

}
// int main(){
//     printf("%s\n", my_strncpy("" , "RaInB0w d4Sh! " ,6));
// }

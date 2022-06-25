#include <stdio.h>
#include <string.h>
int my_strcmp(char* p1, char* p2)
{
if(strlen(p1)>strlen(p2)){
      return -1;
  }
  else if((strlen(p1)<strlen(p2))){
      return 1;
  }else if(strlen(p1)==strlen(p2)){
      return 0;}
}


// if(strlen(param_1) != strlen(param_2)){
    //     if(strlen(param_1) > strlen(param_2)){
    //         return -1;
    //     }else{
    //         return 1;
    //     }
    // }else{
    //     return 0;
    // }


// int main(){
//     printf("%d\n", my_strcmp("as", "asd"));
// }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* reverse_string(char* p1)
{   int o=0;
    char* a;
    a= (char *)malloc(strlen(p1));
    for(int i=strlen(p1)-1; i>=0; i--){
        a[o++]=p1[i];
    }
    return a;
}


// int main(){
//     reverse_string("hello");
//     printf("%s\n", reverse_string("hello"));
// }
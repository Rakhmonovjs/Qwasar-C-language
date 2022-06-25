#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* my_strstr(char* param_1, char* param_2)
{
    int r = 0;
    char* a;
    a=(char*)malloc(strlen(param_1)*sizeof(char));
    int b = 0;
    int p = 0;
    int l = 0;
    for(int i = 0; param_1[i] != '\0'; i++){
        
            if(param_1[i]!=param_2[l]){
                a[b] = '-';
                b++;
               
            }else{
                r = i;
                a[b]=param_1[i];
                b++;
                p++;
                l++;
            }
         
    }
    char* x;
    x=(char*)malloc(strlen(param_1)*sizeof(char));
    if(strlen(param_2) > strlen(param_1)){
        return NULL;
    }
    if(strlen(param_2) == 0){
        return param_1;
    }
    if(p==0){
        return NULL;
    }
        if(p > 0){
            int w = 0;
            int q = 0;
            for(int q = 0; q < strlen(param_1); q++){
                if(a[q]!= '-'){
                    x[w]=a[q];
                    w++;
                }
            }
            int y = r;
            for(int u=strlen(x)-1; u >= 0; u--){
                
                    if(param_1[y]!= x[u] ){
                        return NULL;
                    }
                y--;
                
            }

            for(int c = r + 1; param_1[c] != '\0'; c++){
                x[w]= param_1[c];
                w++;
            }
        }return x;
}

// int main(){
//     printf("%s", my_strstr("otabekotabekilefdewf", "beki"));
// }
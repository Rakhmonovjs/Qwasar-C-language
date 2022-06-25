

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int joylash(char* arr1, char arr2){
    for(int i = 0; i<strlen(arr1); i++){
        if(arr1[i]==arr2){
            return 1;
        }
    }
    return 0;
}


int main(int argc , char** argv){
    int son[128]={0};
    char joy[128];
    int x=0;
    for(int i =1; i < argc; i++){
      for(int j = 0; j<strlen(argv[i]); j++){
        son[argv[i][j]]++;
     if(joylash(joy, argv[i][j])==0){
         joy[x]=argv[i][j];
         x++;
     }
      }
    }

    for(int i =0; i <strlen(joy)-1; i++){
        for(int j=i+1; j<strlen(joy); j++){
            if(joy[i]>joy[j]){
                char x= joy[i];
                joy[i]=joy[j];
                joy[j]=x;
            }
        }
    }

    for(int i = 0; i <strlen(joy); i++){
        if(joy[i]!='"'){
            printf("%c:%d\n", joy[i] , son[joy[i]]);
        }
    }
}
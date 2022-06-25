#include <stdio.h>
#include <string.h>

char* my_strdup(char* param_1)
{
    char* j;
    j= (char*)malloc(strlen(param_1)* sizeof(char));
    for(int i = 0; param_1[i] != '\0'; i++){
        j[i] = param_1[i];
    }
    return j;
}
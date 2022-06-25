#include <stdio.h>
#include <string.h>
#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif


char* my_join(string_array* param_1, char* param_2)
{
    int sum = 0;
    for(int i = 0; i < param_1->size; i++){
        sum += strlen(param_1->array[i]);
    }
    sum += (param_1->size - 1) * strlen(param_2);

    char* a;
    a = (char*)malloc(sum * sizeof(char));
    int y = 0;
    for(int i = 0; i < param_1->size; i++){
        for(int j = 0; param_1->array[i][j]!= '\0'; j++){
            a[y] = param_1->array[i][j];
            y++;
        }
        if(i != param_1->size-1){
        for(int j = 0; param_2[j]!= '\0'; j++){
            a[y] = param_2[j];
            y++;
        }
        }
        
    }
    return a;
}
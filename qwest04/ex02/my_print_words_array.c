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


void my_print_words_array(string_array* param_1)
{
    for(int i = 0; i < param_1->size; i++){
        for(int j=0; param_1->array[i][j] != '\0'; j++){
            putchar(param_1->array[i][j]);
        }
        putchar('\n');
    }
}

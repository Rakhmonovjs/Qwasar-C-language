#include <string.h>
#include <stdio.h>
#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif


integer_array* my_count_on_it(string_array* param_1)
{
    integer_array *res;
    res->size = param_1->size;
    for(int i = 0; i < param_1->size; i++){
        res->array[i] = strlen(param_1->array[i]);
    }
    return res;
}
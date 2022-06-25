#include<stdio.h>
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif


void my_first_struct(integer_array* p1) 
{ 
    printf("%d\n", p1->size); 
 
    for(int i = 0; i < p1->size; i++){ 
        printf("%d\n", p1->array[i]); 
    } 
}
#include <stdio.h>
#include <string.h>

int* my_range(int param_1, int param_2)
{
    int* a;
    a=malloc(sizeof(int)* ((param_2 - param_1)+1));
    for(int i=0; i<param_2; i++){
        a[i] = param_1 + i;
    } return a;
}
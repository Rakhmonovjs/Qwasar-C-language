#include <stdio.h>
#include <string.h>

char* my_spaceship(char* param_1)
{
    int x = 0;
    int y = 0;
    char side[5] = "up";

    char r[5] = "right";
    char l[5] = "left";
    char d[5] = "down";
    char u[5] = "up";
    char* j;
    j = (char*)malloc(34 * sizeof(char));
    int o= 0;
    for(int i = 0; param_1[i] != '\0'; i++){
        if(param_1[i] == 'R'){
            if(side[o]== r[o]){
                strcpy(side, d);
            }
            else if(side[o] == l[o]){
                strcpy(side, u);
            }
            else if(side[o] == d[o]){
                strcpy(side, l);
            }
            else if(side[o] == u[o]){
                strcpy(side, r);
            }
        }
        else if(param_1[i] == 'L'){
            if(side[0] == r[0]){
                strcpy(side, u);
            }
            else if(side[0] == u[0]){
                strcpy(side, l);
            }
            else if(side[0] == l[0]){
                strcpy(side, d);
            }
            else if(side[0] == d[0]){
                strcpy(side, r);
            }
        }
        else if(param_1[i] == 'A'){
            if(side[0] == r[0]){
                x++;
            }
            else if(side[0] == u[0]){
                y--;
            }
            else if(side[0] == l[0]){
                x--;
            }
            else if(side[0] == d[0]){
                y++;
            }
        }
    }
    snprintf( j, 34, "{x: %d, y: %d, direction: '%s'}", x, y, side);
    return j;
}
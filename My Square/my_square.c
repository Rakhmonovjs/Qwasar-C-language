#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int ac, char **av){
    if(ac<3){
        return 0;
    }
    int x=atoi(av[2]);
    x--;
    int y=atoi(av[1]);
    y--;
    for(int i=0; i<=x;i++){
        for(int j=0; j<=y;j++){
            if(j==0 && i==0 || i==x && j==0 || j==y && i==0 || i==x && j==y){
                printf("o");
            }
            else if(j==0 || j==y){
                printf("|");
            }
            else if(i==0||i==x){
                printf("-");
            }
            else {
                printf(" ");
            }
        }
        putchar('\n');
    }

}
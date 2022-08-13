
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>

void my_putchar(char a){
    write(1, &a, 1);
}
char* sendaddres(unsigned long int x, int col) {
    unsigned long int firstnum = x;
    unsigned int len = 0;
    char* result = NULL;
    unsigned long int temp_p;

    firstnum = firstnum > 0 ? firstnum : -(firstnum);

    while(x) {
        x = x/col;
        len++;
    }
    if (!(result = (char*)malloc(sizeof(char) * len + 1))) {
        return NULL;
    }
    *(result+len) = '\0';
    len--;
    while(firstnum > 0) {
        temp_p = firstnum % col;
        if(temp_p < 10) 
            *(result + len) = temp_p + '0';
        else 
            *(result + len) = ((temp_p)-10 + 97);
            firstnum = firstnum / col;
            len--;
    }
    return result;
}
char* asd(int son,char h){
    int a[10000];
    int ai=0;
    if(son==0){
        return "0";
    }
    int neg=0;
    if(son<0){
        son=son* -1;
        if(h != 'u')
        neg++;
    }

    while(son!=0){
        a[ai]=son%10;
        son=son/10;
        ai++;

    }
    char* s=(char*)malloc(sizeof(char*)* ai);
        int q=0;
        if(neg ==1){
            s[0]='-';
            q++;
        }
    for(int i=ai-1;i>=0;i--){
        s[q]=a[i]+'0';
        q++;
        
        }
    return s;

}

char putstr(char* asd){
    int i=0; 
    while (i<strlen(asd)) {
        my_putchar(asd[i]);
        i++;
    }
    return i;
}
int my_printf(char*  param, ...){
    va_list table;
    va_start(table, param);
    int son=0;
    char a;
    char* str;
    int aq;
    char d[10000];
    int j=0;
    char hexadec[128];
    int l = 0;
    int res;
    intptr_t p;
    for(int i=0;i<strlen(param);i++){
        if(param[i]=='%'){
            i++;
            switch (param[i]) {
            case 'c':
                a=(char)va_arg(table, int);
                my_putchar(a);
                son++;
            break;
            case 's':
                str=va_arg(table, char*);
                if(str==(char*)NULL){
                    str="(null)";
                }
                son+=putstr(str);
            break;
            case 'd':
                aq=va_arg(table, int);
                son+=putstr(asd(aq,'d'));
            break;
            case 'o':
               aq=va_arg(table, int);
                while(aq !=0){
                    d[j++]=aq % 8 + '0';
                    aq= aq/8;
                    son++;
                }
                
                for(int i=strlen(d);i>=0;i--){
                    my_putchar(d[i]);
                }
                

            break;
            case 'x':
             aq=va_arg(table, int);
                while (aq!=0) {
                res= aq %16;
                if(aq<10){
                    hexadec[l++]=res+48;
                }
                else {
                    hexadec[l++]=res+55;
                }
                aq=aq/16;
                }
                l--;
                while (l>=0) {
                my_putchar(hexadec[l]);
                l--;
                son++;
                }
            break;
            case 'u':
                 aq=va_arg(table, int);
                 son+=putstr(asd(aq,'u'));
            break;
            case 'p':
                p=va_arg(table, intptr_t);
                str=sendaddres(p, 16);
                write(1, "0x", 2);
                aq=putstr(str);
                son+=aq+2;
            break;
            }
        }
        else{  my_putchar(param[i]);
        son++;
        }
    }

       
    return son;
}



// int main(){
//     int j= my_printf("%p!\n", "asdadadadad");
//     printf("%d\n", j);
// }























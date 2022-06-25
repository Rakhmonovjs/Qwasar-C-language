  
#include<stdio.h> 
#include<unistd.h> 
#include<ctype.h> 
void my_putchar(char c){ 
    write (1, &c, 1); 
} 
 
void my_print_reverse_alphabet() 
{ 
    char asd; 
    for (asd ='z'; ras >= 'a'; asd--) { 
        my_putchar(asd); 
    } 
    putchar('\n'); 
}
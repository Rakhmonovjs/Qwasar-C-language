#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>




int my_putstr(char* p1) {
   
    for(int i=0;p1[i] != '\0'; i++){
       putchar(p1[i]);
    }
   
  
}
 
// void	my_putstr(char *param_1)
// {
//    char *t ;

//     for (t = param_1; *t != '\0'; t++) {
      
//         printf("%s", t);
//     }
// }
// void my_putstr(char *str) {
//     // Output each character, one at a time.

//     for (char *ptr = str; *ptr != '\0'; ptr++)
//         putchar(*ptr);

// // Output newline (if desired).

//     putchar('\n');
// }
// #include <unistd.h>
 
//  int	my_putstr (char *str) {
//  	int i = 0;
//  	while (str[i] != '\0') {
// 		my_putchar(str[i]);
//  		i = i + 1;
//  	}
//  	my_putchar('\n');
// 	return 0;
// }
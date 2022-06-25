// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>
// #include <stdlib.h>
// #include <fcntl.h>


#include <ctype.h> 
#include<stdio.h> 
#include<unistd.h> 
 
void my_putchar(char c) { 
  for(char i = c; i <= 'z'; i++){ 
   write(1, &i, 1); 
} 
  write(1,"\n", 1); 
} 
void my_print_alphabet(){ 
    my_putchar('a'); 
}

















// void my_print_alphabet()
// {


// // void ft_putchar(char c) { write(STDOUT_FILENO, &c, 1); }

// // void ft_print_alphabet(void) {
//   char letter;

//   letter = 'a';
//   while (letter <= 'z') {
//     putchar(letter);
//     letter++;
//   }
// }



// void my_putchar(char *c){
//     write(1, "/n ", strlen(c));
// }

// // void my_print_alphabet()
// // {

// // }

// int main(int argc, char *argv[]){
//     int fd;
//     char buf[128];
//     fd = open(argv[1], O_RDONLY);
//     // if(fd == -1){
//     //     perror(argv[1]);
//     //     return EXIT_FAILURE;
//     // }

//     // scanf("%5s", buf);

//      printf("%d", fd);

    

//     // write(fd, buf, strlen(buf));

//     close(fd);

//     return 0;
// }
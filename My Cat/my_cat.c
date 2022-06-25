#include <stdio.h>
#include<fcntl.h>
#include<unistd.h>

// int main(int argc, char **argv){
//   int as , ad;
//    for(int a = 1; a < argc; a++){
//        as = open(argv[a], O_RDONLY);
//        while(read(as, &ad, 1)== 1){
//            write(STDOUT_FILENO, &ad,1);
//        }
//        close(as);
//    }  
// }

int main(int asd, char **acd){
int as;
char ad;
int a=1;
while(a<asd){
    as=open(acd[a],O_RDONLY);
    a++;
    while(read(as, &ad, 1)==1){
        write(1, &ad,1);
    }
    close(as);
}
}
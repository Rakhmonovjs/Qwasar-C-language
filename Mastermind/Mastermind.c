#include <stdio.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
//berilgan soz yoki sonlarni bittalab ciqarish 
void my_char(char a){
    write(1, &a, 1);
}
//berilgan sonni togri javobni har biri bilan tekshirib chiqadi
int taqos(char* soz, char harfi){
    for(int harf=0; harf<4; harf++){
                if(soz[harf] == harfi){
                    return 1;
                }
            }   
            return 0;
}
 //berilgan va jovobdagi arraylarni solishtiradi
int sanaw(char* asd,char* asb){
    while(*asd){
       if(*asd != *asb){
           return 0;
       }
       asb++;
       asd++;
    }
    return 1;
}
//berilgan sonni togri javobni har biri bilan tekshirib chiqadi

//void
//    void randomCode(char* num){
//             srand(time(NULL));
//             int i =0;
//             while (i<4) {
//                 char buffer = rand()%8 + '0';
//                     if(!holdin(num,buffer)){
//                         num[i] = buffer;
//                     i++;
//                     }
//             }
//         }//mahfiy kodni random tarzida yaratadi  



// void secredCode(char arr[]){  
//     srand(time(NULL));  
//     int i = 0;  
//     while(i < 4){  
//         char temp = rand()%7 + '0';  
//         if(contain(arr, temp) == 0){  
//             arr[i] = temp;  
//             i++;  
//         }  
//     }  
// }  
// void
//sonlarni yani javobni random tarzida qib beradi
void randomson(char* son){
    srand(time(NULL));
    int i=0;
    while(i < 4){  
        char temp = rand()%7 + '0';  
        if(taqos(son, temp) == 0){  
            son[i] = temp;  
            i++;  
        }  
    }  

}
//   int strlength(char* str){
//             int j =0; 
//             for(int i = 0 ; str[i]!='\0'; i++){
//                 j++;
//             }
//             return j;
//         }

int sozuzun(char* asd){
    int i=0, j=0;
    while (asd[i] != '\0') {
        i++; j++;
    }
    return j;
}
int javob(char* asd){
    if(sozuzun(asd)>4 || sozuzun(asd)<4){
        return 0;
    }
    for(int i=0; i<4;i++){
        if(asd[i]>='8' && asd[i] <= 'z'){
            return 0;
        }
    }
    for(int i=0; i<4; i++){
        for(int j=i+1;j<4;j++){
            if(asd[j]==asd[i]){
                return 0;
            }
        }
    }
    return 1;
}
//void
void sozlar(char* asd){
    for(int i=0;i<sozuzun(asd);i++){
        my_char(asd[i]);
    }
}

int main(int p1, char** p2){
    int rundson =10;
    char joylar[100000];
    int wp=0;
    int mp=0;
    for (int i=1; i<p1; i++){
        if(sanaw(p2[i], "-t")){
            mp++; //mp= i+1
            rundson=atoi(p2[mp]);
        }
        if(sanaw(p2[i], "-c")){
            wp++; //wp= i+1
        }
    }
    if(wp == 0){
        randomson(joylar);
    }
    else{
        for(int i=0; i<4;i++){
            joylar[i]= p2[wp][i];
        }
    }

    sozlar("will you find the secret code?\n");
    sozlar("---\n");
    int w=0; int m=0;
    for(int i=0;i<rundson;i++){
        printf("Round %d\n", i);
        int xc=0;
        char code[1000000];//berilgan javoblarni hajmi olinadi
        //  do{
        // string(">");
        // wp = 0;
        // mp = 0;
        // scanf("%s", currentcode);
        // if(right(currentcode)==0)
        // {
        //     x=0;
        //     string("Wrong input!\n");
        // }else
        // {
        //     x=1;
        // }
        // }
        // while(x!=1);
        while (xc !=1) {
            sozlar(">");
              int w=0; int m=0;
               scanf("%s", code);
               if(javob(code)==0){
                   xc=0;
                    sozlar("Wrong input!\n");
               }else{
                   xc=1;
               }
        }
        int j=0;
        for(j=0;j<4;j++){
            if(joylar[j]== code[j]){
                w++;
            }
            if(joylar[j] != code[j] && taqos(joylar, code[j]) ){
                m++;
            }
        }
        if(w==4){
            sozlar("Congratz! You did it!\n");
            return 0;
        }
        else{
            printf("Well placed pieces: %d\n", wp);
            printf("Misplaced pieces: %d\n", mp);
        }
        sozlar("---\n");
    }
}









2 second
 

 #include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
// this  function is comparing two indexes / IF theyare isn't same it will return 0 else 1.
int compare(char ar1[], char ar2[]){
    int l = strlen(ar1);
    for(int i = 0; i < l; i++){
        if(ar1[i] != ar2[i]){
            return 0;
        }
    }
    return 1;
}
// this function cheks is there same index in array/
int contain(char* arr, char a){
    for(int i=0 ; i < 4 ; i++){
        if(arr[i]==a){
        return 1;
        }
    }
return 0;
}
// this function cheks length and characters if they does not meet our standards it will return 0.
int iscorrect( char* arr){
    // cheking for length
    if(strlen(arr)>4 || strlen(arr)<4){
        return 0;
    }
    // cheking for presence of only numbers and only from 0 to 7.
    for(int i =0 ; i < 4; i++){
        if(arr[i] >= '8' && arr[i] <='z'){
            return 0;
        }
    }
    // cheking for non-identity.
    for (int i = 0; i < 4; i++){
        for(int j = i +1; j < 4; j++){
            if(arr[j]==arr[i])
            return 0;
        }
    }
    return 1;
}
//this function is creating random code if the user not write in the begining.
void secretCode(char *code){
    srand(time(NULL));
    int i=0;
    while(i<4){
        char temp = rand()%8 + '0';
        if(!contain(code, temp)){
            code[i] = temp;
            i++;
        }
    }
}

int main(int argc, char* argv[]){
    char code[100000];
    int attempts = 10;
    int wp = 0;
    int mp = 0;
    int t =0;
    int c = 0;
// this loop is to check if the user entered the password or the number of rounds.
    for(int i = 1; i < argc; i++){
        if(compare(argv[i], "-c")){ 
            c = i + 1; 
        } 
        if(compare(argv[i], "-t")){ 
            t = i + 1; 
            attempts = atoi(argv[t]); 
        } 
    } 
    
 // and if the user not entered the code, it will automatically created.   
    if(c == 0){ 
        secretCode(code);
    }else{ 
        for(int i = 0; i < 4; i++){ 
            code[i] = argv[c][i]; 
        } 
    } 


    // printf("%s\n", code);
    printf("will you find the secret code?\n---\n");
    //this loop for rounds.
    for(int j =0 ; j < attempts; j++){
        printf("Round %d\n", j);
        int correctInp = 1;
        char input[100000];
        do{
            printf(">");
            wp = 0;
            mp = 0;
            scanf("%s", input);
            if(iscorrect(input) == 0){
               correctInp =0;
               printf("Wrong input!\n");
                }else{
                   correctInp = 1;
                }
        }
        while(correctInp != 1);
        // this loop for counting well placed and misplaced piaces.
        for( int c = 0; c <4; c++){
            if(code[c] == input[c]){
                wp++;
            }
            if(code[c] != input[c] && contain(code, input[c])){
                mp++;
            }
        }
        // if well placed piaces all will correct it will print congartz! otherwise it will shows number of wp and wp/
        if(wp == 4){
            printf("Congratz! You did it!\n");
            return 0;
        }else{
            printf("Well placed pieces: %d\n", wp);
            printf("Misplaced pieces: %d\n", mp);
        }
        printf("---\n");
    }
}
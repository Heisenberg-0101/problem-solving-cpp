//passaward_generater.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){ 
    int length , i;
     
    //character for passward

    char lower[] = "abcdefghijklmnopqrstuvwxyz";
    char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char number[] = "0123456789";
    char symbol[] = "!@#$%^&*()_+";
    char all[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+";

    printf("enter passaward lenght: ");
    scanf("%d", &length);

    //initial random number generator
    srand(time(0));
    printf("generate passaward: ");
    for(i=0;i<length;i++){
        int index = rand() % (sizeof(all) - 1);
        printf("%c", all[index]);

    }
    printf("\n");


    return 0;
}
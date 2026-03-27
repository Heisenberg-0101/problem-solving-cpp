#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main() {
    int number, guss , attempts = 0;
    //generate random number between 1 to 100

    srand(time(0));
    number = rand() % 100 +1;
    printf("welcome to number gussing game\n");
    printf("guss a number between 1 to 100\n");

    do {
        printf("\n enter your guss: ");
        scanf("%d",&guss);
        attempts++;
        if(guss>number){
            printf("aukat me rah le bhai, thoda chota guss karo\n");
        } else if (guss<number){
            printf("haa ab tu aukat me aa gaya, thoda bada guss karo\n");

        } else {
            printf("ab tune apni aukat me guss kar liya, congratulations! you gussed the number in %d attempts\n", attempts);
        }
        }
        
     while(guss != number);

//number gussing game




return 0;
}
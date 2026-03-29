//unit converter in c language
#include <stdio.h>
int main(){
    float value, result;
    int choice;
    printf("===welcome to unit converter===\n");
    printf("1.kilometer to meter\n");
    printf("2.meter to kilometer\n");
    printf("3.celcius to fahrenheit\n");
    printf("4.fahrenheit to celcius\n");
    printf("5.kilogram to gram\n");
    printf("6.gram to kilogram\n");
    printf("enter your choice: ");
    scanf("%d", &choice);
    printf("enter value: ");
    scanf("%f", &value);

    switch (choice){
        case 1:
        printf("result: %.2f meter\n",value*1000);
        break;

        case 2:
        printf("result: %.2f kilometer\n");
        break;
        case 3:

        printf("result: %.2f fahrenheit\n", (value*9/5)+32);
        break;
        case 4:
        printf("result: %.2f celcius\n", (value-32)*5/9);
       break;
        case 5:
        printf("result: %.2f gram\n", value*1000);
        break;
        case 6:
        printf("result: %.2f kilogram\n", value/1000);
        break;
        default:
        printf("invalid choice\n"); 

    }
    return 0;
}
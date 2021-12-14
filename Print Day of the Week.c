#include<stdio.h>

int main() {

int A;
printf("Enter a value from 1 thorough 7: ");
scanf("%d",&A);

switch (A) {
        
        case 1 :
            printf("Monday");
        break;
        
        case 2:
            printf("Tuesday");
        break;
        
        case 3:
            printf("Wednesday");
        break;
        
        case 4:
            printf("Thursday");
        break;

        case 5:
            printf("Friday");
        break;

        case 6:
            printf("Saturday");
        break;

        case 7:
            printf("Sunday");
        break;
        
         default:
        printf("Error! Number is not correct");
    }

}
#include<stdio.h>

int main() {

int A;
printf("Enter your percentage from 10 thorough 100: ");
scanf("%d",&A);

switch (A) {
        
        case 10 :
            printf("Fail");
        break;
        
        case 20:
            printf("Fail");
        break;
        
        case 30:
            printf("Fail");
        break;
        
        case 40:
            printf("Pass");
        break;

        case 50:
            printf("Pass");
        break;

        case 60:
            printf("Pass");
        break;

        case 70:
            printf("Distinction");
        break;

        case 80:
            printf("Distinction");
        break;

        case 90:
            printf("Distinction");
        break;

        case 100:
            printf("Passed with distinction");
        break;
        
         default:
        printf("Error! Number is not correct");
    }

}
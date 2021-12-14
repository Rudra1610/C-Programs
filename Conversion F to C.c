#include<stdio.h>
#include<math.h>

int main () {

    char choice;
    int A, B, C;
    printf("Choose 1 or 2(1 for Farenheit and 2 for Celcius): ");
    scanf("%d",&choice);
    
    if (choice == 1) {

        printf("Enter value of F: ");
        scanf("%d",&A);
        C = (A-32)/1.8;
        printf("This is Celcius: %d",C);

    }
    else (choice == 2);

        printf("Enter value of C: ");
        scanf("%d",&C);
        B = (1.8*C+32);
        printf("This is Farenheit: %d",B);

}
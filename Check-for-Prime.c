#include <stdio.h>

int main() {

    int a;

    printf("Enter the number = ");
    scanf("%d", &a);

    for (int i = 2; i < a; i++) {

        if (a % i == 0) {

            printf("The number is %d not a prime number",a);
            break;

        }

        else{

            printf("The number %d is a prime number",a);
            break;

        }
        
        
    }

    
    //While Loop
    // int i = 2;
    // while(i<a) {

    //     if (a % i == 0) {

    //         printf("The number is %d not a prime number",a);
    //         break;

    //     }

    //     else{

    //         printf("The number %d is a prime number",a);
    //         break;

    //     }
    //     i++;

    //  }
    
    return 0;

}
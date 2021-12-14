#include<stdio.h>
#include<math.h>

int main () {
    
    int A;
    printf("Enter a Number: ");
    scanf("%d",&A);
    
    if(A % 2 ==0) { 
        printf("The number is even"); 
    }

    else {
        printf("Number is odd"); 
    }
}

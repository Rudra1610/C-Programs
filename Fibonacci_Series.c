#include<stdio.h>
#include<math.h>

int main () {

    int a,b,i,result;

    printf("This program will aid you in finding only the first 10 terms of the sequence\n");
    printf("Enter the first number of the Fibonacci Sequence: ");
    scanf("%d",&a);
    printf("Enter the second number of the Fibonacci Sequence: ");
    scanf("%d",&b);

    for ( i = 1; i <= 10; i++) {

        printf("\n");
        printf("%d",a);
        result = a+b;
        a = b;
        b = result;
        
    }
    

}
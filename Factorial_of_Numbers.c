#include <stdio.h>

int a;
int factorial(int a);

int main() {

    int n;
    printf("Enter an integer: ");
    scanf("%d", &a);

    n = factorial(a);
    printf("Factorial of %d = %d",a,n);

}

int factorial(int a) {

    if (a == 1 || a == 0) {

        return 1;

    }

    else {

        return a * factorial(a-1);

    }
    

}
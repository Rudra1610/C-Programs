#include <stdio.h>

int main() {

    int a,b,c,d;
    printf("Enter the 4 input numbers : ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    printf("The numbers are : %d\t%d\t%d\t%d\t",a,b,c,d);

    if (a>b && a>c && a>d) {

        printf("A is greatest amongst  A,B,C,D");

    }

    else if (b>a && b>c && b>d) {

        printf("B is greatest amongst  A,B,C,D");

    }
    
    else if (c>a && c>b && c>d) {

        printf("C is greatest amongst  A,B,C,D");

    }

    else if (d>a && d>b && d>c) {

        printf("D is greatest amongst  A,B,C,D");

    }
    
    
    return 0;

}
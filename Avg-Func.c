#include <stdio.h>
int a,b,c;

int average (int a,int b,int c) {

    int d = (a+b+c)/3;
    return d;

}

int main() {

    printf("Enter 3 values to calculate average = ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    int d = average(a,b,c);
    printf("The average is %d",d);

    return 0;

}
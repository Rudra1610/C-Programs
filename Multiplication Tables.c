#include<stdio.h>
#include<math.h>

int main() {

    int a,i;
    printf("Enter a number: ");
    scanf("%d",&a);

    for (i = 1;i<=12;i++) {

        printf("%d*%d = %d",a,i,a*i);
        printf("\n");

    }


}
#include <stdio.h>

int main() {
    int A , B;
    printf("Enter 2 Operands: ");
    scanf("%d%d",&A,&B);
    
    if(A>B) {
        printf("A is greater than B");
    }
    
    else { 
    printf("B is greater than A"); 
    }
    return 0;
}

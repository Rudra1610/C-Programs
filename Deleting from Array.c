#include<stdio.h>

int i,n;

void main() {

    int array[5],pos;
    void delete (int [],int,int);
    printf("Enter total number of Elements = ");
    scanf("%d",&n);
    printf("Enter the Elemen\n");
    for (i = 0; i < n; i++) {

        scanf("%d",&array[i]);

    }

    printf("Enter from which position do you want to delete the element = ");
    scanf("%d",&pos);
    --pos;
    delete(array,pos,n);

}

void delete(int array[],int pos,int n) {
    
    int j,item;
    item = array[pos];
    printf("Deleted element is %d\n",item);

    for (j = pos; j <= n-1; j++) {

        array[j] = array[j+1];
        
    }

    n = n-1;
    printf("New array after alteration is\n");
    for (i = 0; i < n; i++) {

        printf("%d\n",array[i]);
        
    }
    

}
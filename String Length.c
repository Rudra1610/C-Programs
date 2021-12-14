#include<stdio.h>
#include<string.h>

int main () {

    char a[20] = "Program";
    char b[20] = {'a','e','i','o','u'};
    char c[20];
    int result;

    result = strcmp(a,c);
    printf("Result = %d",result);
    printf("\n");

    strcpy(c,a);
    puts(c);

    printf("Length of string A = %d",strlen(a));
    printf("\n");
    printf("Length of string B = %d",strlen(b));

}
#include<stdio.h>
#include<math.h>

int main() {

    int year;
    printf("Enter any year to check if it's leap year: ");
    scanf("%d",&year);
    if ( year %4 == 0)
    {
        printf("It's a Leap year");
    }
    else
    {
        printf("It's not a Leap year");
    }


}
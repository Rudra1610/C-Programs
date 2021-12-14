#include<stdio.h>
#include<math.h>

int main() {

    float subject1,subject2,subject3,subject4,subject5;
    float percentage,avg;

    printf("Enter marks for subject 1: ");
    scanf("%f",&subject1);
    printf("Enter marks for subject 2: ");
    scanf("%f",&subject2);
    printf("Enter marks for subject 3: ");
    scanf("%f",&subject3);
    printf("Enter marks for subject 4: ");
    scanf("%f",&subject4);
    printf("Enter marks for subject 5: ");
    scanf("%f",&subject5);

    percentage = ((subject1+subject2+subject3+subject4+subject5)/500)*100;
    printf("Percentage Obtained: %.2f",percentage);

}
#include<stdio.h>
#include<math.h>

//For printing the statements
void print() {

    printf("1 = Area of Square\n");
    printf("2 = Area of Rectangle\n");
    printf("3 = Area of Circle\n");
    printf("4 = Circumference of Circle\n");
    printf("5 = Area of Triangle\n");

}

int main() {
    //Variables
    float r,a,b;
    float R,Pi;
    Pi = 3.14;
    int choice;
    print();
    printf("Choose 1,2,3,4,5: ");
    scanf("%d",&choice);

    //If Condition
    if (choice == 1) {

        printf("Enter the value of l: ");
        scanf("%f",&a);
        printf("Area of Square = %f",pow(a,2));

    }
    else if (choice == 2) {

        printf("Enter the value of l and b: ");
        scanf("%f,%f",&a,&b);
        printf("Area of Rectangle = %f",a*b);

    }
    else if (choice == 3) {

        printf("Enter the value of r: ");
        scanf("%f",&r);
        R = Pi*r*r;
        printf("Area of Circle = %f",R);

    }
    else if (choice == 4) {

        printf("Enter the value of r: ");
        scanf("%f",&r);
        R = Pi*2*r;
        printf("Circumference of Circle = %f",R);

    }
    else
    printf("Enter the value of base and height: ");
        scanf("%f,%f",&a,&b);
        printf("Are of Triangle = %f",0.5*a*b);

    return 0;

}
#include <stdio.h>
#include <math.h>

int main() {
    
    char operator;
    double A, B;
    printf("Enter an operator (+, -, *, / ,% ): ");
    scanf("%c",&operator);
    printf("Enter two operands: ");
    scanf("%lf %lf", &A, &B);

    switch (operator) {
        
        case '+':
            printf("%.1lf + %.1lf = %.1lf", A, B, A + B);
        break;
        
        case '-':
            printf("%.1lf - %.1lf = %.1lf", A, B, A - B);
        break;
        
        case '*':
            printf("%.1lf * %.1lf = %.1lf", A, B, A * B);
        break;
        
        case '/':
            printf("%.1lf / %.1lf = %.1lf", A, B, A / B);
        break;

      case '%':
            printf("%.1lf / %.1lf = %.1lf", A, B, (B/A)*100);
        break;
        
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}
#include <stdio.h>
#include <math.h>

int main() {
    char choice;
    double num1, num2, result;
    
    printf("Scientific Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square Root\n");
    printf("6. Exponentiation\n");
    printf("Enter your choice (1-6): ");
    scanf(" %c", &choice);
    
    switch(choice) {
        case '1':
            printf("Enter two numbers for addition: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '2':
            printf("Enter two numbers for subtraction: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '3':
            printf("Enter two numbers for multiplication: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '4':
            printf("Enter two numbers for division: ");
            scanf("%lf %lf", &num1, &num2);
            if(num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            }
            else {
                printf("Error: Division by zero\n");
            }
            break;
        case '5':
            printf("Enter a number for square root: ");
            scanf("%lf", &num1);
            if(num1 >= 0) {
                result = sqrt(num1);
                printf("Result: %lf\n", result);
            }
            else {
                printf("Error: Invalid input for square root\n");
            }
            break;
        case '6':
            printf("Enter a base number: ");
            scanf("%lf", &num1);
            printf("Enter an exponent: ");
            scanf("%lf", &num2);
            result = pow(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        default:
            printf("Error: Invalid choice\n");
            break;
    }
    
    return 0;
}
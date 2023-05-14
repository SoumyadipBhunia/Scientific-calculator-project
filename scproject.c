#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;

    do {
        printf("Scientific Calculator\n");
        printf("---------------------\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power\n");
        printf("6. Square Root\n");
        printf("7. Factorial\n");
        printf("8. Log (base 10)\n");
        printf("9. Log (base e)\n");
        printf("10. Sine\n");
        printf("11. Cosine\n");
        printf("12. Tangent\n");
        printf("13. Ceil\n");
        printf("14. Floor\n");
        printf("15. Exit\n");

        printf("Enter your choice (1-15): ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 14) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
        }

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %lf\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %lf\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %lf\n", result);
                break;
            case 4:
                result = num1 / num2;
                printf("Result: %lf\n", result);
                break;
            case 5:
                result = pow(num1, num2);
                printf("Result: %lf\n", result);
                break;
            case 6:
                result = sqrt(num1);
                printf("Result: %lf\n", result);
                break;
            case 7:
                result = 1;
                for (int i = 2; i <= num1; i++) {
                    result *= i;
                }
                printf("Result: %lf\n", result);
                break;
            case 8:
                result = log10(num1);
                printf("Result: %lf\n", result);
                break;
            case 9:
                result = log(num1);
                printf("Result: %lf\n", result);
                break;
            case 10:
                result = sin(num1);
                printf("Result: %lf\n", result);
                break;
            case 11:
                result = cos(num1);
                printf("Result: %lf\n", result);
                break;
            case 12:
                result = tan(num1);
                printf("Result: %lf\n", result);
                break;
            case 13:
                result = ceil(num1);
                printf("Result: %lf\n", result);
                break;
            case 14:
                result = floor(num1);
                printf("Result: %lf\n", result);
                break;
            case 15:
                printf("Exiting the calculator. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
        printf("\n");
    } while (choice != 15);

    return 0;
}

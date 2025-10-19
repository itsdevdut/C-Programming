#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;


    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);


    printf("\nSelect the operation to perform:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("The Addition of %.0f and %.0f is: %.2f\n", num1, num2, result);
            break;

        case 2:
            result = num1 - num2;
            printf("The Subtraction of %.0f and %.0f is: %.2f\n", num1, num2, result);
            break;

        case 3:
            result = num1 * num2;
            printf("The Multiplication of %.0f and %.0f is: %.2f\n", num1, num2, result);
            break;

        case 4:
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Division by zero is not allowed!\n");
                return 0;
            }
            printf("The Division of %.0f and %.0f is: %.2f\n", num1, num2, result);
            break;

        default:
            printf("Invalid choice! Please select between 1 to 4.\n");
    }

    return 0;
}

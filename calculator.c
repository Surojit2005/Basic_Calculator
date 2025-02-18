#include <stdio.h>

int main() {
    double num1, num2, result;
    int choice;
    char cont;
    
    do {
        
        printf("\nSimple Calculator\n");
        printf("Select operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);
        
       
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);
        
        switch(choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case 4:
                if (num2 != 0)
                    result = num1 / num2;
                else {
                    printf("Error: Division by zero is not allowed.\n");
                    continue;
                }
                printf("Result: %.2lf\n", result);
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 4.\n");
                continue;
        }
        
       
        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &cont);
        
    } while (cont == 'y' || cont == 'Y');
    
    printf("Thank you for using the calculator!\n");
    return 0;
}

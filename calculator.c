#include <stdio.h>
#include "calculator.h"

// Function to add two numbers
void add(float num1, float num2) {
    printf("Result: %.2f\n", num1 + num2);
}

// Function to subtract two numbers
void subtract(float num1, float num2) {
    printf("Result: %.2f\n", num1 - num2);
}

// Function to multiply two numbers
void multiply(float num1, float num2) {
    printf("Result: %.2f\n", num1 * num2);
}

// Function to divide two numbers
void divide(float num1, float num2) {
    if (num2 != 0) {
        printf("Result: %.2f\n", num1 / num2);
    } else {
        printf("Error: Division by zero!\n");
    }
}

int main() {
    float num1, num2;
    int choice;
    
    // Loop indefinitely to keep the calculator running
    while(1) {
        // Display the calculator menu
        printf("\nCalculator Menu:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        // Perform the operation based on user input
        if (choice == 5) {
            printf("Exiting the calculator...\n");
            break;  // Exit the loop if user chooses to exit
        }

        // Get numbers for the operation
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);

        // Call the respective function based on choice
        switch(choice) {
            case 1:
                add(num1, num2);
                break;
            case 2:
                subtract(num1, num2);
                break;
            case 3:
                multiply(num1, num2);
                break;
            case 4:
                divide(num1, num2);
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

#include <stdio.h>
#include "calculator.h"

int main() {
    int choice;
    float num1, num2;

    // Loop indefinitely to keep the calculator running
    while (1) {
        // Display menu
        printf("\nSimple Calculator\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Exit condition
        if (choice == 5) {
            printf("Exiting the calculator...\n");
            break;  // Exit the loop and end the program
        }

        // Take input for numbers
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter seco

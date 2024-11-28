// calculator.c

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

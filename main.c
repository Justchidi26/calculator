#include <stdio.h>

int main(void) {
    double a, b, answer;
    char c;
    int validInput = 0;

    
    while (!validInput) {
        printf("Enter a number: ");
        if (scanf("%lf", &a) != 1) {
            printf("Error: Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); 
        } else {
            validInput = 1;
        }
    }

    validInput = 0;
    while (!validInput) {
        printf("Please enter an operator (+, -, *, /): ");
        scanf(" %c", &c);
        if (c == '+' || c == '-' || c == '*' || c == '/') {
            validInput = 1;
        } else {
            printf("Invalid operator. Try again.\n");
        }
    }

    
    validInput = 0;
    while (!validInput) {
        printf("Enter another number: ");
        if (scanf("%lf", &b) != 1) {
            printf("Error: Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); 
        } else {
            validInput = 1;
        }
    }

    
    int success = 1;
    if (c == '+') {
        answer = a + b;
    } else if (c == '-') {
        answer = a - b;
    } else if (c == '*') {
        answer = a * b;
    } else if (c == '/') {
        if (b == 0) {
            printf("Invalid. Division by 0 is not allowed.\n");
            success = 0;
        } else {
            answer = a / b;
        }
    }

    if (success) {
        printf("Answer is: %.2lf\n", answer);
    }

    return 0;
}
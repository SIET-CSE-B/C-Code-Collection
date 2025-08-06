#include <stdio.h>
int main() {
    char op;
    float a, b;
    printf("Enter operator (+ - * /): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    switch(op) {
        case '+': printf("Result = %.2f", a + b); break;
        case '-': printf("Result = %.2f", a - b); break;
        case '*': printf("Result = %.2f", a * b); break;
        case '/': printf("Result = %.2f", b != 0 ? a / b : 0); break;
        default: printf("Invalid operator");
    }
    return 0;
}
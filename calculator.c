#include<stdio.h>

int main() {
    char operator;
    float n1, n2, result;

    printf("\nS I M P L E - C A L C U L A T O R\n\n");
    
    printf("Expression: ");
    scanf("%f %c %f", &n1, &operator, &n2);

    switch (operator) {
        case '+': result = n1 + n2; break;
        case '-': result = n1 - n2; break;
        case '/': result = n1 / n2; break;
        case '*': result = n1 * n2; break;
        default:
            return printf("\nInvalid operator, please try again with valid operator");
    }

    printf("Result: %f\n\n", result);
}

#include<stdio.h>
#include<stdlib.h>

int main() {
    char operator;
    float n1, n2, result;

    printf("\nS I M P L E - C A L C U L A T O R\n\n");
    
    printf("Expression: ");
    scanf("%f %c %f", &n1, &operator, &n2);

    result = (operator == '+') 
        ? n1 + n2 : (operator== '-')
        ? n1 - n2 : (operator== '/')
        ? n1 / n2 : (operator== '*')
        ? n1 * n2 : (printf("Invalid operator, please try again with valid operator"), exit(1), 0);

    printf("Result: %f\n\n", result);
}

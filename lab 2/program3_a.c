#include <stdio.h>

int main() {
    unsigned int num1, num2;

    printf("Enter first number: ");
    scanf("%u", &num1);

    printf("Enter second number: ");
    scanf("%u", &num2);

    unsigned int result_and = num1 & num2;
    unsigned int result_or  = num1 | num2;
    unsigned int result_not1 = ~num1;
    unsigned int result_not2 = ~num2;

    printf("\nBitwise AND of %u & %u = %u\n", num1, num2, result_and);
    printf("Bitwise OR of %u | %u = %u\n", num1, num2, result_or);
    printf("Bitwise NOT of %u = %u\n", num1, result_not1);
    printf("Bitwise NOT of %u = %u\n", num2, result_not2);

    return 0;
}

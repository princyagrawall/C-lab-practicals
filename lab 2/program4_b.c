#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'X';

    int *pInt = &a;
    float *pFloat = &b;
    char *pChar = &c;

    printf("Original Addresses:\n");
    printf("Int: %p\n", pInt);
    printf("Float: %p\n", pFloat);
    printf("Char: %p\n\n", pChar);

    pInt++;   // increment pointer
    pFloat++;
    pChar++;

    printf("After Increment:\n");
    printf("Int: %p\n", pInt);
    printf("Float: %p\n", pFloat);
    printf("Char: %p\n\n", pChar);

    pInt--;   // decrement pointer
    pFloat--;
    pChar--;

    printf("After Decrement:\n");
    printf("Int: %p\n", pInt);
    printf("Float: %p\n", pFloat);
    printf("Char: %p\n", pChar);

    return 0;
}

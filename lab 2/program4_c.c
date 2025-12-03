#include <stdio.h>

void modifyValues(int *a, float *b, char *c) {
    *a += 10;
    *b *= 2.5;
    *c = 'Z';
}

int main() {
    int num = 5;
    float price = 12.5;
    char grade = 'A';

    printf("Before: %d %.2f %c\n", num, price, grade);

    modifyValues(&num, &price, &grade);

    printf("After: %d %.2f %c\n", num, price, grade);

    return 0;
}

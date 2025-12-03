//main.c
#include <stdio.h>
#include "arith.h"

int main() {
    int a = 10, b = 5;

    printf("Addition: %d\n", add(a, b));
    printf("Subtraction: %d\n", sub(a, b));

    return 0;
}

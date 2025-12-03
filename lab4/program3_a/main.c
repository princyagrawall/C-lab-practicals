//main.c
#include <stdio.h>
#include "arith.h"

int main() {
    printf("Add = %d\n", add(5, 3));
    printf("Sub = %d\n", sub(5, 3));
    printf("Mul = %d\n", mul(5, 3));
    printf("Div = %d\n", divide(10, 2));
    return 0;
}

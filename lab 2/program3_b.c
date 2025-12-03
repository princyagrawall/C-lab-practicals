#include <stdio.h>

int main() {
    int num, leftShift, rightShift;
    int positions;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter number of positions to shift: ");
    scanf("%d", &positions);

    leftShift = num << positions;   
    rightShift = num >> positions;  

    printf("%d << %d = %d\n", num, positions, leftShift);
    printf("%d >> %d = %d\n", num, positions, rightShift);

    return 0;
}

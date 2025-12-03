#include <stdio.h>
int main(void) {
    int a, b, c;
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        printf("The triangle is valid.\n");
        if (a == b && b == c) {
            printf("It is an equilateral triangle.\n");
        } 
        else if (a == b || b == c || a == c) {
            printf("It is an isosceles triangle.\n");
        } 
        else {
            printf("It is a Scalene triangle.\n");
        }
        if ((a * a == b * b + c * c) ||
            (b * b == a * a + c * c) ||
            (c * c == a * a + b * b)) {
            printf("It is also a Right-angled triangle.\n");
        }
    } else {
        printf("The triangle is not valid.\n");
    }
    return 0;
}

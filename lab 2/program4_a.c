#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'X';
    
    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;
    
    printf("%d %d\n", a, *p1);
    printf("%.2f %.2f\n", b, *p2);
    printf("%c %c\n", c, *p3);
    
    return 0;
}

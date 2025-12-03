#include <stdio.h>
int main() {
    int x = 10;
    printf("x = %d\n", x);
    {
        int y = 20;
        printf("x = %d, y = %d\n", x, y);
    }
    {
        int z = 30;
        printf("x = %d, z = %d\n", x, z);
    }

    return 0;
}

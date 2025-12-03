#include <stdio.h>
int main() {
    int limit;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    printf("Ramanujan Numbers up to %d are:\n", limit);
    for (int a = 1; a * a * a < limit; a++) {
        for (int b = a + 1; b * b * b < limit; b++) {
            int sum1 = a * a * a + b * b * b;
            if (sum1 > limit) break;
            for (int c = a + 1; c * c * c < limit; c++) {
                for (int d = c + 1; d * d * d < limit; d++) {
                    int sum2 = c * c * c + d * d * d;

                    if (sum1 == sum2 && sum1 <= limit) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",
                               sum1, a, b, c, d);
                    }
                }
            }
        }
    }
    return 0;
}

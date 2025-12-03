#include <stdio.h>

int fact_recursive(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact_recursive(n - 1);
}

int fact_nonrecursive(int n) {
    int i, f = 1;
    for (i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main() {
    int n, r, choice, fn, fr, fnr, C;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);
    if (r > n || n < 0 || r < 0) {
        printf("Invalid input\n");
        return 0;
    }
    printf("1. Recursive\n2. Non-Recursive\nEnter choice: ");
    scanf("%d", &choice);
    if (choice == 1) {
        fn = fact_recursive(n);
        fr = fact_recursive(r);
        fnr = fact_recursive(n - r);
    } else {
        fn = fact_nonrecursive(n);
        fr = fact_nonrecursive(r);
        fnr = fact_nonrecursive(n - r);
    }
    C = fn / (fr * fnr);
    printf("\nBinomial Coefficient C(%d,%d) = %d\n", n, r, C);
    printf("\nTabulated Results:\n");
    printf(" n\t r\t C(n,r)\n");
    for (n = 0; n <= 6; n++) {
        for (r = 0; r <= n; r++) {
            fn = fact_nonrecursive(n);
            fr = fact_nonrecursive(r);
            fnr = fact_nonrecursive(n - r);
            C = fn / (fr * fnr);
            printf(" %d\t %d\t %d\n", n, r, C);
        }
    }
    return 0;
}

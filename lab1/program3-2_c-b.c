#include <stdio.h>
int main() {
    int rows, i, j, number;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i = 0; i < rows; i++) {
        number = 1;  
        for (j = 0; j <= i; j++) {
            printf("%d ", number);
            number = number * (i - j) / (j + 1); 
        }
        printf("\n"); 
    }
    return 0;
}

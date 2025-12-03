#include <stdio.h>
int globalVar = 10;
void myFunction() {
    int localVar = 20;   
    printf("Inside function:\n");
    printf("Global variable = %d\n", globalVar); 
    printf("Local variable = %d\n", localVar);   
}
int main() {
    myFunction();
    printf("\nOutside function:\n");
    printf("Global variable = %d\n", globalVar);
    return 0;
}

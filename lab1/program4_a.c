#include <stdio.h>
int number=5;
void showNumber() {
    printf("Inside showNumber, number = %d\n",number);
}
void changeNumber() {
    number = 10; 
    printf("Inside changeNumber, number = %d\n",number);
}
    int main() {
    printf("At start, number = %d\n", number);
    showNumber();    
    changeNumber();  
    showNumber();    
    return 0;
}

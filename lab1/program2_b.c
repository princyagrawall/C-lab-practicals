//WAP a C program to Convert temperature from Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32.
#include <stdio.h>
int main(void){
    int C,F;
    printf("temprature in celcius: ");
    scanf("%d",&C);
    F=(C * (9/5))+ 32;
    printf("temperature in fahrenheit is %d",F);
    return 0;
}
#include <stdio.h>
int main(void){
    char name[50];
    int age;
    printf("enter your name: \n");
    scanf("%s",name);
    printf("enter your age: ");
    scanf("%d",&age);
    printf("hello %s!\nyour age is %d \n ",name,age);
    return 0;
}
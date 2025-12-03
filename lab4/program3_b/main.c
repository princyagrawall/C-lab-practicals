//main.c
#include "stdio.h"
#include "arith.h"

int main(){
    int a=10;
    int b=5;

    printf("Add= %d\n",add(10,5));
    printf("sub= %d\n",sub(10,5));
    printf("multiplication= %d\n",mul(10,5));
    printf("Divide= %d\n",divide(10,5));

    return 0;

}
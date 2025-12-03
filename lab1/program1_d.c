#include <stdio.h>
int main(void){
    int x,y;
    printf("enter two numers: ");
    scanf("%d %d",&x,&y);
    int sum=(x+y);
    printf("sum of %d and %d is %d",x,y,sum);
    return 0;
}
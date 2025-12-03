#include <stdio.h>
int main(void){
    int l,b;
    printf("enter the length of the rectangle: ");
    scanf("%d",&l);
    printf("enter the breadth of the rectangle: ");
    scanf("%d",&b);
    int area=(l*b);
    int perimeter=(2*(l+b));
    printf("area of rectangle with length %d and breadth %d is %d\n",l,b,area);
    printf("perimeter of rectangle with length %d and breadth %d is %d",l,b,perimeter);
    return 0;
}
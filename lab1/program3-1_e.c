//WAP using ternary operator, the user should input the length and breadth of a rectangle, one has to find out which rectangle has the highest perimeter. The minimum number of rectangles should be three.
#include <stdio.h>
int main(void){
    int l1,l2,l3;
    int b1,b2,b3;
    printf("enter length and breadth of 1st rectangle:");
    scanf("%d %d",&l1,&b1);
    printf("enter length and breadth of 2nd rectangle:");
    scanf("%d %d",&l2,&b2);
    printf("enter length and breadth of 3rd rectangle:");
    scanf("%d %d",&l3,&b3);
    int p1,p2,p3;
    p1= 2*(l1+b1);
    p2=2*(l2+b2);
    p3=2*(l3+b3);
    if (p1>p2 && p1>p3){
        printf("perimeter of rectangle 1st is maximum");
    }
    else if(p2>p1 && p2>p3){
        printf("perimeter of rectangle 2nd is maximum");
    }
    else {
        printf("perimeter of rectangle 3rd is maximum");
    }
    return 0;
}
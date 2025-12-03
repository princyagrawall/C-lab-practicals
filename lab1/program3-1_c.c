//WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not.
#include <stdio.h>
int main(void){
    float x1,x2,x3;
    float y1,y2,y3;
    printf("enter coordinates of first point (x1,y1): ");
    scanf("%f %f",&x1,&y1);
    printf("enter coordinates of first point (x2,y2): ");
    scanf("%f %f",&x2,&y2);
    printf("enter coordinates of first point (x3,y3): ");
    scanf("%f %f",&x3,&y3);
    float area;
    area= x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
    if (area==0){
        printf("points are collinear");
    }
    else{
        printf("points are not collinear");
    }
    return 0;
}
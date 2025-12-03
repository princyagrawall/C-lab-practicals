#include <stdio.h>
int main(void){
    float weight;
    float height;
    printf("Enter weight of person in kgs: ");
    scanf("%f",&weight);
    printf("Enter height of person in mts: ");
    scanf("%f",&height);
    float BMI;
    BMI=weight/(height*height);
    printf("Body mass index of a person is %f",BMI);
    if (BMI<15){
    printf("starvation");
    }
    else if(15.1<=BMI && BMI<=17.5){
        printf("anorexic");
    }
    else if (17.6<=BMI && BMI<=18.5){
    printf("underweight");
    }
    else if(18.6<=BMI && BMI<=24.9){
    printf("ideal weight");
    }
    else if(25<=BMI && BMI<=25.9){
    printf("overweight");
    }
    else if(30<=BMI && BMI<=39.9){
    printf("obese");
    }
    else{
      printf("morbidity obese");
        }
        return 0;
        
    }


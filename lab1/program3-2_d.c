//The population of a town is 100000. The population has increased steadily at the rate of 10% per year for the last 10 years. Write a program to determine the population at the end of each year in the last decade.
#include <stdio.h>
int main(void){
    int years=10;
    int population=100000;
    for (int i=1;i<=years;i++){
        population= population + (population*0.10);
        printf("population at end of year %d: %d\n",i,population);
    }
    return 0;
    
}
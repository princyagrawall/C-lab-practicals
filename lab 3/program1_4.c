#include <stdio.h>
#include <string.h>

union Address {
    char name[20];
    char city[20];
    char Home_addres[50];
    char hostel_address[50];
    char state[30];
    int zip;
};

int main(){

    union Address adrr;
    strcpy(adrr.hostel_address, "Guardian hostel, Pondha (Dehradun)");

    printf("Present address:\n %s\n", adrr.hostel_address);
    return 0;
}
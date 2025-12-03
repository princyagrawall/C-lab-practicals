#include <stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("filename.txt","w");
    
    if (ptr == NULL){
        printf("File doesn't exist!");
        return 1;
    }
    fprintf(ptr,"HELLO WELCOME TO C-PROGRAMMING! ");

    fclose(ptr);
    printf("Data saved successfully!");

    return 0;
    
}
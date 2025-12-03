//Open an existing file and read its content character by character, and then close the file
#include <stdio.h>
int main(){
    FILE *ptr;
    char ch;
    ptr=fopen("filename.txt","r");

    if (ptr == NULL){
        printf("File doesn't exist!");
        return 1;
    };
    printf("********FILE CONTENT*********\n");

    while((ch = fgetc(ptr)) != EOF){
        printf("%c",ch);

    };
    return 0;
}
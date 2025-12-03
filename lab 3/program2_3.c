#include <stdio.h>
int main() {
    FILE *ptr; char line[200];
    ptr = fopen("filename.txt", "a");
    if (!ptr) return 1;
    fprintf(ptr, "\nFACULTY - Srinivasan sir\nClass strength - 57");
    fclose(ptr);
    ptr = fopen("filename.txt", "r");
    if (!ptr) return 1;
    while (fgets(line, 200, ptr)) printf("%s", line);
    fclose(ptr);
}

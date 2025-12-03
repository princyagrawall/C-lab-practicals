#include <stdio.h>
#include <string.h>

void REVERSE(char str[]) {
    int length = strlen(str);
    int i;
    char temp;
    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    REVERSE(str);
    printf("%s\n", str);
    return 0;
}

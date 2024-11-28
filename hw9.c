#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];  
    printf("Input> ");
    fgets(str, sizeof(str), stdin);  

    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);  
        }
        else if (islower(str[i])) {
            str[i] = toupper(str[i]);  
        }
    }

    printf("Output> %s", str);
    return 0;
}
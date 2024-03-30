#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char string[400];
    printf("Enter a String: ");
    scanf("%s", string);
    int length = strlen(string);
    char rev[100] = "";
    int i = length - 1;
    while (i >= 0) {
        rev[length - 1 - i] = string[i];
        i--;
    }
    if (strcmp(string, rev) == 0)
        printf("Given string is a palindrome.\n");
    else
        printf("Given string is not a palindrome.\n");
    return 0;
}

//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>

int main() {
    char str[1000];
    int len = 0, i;

    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}

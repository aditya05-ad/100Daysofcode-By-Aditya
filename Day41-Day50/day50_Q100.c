//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/

#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, j = 0, len = 0;

    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0' && str[len] != '\n')
        len++;

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            for (int k = i; k <= j; k++)
                printf("%c", str[k]);
            printf("\n");
        }
    }
    return 0;
}

//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, j = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        } else {
            str[j++] = ch;
        }
        i++;
    }

    str[j] = '\0';
    printf("%s\n", str);

    return 0;
}

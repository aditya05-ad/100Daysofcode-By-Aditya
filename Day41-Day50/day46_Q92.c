//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>

int main() {
    char str[1000];
    int freq[26] = {0};
    int i = 0;
    char first = '\0';

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            int idx = ch - 'a';
            freq[idx]++;
            if (freq[idx] == 2 && first == '\0') {
                first = ch;
            }
        }
        i++;
    }

    if (first != '\0')
        printf("%c\n", first);
    else
        printf("-1\n");

    return 0;
}

//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>

int main() {
    char str[1000];
    char longest[1000];
    int i = 0, len = 0, maxLen = 0, start = 0, maxStart = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] != ' ') {
            if (len == 0) start = i;
            len++;
        } else {
            if (len > maxLen) {
                maxLen = len;
                maxStart = start;
            }
            len = 0;
        }
        i++;
    }

    if (len > maxLen) {
        maxLen = len;
        maxStart = start;
    }

    for (i = 0; i < maxLen; i++) {
        longest[i] = str[maxStart + i];
    }
    longest[maxLen] = '\0';

    printf("%s\n", longest);
    return 0;
}

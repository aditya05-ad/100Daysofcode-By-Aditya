//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include <stdio.h>

int main() {
    char s1[1000], s2[1000];
    int freq1[256] = {0}, freq2[256] = {0};
    int i = 0;

    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    while (s1[i] != '\0' && s1[i] != '\n') {
        freq1[(unsigned char)s1[i]]++;
        i++;
    }

    i = 0;
    while (s2[i] != '\0' && s2[i] != '\n') {
        freq2[(unsigned char)s2[i]]++;
        i++;
    }

    for (i = 0; i < 256; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Not Anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");
    return 0;
}

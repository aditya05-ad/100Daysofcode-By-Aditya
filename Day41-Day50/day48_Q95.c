//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include <stdio.h>

int main() {
    char s1[1000], s2[1000];
    int len1 = 0, len2 = 0;
    int i, j, k, match;

    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    while (s1[len1] != '\0' && s1[len1] != '\n') len1++;
    while (s2[len2] != '\0' && s2[len2] != '\n') len2++;

    if (len1 != len2) {
        printf("Not rotation\n");
        return 0;
    }

    for (i = 0; i < len1; i++) {
        match = 1;
        for (j = 0; j < len1; j++) {
            k = (i + j) % len1;
            if (s1[k] != s2[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            printf("Rotation\n");
            return 0;
        }
    }

    printf("Not rotation\n");
    return 0;
}

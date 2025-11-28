//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    int lastIndex[256];
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int left = 0, maxLen = 0;

    for (int right = 0; s[right] != '\0' && s[right] != '\n'; right++) {
        unsigned char ch = s[right];

        if (lastIndex[ch] >= left)
            left = lastIndex[ch] + 1;

        lastIndex[ch] = right;

        int currLen = right - left + 1;
        if (currLen > maxLen)
            maxLen = currLen;
    }

    printf("%d\n", maxLen);
    return 0;
}

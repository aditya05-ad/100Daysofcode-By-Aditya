//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>
int main() {
    long long num;
    int digit, i;
    int freq[10] = {0};

    scanf("%lld", &num);

    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    int maxFreq = freq[0];
    int mostFrequentDigit = 0;
    for (i = 1; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFrequentDigit = i;
        }
    }

    printf("%d\n", mostFrequentDigit);

    return 0;
}

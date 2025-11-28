//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>
int main() {
    int num, firstDigit, lastDigit, digits = 0, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;
    lastDigit = num % 10;

    while (original != 0) {
        original /= 10;
        digits++;
    }

    int divisor = 1;
    for (int i = 1; i < digits; i++) {
        divisor *= 10;
    }
    firstDigit = num / divisor;

    int middle = num % divisor;  
    middle = middle / 10;

    swappedNum = lastDigit * divisor + middle * 10 + firstDigit;

    printf("Number after swapping first and last digit = %d\n", swappedNum);

    return 0;
}
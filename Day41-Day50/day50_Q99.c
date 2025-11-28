//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>

int main() {
    char date[50];
    int day, month, year;

    scanf("%d/%d/%d", &day, &month, &year);

    if (month == 4)
        printf("%02d-Apr-%d\n", day, year);
    else
        printf("Unsupported month\n");

    return 0;
}

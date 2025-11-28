//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/

#include <stdio.h>
#include <string.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    char input[20];
    scanf("%s", input);

    enum Status status;

    if (strcmp(input, "SUCCESS") == 0) {
        status = SUCCESS;
    } 
    else if (strcmp(input, "FAILURE") == 0) {
        status = FAILURE;
    } 
    else if (strcmp(input, "TIMEOUT") == 0) {
        status = TIMEOUT;
    }
    else {
        printf("Invalid Input\n");
        return 0;
    }

    switch (status) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
    }

    return 0;
}

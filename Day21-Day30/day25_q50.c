// Q50: Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/

#include <stdio.h>

int main() {
    int i, j, k;
    int rows = 5;

    for(i = 0; i < rows; i++) {
    
        for(j = 0; j < i; j++) {
            printf(" ");
        }
        for(k = i; k < rows; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

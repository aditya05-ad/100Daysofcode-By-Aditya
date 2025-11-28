//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include <stdio.h>
int main() {
    int rows, cols, i, j;

    scanf("%d %d", &rows, &cols);

    int mat[rows][cols];
    int rowSum[rows];

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for (j = 0; j < cols; j++) {
            rowSum[i] += mat[i][j];
        }
    }

    for (i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }
    printf("\n");

    return 0;
}

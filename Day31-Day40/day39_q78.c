//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/

#include <stdio.h>
int main() {
    int rows, cols, i, j, sum = 0;

    scanf("%d %d", &rows, &cols);

    int mat[rows][cols];

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    if (rows != cols) {
        printf("Not a square matrix\n");
        return 0;
    }

    for (i = 0; i < rows; i++) {
        sum += mat[i][i];
    }

    printf("%d\n", sum);

    return 0;
}

//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>
int main() {
    int rows, cols, i, j;

    scanf("%d %d", &rows, &cols);

    int mat[rows][cols];

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int d = 0; d < rows + cols - 1; d++) {
        int row = (d < rows) ? d : rows - 1;
        int col = (d < rows) ? 0 : d - (rows - 1);

        while (row >= 0 && col < cols) {
            printf("%d ", mat[row][col]);
            row--;
            col++;
        }
    }

    printf("\n");
    return 0;
}

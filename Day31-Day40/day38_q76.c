//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include <stdio.h>
int main() {
    int rows, cols, i, j, flag = 1;

    scanf("%d %d", &rows, &cols);

    int mat[rows][cols];

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    if (rows != cols) {
        printf("False\n");
        return 0;
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (mat[i][j] != mat[j][i]) {
                flag = 0;
                break;
            }
        }
        if (!flag) break;
    }

    if (flag)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}

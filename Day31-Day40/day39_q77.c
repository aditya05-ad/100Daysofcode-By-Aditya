//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/

#include <stdio.h>
int main() {
    int rows, cols, i, j, k, distinct = 1;

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

    int diag[rows];
    for (i = 0; i < rows; i++) {
        diag[i] = mat[i][i];
    }

    for (i = 0; i < rows; i++) {
        for (k = i + 1; k < rows; k++) {
            if (diag[i] == diag[k]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct) break;
    }

    if (distinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}

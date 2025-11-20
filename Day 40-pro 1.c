#include <stdio.h>

void printDiagonalTraversal(int mat[][3], int rows, int cols) {
  
    for (int line = 0; line < (rows + cols - 1); ++line) {
        printf("Diagonal %d: ", line + 1);

        int rowStart = (line < cols) ? 0 : (line - cols + 1);
        int colStart = (line < cols) ? line : (cols - 1);

        while (rowStart < rows && colStart >= 0) {
            printf("%d ", mat[rowStart][colStart]);
            rowStart++;
            colStart--;
        }
        printf("\n");
    }
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int rows = 3;
    int cols = 3;

    printDiagonalTraversal(matrix, rows, cols);

    return 0;
}
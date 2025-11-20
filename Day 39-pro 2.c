#include <stdio.h>

int main() {
    int rows, columns, i, j, sum = 0;
    int matrix[10][10]; 

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &columns);

    if (rows != columns) {
        printf("Error: The matrix must be square to find the main diagonal sum.\n");
        return 1; 
    }

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for (i = 0; i < rows; i++) {
        sum += matrix[i][i];
    }

    printf("The sum of the main diagonal elements is: %d\n", sum);

    return 0;
}

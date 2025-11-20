#include <stdio.h>
#include <stdbool.h> 
#include <stdlib.h>  

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

bool areDiagonalElementsDistinct(int **matrix, int size) {
    if (size <= 1) { 
        return true;
    }

    int *diagonalElements = (int *)malloc(size * sizeof(int));
    if (diagonalElements == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < size; i++) {
        diagonalElements[i] = matrix[i][i];
    }

    qsort(diagonalElements, size, sizeof(int), compare);

    for (int i = 0; i < size - 1; i++) {
        if (diagonalElements[i] == diagonalElements[i+1]) {
            free(diagonalElements); 
            return false; 
        }
    }

    free(diagonalElements); 
    return true; 
}

int main() {
    int size = 3;

    int *matrix1[] = {
        (int[]){1, 2, 3},
        (int[]){4, 5, 6},
        (int[]){7, 8, 9}
    };

    printf("Matrix 1 diagonal elements are distinct: %s\n", 
           areDiagonalElementsDistinct(matrix1, size) ? "True" : "False");

    int *matrix2[] = {
        (int[]){1, 2, 3},
        (int[]){4, 1, 6}, 
        (int[]){7, 8, 9}
    };

    printf("Matrix 2 diagonal elements are distinct: %s\n", 
           areDiagonalElementsDistinct(matrix2, size) ? "True" : "False");

    return 0;
}
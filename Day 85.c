#include <stdio.h>

int main() {
    
    int numbers[5];
    int start_value = 10;
    int size = 5;

    for (int i = 0; i < size; i++) {
        numbers[i] = start_value + i;
    }

    printf("Assigned values:\n");
    for (int i = 0; i < size; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    return 0;
}

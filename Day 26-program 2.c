#include <stdio.h>

int main() {
    int num_stars;

    printf("Enter the number of stars to print vertically: ");
    scanf("%d", &num_stars);

    for (int i = 0; i < num_stars; i++) {
        printf("*\n");
    }

    return 0;
}
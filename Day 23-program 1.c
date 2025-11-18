#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number of terms.\n");
        return 1;
    }

    printf("The series is: ");
    for (i = 1; i <= n; i++) {
      
        double numerator = 2.0 * i;
        double denominator = 4.0 * i - 1.0;

        sum += numerator / denominator;

        printf("%.0f/%.0f", numerator, denominator);
        if (i < n) {
            printf(" + ");
        }
    }

    printf("\nSum of the series up to %d terms is: %f\n", n, sum);

    return 0;
}

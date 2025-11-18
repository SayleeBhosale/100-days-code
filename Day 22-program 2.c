#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        
        double numerator = (double)(2 * i - 1);
        double denominator = (double)(2 * i);

        if (i == 1) {
            sum += 1.0;
        } else {
            sum += numerator / denominator;
        }
    }

    printf("The sum of the series up to %d terms is: %f\n", n, sum);

    return 0;
}

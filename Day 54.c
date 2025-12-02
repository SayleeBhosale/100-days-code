#include <stdio.h>
#include <math.h> 

int main() {
    int n;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    long long total_sum_1_to_n = (long long)n * (n + 1) / 2;

    long long target_x_squared = total_sum_1_to_n;

    double sqrt_target_x_squared = sqrt(target_x_squared);

    if (sqrt_target_x_squared == round(sqrt_target_x_squared)) {
        int x = (int)round(sqrt_target_x_squared);

        if (x >= 1 && x <= n) {
            printf("%d\n", x);
        } else {
            printf("-1\n");
        }
    } else {
        printf("-1\n");
    }

    return 0;
}
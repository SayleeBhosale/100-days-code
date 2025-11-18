#include <stdio.h>

int main() {
    int n;
    long long product = 1; 

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }

    for (int i = 2; i <= n; i += 2) {
        product *= i; 
    }

    printf("The product of even numbers from 1 to %d is: %lld\n", n, product);

    return 0; 
}
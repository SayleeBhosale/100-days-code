#include <stdio.h>
#include <math.h> 

int isPrime(int num) {
    if (num <= 1) { 
        return 0;
    }
    if (num == 2) { 
        return 1;
    }
    if (num % 2 == 0) { 
        return 0;
    }
    
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are: ", n);

    for (int i = 1; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n"); 

    return 0;
}
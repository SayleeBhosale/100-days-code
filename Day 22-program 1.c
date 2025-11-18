#include <stdio.h>

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, temp, remainder;
    long long sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num; 

    while (temp > 0) {
        remainder = temp % 10; 
        sum += factorial(remainder);
        temp /= 10; 
    }

    if (sum == num) {
        printf("%d is a strong number.\n", num);
    } else {
        printf("%d is not a strong number.\n", num);
    }

    return 0;
}
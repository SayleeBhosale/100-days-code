#include <stdio.h>

int main() {
    int num1, num2, max, lcm = 1;

    printf("Enter any two numbers to find LCM: ");
    scanf("%d %d", &num1, &num2);

    max = (num1 > num2) ? num1 : num2;

    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            lcm = max;
            break; 
        }
        max++; 
    }

    printf("LCM of %d and %d = %d\n", num1, num2, lcm);

    return 0;
}
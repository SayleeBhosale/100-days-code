#include <stdio.h>

int main() {
    int num, reversedNumber = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int originalNumber = num;

    while (num != 0) {
        remainder = num % 10;            
        reversedNumber = reversedNumber * 10 + remainder; 
        num /= 10;              
    }

    printf("Original Number = %d\n", originalNumber);
    printf("Reversed Number = %d\n", reversedNumber);

    return 0;
}

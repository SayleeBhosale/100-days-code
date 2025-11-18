#include <stdio.h>

int main() {
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;
    }

    int digit_counts[10] = {0}; 

    if (number == 0) {
        printf("The most frequent digit is: 0\n");
        return 0;
    }

    while (number > 0) {
        int digit = number % 10; 
        digit_counts[digit]++;   
        number /= 10;           
    }

    int max_frequency = -1;
    int most_frequent_digit = -1;

    for (int i = 0; i < 10; i++) {
        if (digit_counts[i] > max_frequency) {
            max_frequency = digit_counts[i];
            most_frequent_digit = i;
        }
    }

    printf("The most frequent digit is: %d\n", most_frequent_digit);

    return 0;
}
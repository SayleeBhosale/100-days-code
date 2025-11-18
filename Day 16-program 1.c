#include <stdio.h>

int main() {
    int decimal_num, i;
    int binary_array[32];

    printf("Enter a decimal number: ");
    scanf("%d", &decimal_num);

    if (decimal_num == 0) {
        printf("Binary equivalent: 0\n");
        return 0;
    }

    i = 0;
  
    while (decimal_num > 0) {
        binary_array[i] = decimal_num % 2; 
        decimal_num = decimal_num / 2;     
        i++;
    }

    printf("Binary equivalent: ");
    
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary_array[j]);
    }
    printf("\n");

    return 0;
}
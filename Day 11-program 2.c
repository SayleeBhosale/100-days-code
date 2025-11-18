#include <stdio.h>

int main() {
    float cp, sp, percentage;

    printf("Enter the cost price: ");
    scanf("%f", &cp);

    printf("Enter the selling price: ");
    scanf("%f", &sp);

    if (sp > cp) {
        
        percentage = ((sp - cp) / cp) * 100.0;
        printf("Profit Percentage = %.2f%%\n", percentage);
    } else if (cp > sp) {
        
        percentage = ((cp - sp) / cp) * 100.0;
        printf("Loss Percentage = %.2f%%\n", percentage);
    } else {
        
        printf("No profit and no loss.\n");
    }

    return 0;
}

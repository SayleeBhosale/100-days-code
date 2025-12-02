#include <stdio.h>

enum MenuChoice {
    ADD,
    SUBTRACT,
    MULTIPLY,
    EXIT 
};

int main() {
    enum MenuChoice choice;
    int num1, num2, result;

    do {
       
        printf("\n--- Menu ---\n");
        printf("%d. Add\n", ADD);
        printf("%d. Subtract\n", SUBTRACT);
        printf("%d. Multiply\n", MULTIPLY);
        printf("%d. Exit\n", EXIT);
        printf("Enter your choice: ");
        scanf("%d", (int*)&choice); 

        if (choice != EXIT) {
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
        }

        switch (choice) {
            case ADD:
                result = num1 + num2;
                printf("Result: %d + %d = %d\n", num1, num2, result);
                break;
            case SUBTRACT:
                result = num1 - num2;
                printf("Result: %d - %d = %d\n", num1, num2, result);
                break;
            case MULTIPLY:
                result = num1 * num2;
                printf("Result: %d * %d = %d\n", num1, num2, result);
                break;
            case EXIT:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != EXIT);

    return 0;
}
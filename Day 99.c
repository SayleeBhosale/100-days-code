#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {

    struct Employee *emp;

    emp = (struct Employee *)malloc(sizeof(struct Employee));

    if(emp == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &emp->id);

    printf("Enter Employee Name: ");
    scanf("%s", emp->name);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp->salary);

    printf("\n--- Employee Details ---\n");
    printf("Employee ID: %d\n", emp->id);
    printf("Employee Name: %s\n", emp->name);
    printf("Employee Salary: %.2f\n", emp->salary);

    free(emp);

    return 0;
}

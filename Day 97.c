#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Employee emp, readEmp;
    FILE *fp;
    
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee data stored successfully in binary file.\n");

    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!");
        return 1;
    }

    fread(&readEmp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\n--- Employee Details Read from File ---\n");
    printf("Employee ID: %d\n", readEmp.id);
    printf("Employee Name: %s\n", readEmp.name);
    printf("Employee Salary: %.2f\n", readEmp.salary);

    return 0;
}

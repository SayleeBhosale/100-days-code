#include <stdio.h>
#include <string.h> 

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int employeeID;
    char name[50];
    float salary;
    struct Date joiningDate; 
};

int main() {
    
    struct Employee emp1;

    printf("Enter Employee ID: ");
    scanf("%d", &emp1.employeeID);

    printf("Enter Employee Name: ");
    
    scanf("%s", emp1.name); 

    printf("Enter Employee Salary: ");
    scanf("%f", &emp1.salary);

    printf("Enter Date of Joining (DD MM YYYY): ");
    scanf("%d %d %d", &emp1.joiningDate.day, &emp1.joiningDate.month, &emp1.joiningDate.year);

    printf("\n--- Employee Details ---\n");
    printf("Employee ID: %d\n", emp1.employeeID);
    printf("Name: %s\n", emp1.name);
    printf("Salary: %.2f\n", emp1.salary);
    printf("Joining Date: %02d-%02d-%d\n", emp1.joiningDate.day, emp1.joiningDate.month, emp1.joiningDate.year);

    return 0;
}
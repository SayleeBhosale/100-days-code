#include <stdio.h>
#include <string.h> 

struct Student {
    int roll_number;
    char name[50];
    float marks;
};

int main() {
   
    struct Student students[5];

    printf("Enter details for 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);

        printf("Name: ");
        
        while (getchar() != '\n'); 
        fgets(students[i].name, sizeof(students[i].name), stdin);
      
        students[i].name[strcspn(students[i].name, "\n")] = 0;

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\n--- Student Details ---\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].roll_number);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}

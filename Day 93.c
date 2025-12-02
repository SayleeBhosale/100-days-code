#include <stdio.h>
#include <string.h> 

struct Student {
    char name[50];
    int marks;
};

int main() {
   
    struct Student students[3]; 

    printf("Enter details for 3 students:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d Name: ", i + 1);
        scanf("%s", students[i].name);
        printf("Student %d Marks: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    int highestMarks = -1; 
    int topperIndex = -1; 

    for (int i = 0; i < 3; i++) {
        if (students[i].marks > highestMarks) {
            highestMarks = students[i].marks;
            topperIndex = i;
        }
    }

    if (topperIndex != -1) {
        printf("\nTopper Student:\n");
        printf("Name: %s\n", students[topperIndex].name);
        printf("Marks: %d\n", students[topperIndex].marks);
    } else {
        printf("\nNo student data entered.\n");
    }

    return 0;
}
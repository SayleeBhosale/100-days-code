    #include <stdio.h>
    #include <string.h> 

    struct Student {
        char name[50];
        int roll_number;
        float marks;
    };
        
    struct Student findTopStudent(struct Student students[], int num_students) {
        struct Student topStudent;
        if (num_students == 0) {
            
            strcpy(topStudent.name, "N/A");
            topStudent.roll_number = -1;
            topStudent.marks = 0.0;
            return topStudent;
        }

        topStudent = students[0]; 

        for (int i = 1; i < num_students; i++) {
            if (students[i].marks > topStudent.marks) {
                topStudent = students[i]; 
            }
        }
        return topStudent;
    }
        int main() {
        struct Student students[3];

        strcpy(students[0].name, "Alice");
        students[0].roll_number = 101;
        students[0].marks = 85.5;

        strcpy(students[1].name, "Bob");
        students[1].roll_number = 102;
        students[1].marks = 92.0;

        strcpy(students[2].name, "Charlie");
        students[2].roll_number = 103;
        students[2].marks = 78.0;

        struct Student top_student = findTopStudent(students, 3);

        printf("Top Student Details:\n");
        printf("Name: %s\n", top_student.name);
        printf("Roll Number: %d\n", top_student.roll_number);
        printf("Marks: %.2f\n", top_student.marks);

        return 0;
    }
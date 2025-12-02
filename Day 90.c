#include <stdio.h>

typedef enum {
    MALE,
    FEMALE,
    OTHER
} Gender;

typedef struct {
    char name[50];
    int age;
    Gender gender;
} Person;

int main() {
   
    Person p1;
    
    snprintf(p1.name, sizeof(p1.name), "Alice");
    p1.age = 30;
    p1.gender = FEMALE; 

    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Gender: ");

    switch (p1.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }

    return 0;
}

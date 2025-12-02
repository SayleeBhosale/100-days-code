#include <stdio.h>
#include <string.h> 

struct Person {
    char name[50];
    int age;
    float height;
};

void printPersonByValue(struct Person p) {
    printf("--- Person Details (by Value) ---\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Height: %.2f meters\n", p.height);
}

void printPersonByReference(const struct Person *p) {
    printf("--- Person Details (by Reference) ---\n");
    printf("Name: %s\n", p->name); 
    printf("Age: %d\n", p->age);
    printf("Height: %.2f meters\n", p->height);
}

int main() {
   
    struct Person person1;

    strcpy(person1.name, "Alice Smith");
    person1.age = 30;
    person1.height = 1.65;

    printPersonByValue(person1);

    printPersonByReference(&person1); 

    return 0;
}
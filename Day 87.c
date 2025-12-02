#include <stdio.h>

enum UserRole {
    GUEST,  
    USER,   
    ADMIN   
};

int main() {
   
    enum UserRole currentRole = ADMIN; 

    switch (currentRole) {
        case GUEST:
            printf("Welcome, Guest! You have limited access.\n");
            break;
        case USER:
            printf("Hello, User! You have standard access.\n");
            break;
        case ADMIN:
            printf("Greetings, Administrator! You have full access and control.\n");
            break;
        default:
            printf("Unknown role.\n");
            break;
    }

    currentRole = USER;
    switch (currentRole) {
        case GUEST:
            printf("Welcome, Guest! You have limited access.\n");
            break;
        case USER:
            printf("Hello, User! You have standard access.\n");
            break;
        case ADMIN:
            printf("Greetings, Administrator! You have full access and control.\n");
            break;
        default:
            printf("Unknown role.\n");
            break;
    }

    return 0;
}
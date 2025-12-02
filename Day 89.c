#include <stdio.h>

enum Colors {
    RED,       
    GREEN,      
    BLUE = 5,  
    YELLOW    
};

int main() {
    
    printf("Value of RED: %d\n", RED);
    printf("Value of GREEN: %d\n", GREEN);
    printf("Value of BLUE: %d\n", BLUE);
    printf("Value of YELLOW: %d\n", YELLOW);

    int favoriteColor = BLUE;
    printf("Integer value of favoriteColor (BLUE): %d\n", favoriteColor);

    return 0;
}
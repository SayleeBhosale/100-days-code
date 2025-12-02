#include <stdio.h>

enum Colors {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    NUM_COLORS 
};

const char *color_names[] = {
    "RED",
    "GREEN",
    "BLUE",
    "YELLOW"
};

int main() {
   
    for (int i = 0; i < NUM_COLORS; i++) {
        printf("Enum Name: %s, Integer Value: %d\n", color_names[i], (enum Colors)i);
    }

    return 0;
}
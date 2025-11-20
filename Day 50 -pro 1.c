#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {
    char input_date_str[] = "21/04/2025"; 
    struct tm date_info;
    char output_date_str[20]; 

    if (strftime(input_date_str, "%d/%m/%Y", &date_info) == NULL) {
        perror("Error parsing date");
        return 1;
    }

    if (strftime(output_date_str, sizeof(output_date_str), "%d-%b-%Y", &date_info) == 0) {
        perror("Error formatting date");
        return 1;
    }

    printf("Original date: %s\n", input_date_str);
    printf("Formatted date: %s\n", output_date_str);

    return 0;
}
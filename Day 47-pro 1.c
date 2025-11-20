#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int areRotations(char *str1, char *str2) {
    int size1 = strlen(str1);
    int size2 = strlen(str2);
    char *temp;

    if (size1 != size2) {
        return 0;
    }

    temp = (char *)malloc(sizeof(char) * (size1 * 2 + 1));
    if (temp == NULL) { 
        perror("Failed to allocate memory for temp string");
        return 0; 
    }
    temp[0] = '\0'; 

    strcat(temp, str1); 
    strcat(temp, str1); 

    if (strstr(temp, str2) != NULL) {
        free(temp); 
        return 1; 
    } else {
        free(temp); 
        return 0; 
    }
}

int main() {
    char str1[] = "AACD";
    char str2[] = "ACDA";

    if (areRotations(str1, str2)) {
        printf("Strings \"%s\" and \"%s\" are rotations of each other.\n", str1, str2);
    } else {
        printf("Strings \"%s\" and \"%s\" are NOT rotations of each other.\n", str1, str2);
    }

    char str3[] = "hello";
    char str4[] = "ohell";

    if (areRotations(str3, str4)) {
        printf("Strings \"%s\" and \"%s\" are rotations of each other.\n", str3, str4);
    } else {
        printf("Strings \"%s\" and \"%s\" are NOT rotations of each other.\n", str3, str4);
    }

    char str5[] = "abc";
    char str6[] = "acb";

    if (areRotations(str5, str6)) {
        printf("Strings \"%s\" and \"%s\" are rotations of each other.\n", str5, str5);
    } else {
        printf("Strings \"%s\" and \"%s\" are NOT rotations of each other.\n", str5, str6);
    }

    return 0;
}
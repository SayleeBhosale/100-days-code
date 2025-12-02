#include <stdio.h>

typedef enum {
    SUCCESS,
    FAILURE,
    TIMEOUT
} Status;

int main() {
    
    Status operation_status = SUCCESS;
    Status download_status = TIMEOUT;
    Status file_status = FAILURE;

    printf("Operation Status: ");
    switch (operation_status) {
        case SUCCESS:
            printf("The operation completed successfully.\n");
            break;
        case FAILURE:
            printf("The operation failed.\n");
            break;
        case TIMEOUT:
            printf("The operation timed out.\n");
            break;
        default:
            printf("Unknown status.\n");
            break;
    }

    printf("Download Status: ");
    switch (download_status) {
        case SUCCESS:
            printf("The download completed successfully.\n");
            break;
        case FAILURE:
            printf("The download failed.\n");
            break;
        case TIMEOUT:
            printf("The download timed out.\n");
            break;
        default:
            printf("Unknown status.\n");
            break;
    }
    
    printf("File Status: ");
    switch (file_status) {
        case SUCCESS:
            printf("The file operation completed successfully.\n");
            break;
        case FAILURE:
            printf("The file operation failed.\n");
            break;
        case TIMEOUT:
            printf("The file operation timed out.\n");
            break;
        default:
            printf("Unknown status.\n");
            break;
    }


    return 0;
}

#include <stdio.h>

enum Month {
    JANUARY = 1, 
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int year = 2024; 

    printf("Number of days in each month (for year %d):\n", year);

    for (enum Month month = JANUARY; month <= DECEMBER; month++) {
        switch (month) {
            case JANUARY:
                printf("January: 31 days\n");
                break;
            case FEBRUARY:
                if (isLeapYear(year)) {
                    printf("February: 29 days (Leap Year)\n");
                } else {
                    printf("February: 28 days\n");
                }
                break;
            case MARCH:
                printf("March: 31 days\n");
                break;
            case APRIL:
                printf("April: 30 days\n");
                break;
            case MAY:
                printf("May: 31 days\n");
                break;
            case JUNE:
                printf("June: 30 days\n");
                break;
            case JULY:
                printf("July: 31 days\n");
                break;
            case AUGUST:
                printf("August: 31 days\n");
                break;
            case SEPTEMBER:
                printf("September: 30 days\n");
                break;
            case OCTOBER:
                printf("October: 31 days\n");
                break;
            case NOVEMBER:
                printf("November: 30 days\n");
                break;
            case DECEMBER:
                printf("December: 31 days\n");
                break;
            default:
                printf("Invalid month\n");
                break;
        }
    }

    return 0;
}
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};


void initDate(struct Date *ptrDate)
 {
    ptrDate->day = 10;
    ptrDate->month = 9;
    ptrDate->year = 2024;
}

void printDateOnConsole(struct Date  *ptrDate) 
{
    printf("Date: %d/%d/%d\n", ptrDate->day, ptrDate->month, ptrDate->year);
}

void acceptDateFromConsole(struct Date *ptrDate)
{
    printf("Enter day:: ");
    scanf("%d", &ptrDate->day);
    printf("Enter month:: ");
    scanf("%d", &ptrDate->month);
    printf("Enter year:: ");
    scanf("%d", &ptrDate->year);
}


int main() {
    struct Date Date1;
    int choice;
    initDate(&Date1);
  
    do {
        printf("\nMenu:\n");
        printf("1. Initialize Date\n");
        printf("2. Print Date\n");
        printf("3. Accept Date from Console\n");
        printf("4. Exit\n");
        printf("Enter your choice:: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                initDate(&Date1);
                printf("Date initialized.\n");
                break;
            case 2:
                printDateOnConsole(&Date1);
                break;
            case 3:
                acceptDateFromConsole(&Date1);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice...\n");
        }
    } while (choice != 0);
    
    return 0;
}
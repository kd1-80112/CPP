#include <stdio.h>
struct Date
{
    int day;
    int month;
    int year;
};

void initDate(struct Date *ptrDate)
{
    ptrDate->day = 0;
    ptrDate->month = 0;
    ptrDate->year = 0;
}
void acceptDateFromConsole(struct Date *ptrDate)
{
    printf("day=");
    scanf("%d", &ptrDate->day);
    printf("month=");
    scanf("%d", &ptrDate->month);
    printf("year=");
    scanf("%d", &ptrDate->year);
}
void printDateOnConsole(struct Date *ptrDate)
{
    printf("day=%d", ptrDate->day);
    printf("\n");
    printf("month=%d", ptrDate->month);
    printf("\n");
    printf("year=%d", ptrDate->year);
    printf("\n");
    printf("date=%d-%d-%d", ptrDate->day, ptrDate->month, ptrDate->year);
    printf("\n");
}
enum Eday
{
    Exit = 0,
    initial_date,
    accept_date,
    show_date
};

int main()
{
    struct Date D;

    int choice;

    while (choice != 0)
    {

        printf("---------------");
        printf("\n");
        printf("0:exit");
        printf("\n");
        printf("1:inital_date");
        printf("\n");
        printf("2:accept_date");
        printf("\n");
        printf("3:show_date");
        printf("\n");
        printf("---------------");
        printf("\n");
        printf("choice=");
        scanf("%d", &choice);
        printf("---------------");
        printf("\n");
        switch (choice)
        {
        case initial_date:
            initDate(&D);
            printDateOnConsole(&D);
            printf("---------------");
            printf("\n");
            break;
        case show_date:
            printDateOnConsole(&D);
            printf("---------------");
            printf("\n");
            break;

        case accept_date:
            acceptDateFromConsole(&D);
            printDateOnConsole(&D);
            printf("---------------");
            printf("\n");
            break;

        default:
            printf("out");
            printf("\n");
            break;
        }
    }
    return 0;
}
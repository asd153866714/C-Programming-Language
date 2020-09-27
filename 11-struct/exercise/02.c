#include <stdio.h>
#include <stdlib.h>
int main() {
    struct date {
        int year;
        int month;
        int day;
    };
    struct date holiday = {2004, 4, 26};

    struct date festival;

    printf("Enter year: ");
    scanf("%s", &festival.year);
    printf("Enter month: ");
    scanf("%d", &festival.month);
    printf("Enter day: ");
    scanf("%d", &festival.day);
    
    printf("holiday: %d/%d/%d\n", holiday.month, holiday.day, holiday.year);
    printf("festival: %d/%d/%d\n", festival.month, festival.day, festival.year);

    system("pause");
    return 0;
}
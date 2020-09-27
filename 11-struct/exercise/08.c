#include <stdio.h>
#include <stdlib.h>
int main() {
    struct time {
        int hour;
        int minutes;
        double second;
    };

    struct date {
        int year;
        int month;
        int day;
        struct time time;
    };
    struct date now = {2020, 07, 19, {15, 30, 30.00}};

    printf("%d/%d/%d  %d:%d:%.2f\n", now.month, now.day, now.year, now.time.hour, now.time.minutes, now.time.second);
    printf("sizeof(now) = %d\n", sizeof(now));

    system("pause");
    return 0;
}
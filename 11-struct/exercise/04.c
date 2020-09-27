#include <stdio.h>
#include <stdlib.h>
int main() {
    struct time {
        int hour;
        int minutes;
        double second;
    } start = {12, 32, 25.49};

    struct time end = {15, 12, 17.53};

    printf("start = %d: %d: %.2f\n", start.hour, start.minutes, start.second);
    printf("end = %d: %d: %.2f\n", end.hour, end.minutes, end.second);

    system("pause");
    return 0;
}

// (e) not finish
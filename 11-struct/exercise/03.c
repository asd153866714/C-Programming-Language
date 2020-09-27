#include <stdio.h>
#include <stdlib.h>
int main() {
    struct date {
        int year;
        int month;
        int day;
    };
    struct date holiday = {2004, 4, 26};

    printf("sizeof(date) = %d\n", sizeof(struct date));

    system("pause");
    return 0;
}
// size of struct date = 12 bytes

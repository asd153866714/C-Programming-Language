// nested struct
#include <stdio.h>
#include <stdlib.h>
int main() {
    struct date
    {
        int month;
        int day;
    };
    struct data
    {
        char name[10];
        int math;
        struct date birthday;
    } s1 = {"Xing", 75, {10, 32}};

    printf("Name: %s\n", s1.name);
    printf("Birth: %d / %d \n", s1.birthday.month, s1.birthday.day);
    printf("Math: %d\n", s1.math);
    
    system("pause");
    return 0;
}
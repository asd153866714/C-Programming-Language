// assign struct's value to another struct
#include <stdio.h>
#include <stdlib.h>
int main() {
    struct data
    {
        char name[10];
        int math;
    } s1 = {"Andy", 85};

    struct data s2;
    s2 = s1;

    printf("name: %s\n", s2.name);
    printf("math: %d\n\n", s2.math);

    system("pause");
    return 0;
}
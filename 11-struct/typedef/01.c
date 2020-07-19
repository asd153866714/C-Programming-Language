// typedef => type definition
#include <stdio.h>
#include <stdlib.h>
struct data
{
    char name[10];
    int math;
};

typedef struct data SCORE;      // give a new name "SCORE" to "struct data" type
void display(SCORE);

int main() {
    SCORE s1 = {"Xing", 75};
    display(s1);

    system("pause");
    return 0;
}
void display(SCORE student) {
    printf("Student's name: %s\n", student.name);
    printf("Math: %d\n", student.math);
}

// Use typedef can make code more easy to read

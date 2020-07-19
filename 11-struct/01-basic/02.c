// set orginal value in program
#include <stdio.h>
#include <stdlib.h>
int main() {
    struct data
    {
        char name[10];
        int math;
    }; // student = {"Andy", 85};

    struct data student = {"Andy", 85};  // set orginal value

    printf("Original value:\n");
    printf("name: %s\n", student.name);
    printf("math: %d\n\n", student.math);

    printf("Enter name: ");
    gets(student.name);
    printf("Enter grades: ");
    scanf("%d", &student.math);

    printf("name: %s\n", student.name);
    printf("math: %d\n", student.math);

    system("pause");
    return 0;
}
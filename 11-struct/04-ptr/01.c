// Use struct's pointer
#include <stdio.h>
#include <stdlib.h>

int main() {
    struct data
    {
        char name[10];
        int math;
        int english;
    }student, *ptr;
    
    ptr = &student;
    printf("Student's name: ");
    gets(ptr->name);
    printf("Student's math score: ");
    scanf("%d", &ptr->math);
    printf("Student's english score: ");
    scanf("%d", &ptr->english);

    printf("Math score = %d, ", ptr->math);
    printf("English score = %d, ", ptr->english);
    printf("Avg score = %.2f\n", (ptr->math + ptr->english)/2.0);

    system("pause");
    return 0;
} 


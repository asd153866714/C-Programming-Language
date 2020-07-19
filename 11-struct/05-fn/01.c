// Pass struct to function
#include <stdio.h>
#include <stdlib.h>

struct data
{
    char name[10];
    int math;
};

void display(struct data);

int main() {
    struct data s1 = {"Xing", 85};
    display(s1);

    system("pause");
    return 0;
}
void display(struct data student){
    printf("Student's name: %s\n", student.name);
    printf("Student's math: %d\n", student.math);
}

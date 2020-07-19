// Use pointer to present array of structure
#include <stdio.h>
#include <stdlib.h>
#define MAX 3

int main() {
    int i, m, index = 0;
    struct data
    {
        char name[10];
        int math;
    } student[MAX] = {{"Andy", 87}, {"Xing", 100}, {"Jack", 90}};

    m = student->math;
    for (i = 1; i < MAX; i++)
    {
        if((student+i)->math > m) {
            m = (student + i)->math;
            index = i;
        }
    }
    printf("%s's score is highest, ", (student + index)->name);
    printf("which is %d points\n", (student + index)->math);

    system("pause");
    return 0;
}
// student->math === student[0].math
// (student + i)-> math === student[i].math
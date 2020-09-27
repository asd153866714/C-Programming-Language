#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main() {
    int i;
    struct data
    {
        char name[10];
        int math;
    } student[MAX];
    
    for (i = 0; i < MAX; i++)
    {
        printf("Student's name: ");
        gets(student[i].name);
        printf("Student's math score: ");
        scanf("%d", &student[i].math);
        fflush(stdin);
    }
    for(i=0; i<MAX; i++)
    {
        printf("%s's math score = %d\n", student[i].name, student[i].math);
    }

    system("pause");
    return 0;
}
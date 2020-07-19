// Pass array of structure
#include <stdio.h>
#include <stdlib.h>
#define MAX 3

struct data
{
    char name[10];
    int math;
};

int maxnum(struct data arr[]);

int main() {
    int index;
    struct data s1[MAX] = {{"Andy", 87}, {"Xing", 100}, {"Jack", 90}};

    index = maxnum(s1);
    printf("%s's score is highest, ", (s1 + index)->name);
    printf("which is %d points\n", (s1 + index)->math);


    system("pause");
    return 0;
}
int maxnum(struct data arr[]) {
    int m, i, index;
    m = arr -> math;
    for(i=0; i<MAX; i++) {
        if((arr + i) -> math > m) {
            m = (arr + i) -> math;
            index = i;
        }
    }
    return index;
}
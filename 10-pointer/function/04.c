// exchange value of a and b
// pass by address
#include <stdio.h>
#include <stdlib.h>
void swap(int *, int *);
int main() {
    int a = 5, b = 20;

    printf("before... a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("after... a = %d, b = %d\n", a, b);

    system("pause");
    return 0;
}
void swap(int *p1, int *p2) {
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

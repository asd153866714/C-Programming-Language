// application of passing pointer to function
#include <stdio.h>
#include <stdlib.h>
void add10(int *, int*);
int main() {
    int a = 5;
    int b = 10;

    printf("before, a = %d, b = %d\n", a, b);
    add10(&a, &b);
    printf("after, a = %d, b = %d\n", a, b);

    system("pause");
    return 0;
}
void add10(int *p1, int *p2) {
    *p1 += 10;
    *p2 += 10;
}

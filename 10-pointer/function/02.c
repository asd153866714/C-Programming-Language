// application of passing pointer to function
#include <stdio.h>
#include <stdlib.h>
void add10(int *);
int main() {
    int a = 5;

    printf("before, a = %d\n", a);
    add10(&a);
    printf("after, a = %d\n", a);

    system("pause");
    return 0;
}
void add10(int *p1) {
    *p1 += 10;
}

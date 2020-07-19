// print address
#include <stdio.h>
#include <stdlib.h>
int main() {
    float num = 4.2f;
    int a1 = 4, a2 = 12;

    printf("num: %d\n", &num);
    printf("a1: %d\n", &a1);
    printf("a2: %d\n", &a2);

    system("pause");
    return 0;
}
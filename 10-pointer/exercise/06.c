#include <stdio.h>
#include <stdlib.h>
int main() {
    int a=12, b=7;
    int *ptr;
    ptr = &a;
    *ptr = 19;
    ptr = &b;
    b=16;
    *ptr=12;
    a=17;
    ptr=&a;
    a=b;
    *ptr=63;

    printf("a=%2d, b=%2d, *ptr=%2d\n", a, b, *ptr);
    printf("ptr=%p\n", ptr);

    system("pause");
    return 0;
}
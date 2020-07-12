// Pointer-constant's value and address
#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, a[5] = {10, 20, 30 ,40 ,50};
    printf("a = %p\n", a);
    printf("&a = %p\n", &a);
    printf("a[1] = %d\n", a[1]);
    printf("a+1 = %p\n", a+1);

    for (i=0; i<5; i++) {
        printf("&a[%d] = %p\n", i, &a[i]);
    }
    system("pause");
    return 0;
}
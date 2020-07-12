// Use pointer-constant to store array's content
#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, a[3] = {10, 20, 30};
    printf("a[0] = %d, *(a+0) = %d\n", a[0], *(a+0));
    printf("a[1] = %d, *(a+1) = %d\n", a[1], *(a+1));
    printf("a[2] = %d, *(a+2) = %d\n", a[2], *(a+2));

    system("pause");
    return 0;
}
// because array's name is a pointer-constant,
// so a can be use to do pointer opearation.

// address: a[0] = (a+0)
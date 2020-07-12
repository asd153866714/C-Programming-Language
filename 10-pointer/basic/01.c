// Print address
#include <stdio.h>
#include <stdlib.h>
int main(){
    int a, b;
    double c = 3.14;

    printf("a = %d, size: %d, address: %d\n", a, sizeof(a), &a);
    printf("b = %d, size: %d, address: %d\n", b, sizeof(b), &b);
    printf("c = %4.2f, size: %d, address: %d\n", c, sizeof(c), &c);
    return 0;
}

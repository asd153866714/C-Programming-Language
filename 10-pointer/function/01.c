// pass pointer to function
#include <stdio.h>
#include <stdlib.h>
void address(int *);
int main() {
    int a = 12;
    int *ptr = &a;
    
    address(&a);
    address(ptr);

    system("pause");
    return 0;
}
void address(int *p1) {
    printf("in address: %p, stored value is: %d\n", p1, *p1);
}

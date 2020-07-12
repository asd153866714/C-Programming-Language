// exchange value of a and b (wrong)
// pass by value
#include <stdio.h>
#include <stdlib.h>
void swap(int, int);
int main() {
    int a = 5, b = 20;

    printf("before... a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("after... a = %d, b = %d\n", a, b);

    system("pause");
    return 0;
}
void swap(int x, int y) {
    int tmp = x;
    x = y;
    y = tmp;
}

// invoke function by value,
// the value of original variable will not been change.
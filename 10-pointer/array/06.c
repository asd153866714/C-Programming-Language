// function return pointer
// find greatest element in array
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int *max(int *);
int main() {
    int a[SIZE] = {3, 1, 7, 2, 5};
    int i, *ptr;

    printf("arrat a = ");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", a[i]);
    }
    ptr = max(a);
    printf("\nmaxElement = %d\n", *ptr);

    system("pause");
    return 0;
}
int *max(int *arr) {
    int i, *max;
    max = arr;
    for (i=0; i<SIZE; i++) {
        if (*max < *(arr+i)) {
            max = arr + i;
        }
    }
    return max;
}
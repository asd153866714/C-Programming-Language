#include <stdio.h>
#include <stdlib.h>
#define SIZE 4

int add2(int arr[]) {
    for (int i = 0; i < SIZE; i++) {
        arr[i] += 2;
    }
}

int display(int arr[]) {
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int A[SIZE] = {5, 3, 6, 4};
    printf("Before call add2(): ");
    display(A);
    add2(A);

    printf("After call add2(): ");
    display(A);

    return 0;
}
// add 10 on every element in array
#include <stdio.h>
#include <stdlib.h>
int main() {
    int arr[5] = {31, 17, 33, 22, 16};
    int *ptr = arr;

    for (int i=0; i<5; i++) {
        *(ptr+i) += 10;
        printf("new arr[%d] = %d\n", i, arr[i]);
    }

    system("pause");
    return 0;
}
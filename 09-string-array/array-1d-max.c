#include <stdio.h>

int main()
{
    int A[5] = {74, 76, 34, 23, 45};
    int i, min, max;
    min = max = A[0];

    for (i = 0; i < 5; i++) {
        if (A[i] > max) {
            max = A[i];
        }
        if (A[i] < min) {
            min = A[i];
        }
    }
    printf("The max value of array = %d\n", max);
    printf("The min value of array = %d\n", min);

    system("pause");
    return 0;
}
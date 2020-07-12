// Get sum of array by pointer-constant
#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, a[3] = {10, 20, 30};
    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        sum += *(a+i);
    }
    printf("sum = %d\n", sum);

    system("pause");
    return 0;
}
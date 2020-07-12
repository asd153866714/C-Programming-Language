// Get sum of array by pointer
#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, a[3] = {10, 20, 30};
    int sum = 0;
    int *ptr = a;
    printf("%d\n", ptr);

    for (int i = 0; i < 3; i++)
    {
        sum += *(ptr++);    // *(ptr++) = *(a+i)
        printf("%d\n", ptr);
    }
    printf("sum = %d\n", sum);
    system("pause");
    return 0;
}
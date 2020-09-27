#include <stdio.h>
#include <stdlib.h>
#define SIZE 4

void show(int arr[])
{
    int i;
    for (i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);  /* 印出陣列內容 */
    printf("\n");
}

int main(void)
{
    int A[SIZE] = {5, 3, 6, 1}; /* 設定陣列A的初值 */
    printf("陣列的內容為: ");
    show(A);                    /* 呼叫函數show() */

    system("pause");
    return 0;
}

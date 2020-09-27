#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void display(int a[])
{
    for (int i = 0; i < SIZE; i++)
        printf("%d ", a[i]); /* 印出陣列的內容 */
    printf("\n");
}

void bubbleSort(int a[])
{
    int i, j, temp;
    for (i = 1; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int data[SIZE] = {26, 5, 81, 7, 63};

    printf("排序前...\n");
    display(data);
    bubbleSort(data);

    printf("排序後...\n");
    display(data);

    system("pause");
    return 0;
}
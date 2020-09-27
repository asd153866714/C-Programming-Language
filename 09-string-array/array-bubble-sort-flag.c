/* 氣泡排序法之改良版 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
void show(int a[]), bubble2(int a[]);
int main(void)
{
    int data[SIZE] = {26, 5, 81, 7, 63};

    printf("Before process...\n");
    show(data);
    bubble2(data);
    printf("After process...\n");
    show(data);
    system("pause");
    return 0;
}
void show(int a[])
{
    int i;

    for (i = 0; i < SIZE; i++)
        printf("%d ", a[i]); 
    printf("\n");
}
void bubble2(int a[]) 
{
    int i, j, temp;
    int flag = 0; /* 設定flag為0 */

    for (i = 1; (i < SIZE) && (!flag); i++)
    {
        flag = 1;
        for (j = 0; j < (SIZE - i); j++)
            if (a[j] > a[j + 1])
            {
                temp = a[j]; /* 對換陣列內的值 */
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 0;
            }
    }
}

#include <stdio.h>
# define SIZE 8

void show_binary(int num)
{
    int i, b[SIZE] = {0};

    for (i = 1; i <= SIZE; i++)
    {
        b[SIZE - i] = num % 2;
        num = num / 2;
    }
    for (i = 0; i < SIZE; i++)
    {
        printf("%d", b[i]);
    }
    printf("\n");
}

int main(void)
{
    int a = 105, b = 26;
    printf("%d & %d = %d\n", a, b, a & b); /* 計算a&b的值 */

    int c = (89 << 1);

    printf("89二進位的值為: ");
    show_binary(89); /* 顯示數字89的二進位 */

    printf("左移一個位元後: ");
    show_binary(c); /* 顯示89左移一個位元後的二進位 */

    printf("左移一個位元後的十進位值為: %d\n", c);

    system("pause");
    return 0;
}

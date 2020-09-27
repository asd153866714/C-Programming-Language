#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    // 「!」運算的用法
    int a = 0;
    int b = 6;
    printf("a = %d, !a = %d\n", a, !a); /* 印出a及!a的值 */
    printf("b = %d, !b = %d\n", b, !b); /* 印出b及!b的值 */

    // 餘數運算子
    printf("12 %% 4 = %d\n", 12 % 4); /* 求出12/4的餘數 */
    printf("12 %% 5 = %d\n", 12 % 5); /* 求出12/5的餘數 */

    system("pause");
    return 0;
}
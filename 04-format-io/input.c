# include <stdio.h>
# include <stdlib.h>
int main(void)
{
    // 一次輸入兩個整數，用空格隔開
    int a, b;

    printf("請輸入兩個整數: ");
    scanf("%d %d", &a, &b);            /* 由鍵盤輸入二個數並設定給變數a、b */
    printf("%d+%d=%d\n", a, b, a + b); /* 計算總和並印出內容 */

    int c, d;

    // 一次輸入兩個整數，用逗號隔開
    printf("請輸入兩個整數，請用逗號隔開數值: ");
    scanf("%d,%d", &c, &d);            /* 以「,」隔開兩個輸入格式碼 */
    printf("%d+%d=%d\n", c, d, c + d); /* 計算總和並印出內容 */

    int num;

    // 輸入十六進位數值，再印出它的十進位
    printf("請輸入十六進位的整數：");
    scanf("%x", &num);                    /* 輸入十六進位數值，並指定給變數num */
    printf("%x的十進位為%d\n", num, num); /* 將十六進位數值以十進位印出 */

    system("pause");
    return 0;
}
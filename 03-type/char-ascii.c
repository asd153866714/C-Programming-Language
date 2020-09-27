#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 以ASCII碼設定字元
    char ch = 90;            /* 將整數90設給字元變數ch */
    printf("ch = %c\n", ch); /* 印出ch的值 */
    printf("%d\n", ch);

    // 數字字元與其相對應的ASCII碼
    char ch = '2';                         /* 宣告字元變數ch，並設值為'2' */
    printf("ch=%c\n", ch);                 /* 印出字元變數ch */
    printf("the ASCII of ch is %d\n", ch); /* 印出ch的ASCII碼 */

    system("pause");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    // 跳脫序列的列印
    char beep = '\a';                         /* 宣告字元變數beep，並設定其值為'\a' */
    printf("%c", beep);                       /* �韙@聲警告音 */
    printf("ASCII of beep = %d\n", beep);         /* 印出beep的ASCII值 */

    // 跳脫序列「\"」的列印
    char ch = '\"';                           /* 宣告字元變數ch，並設值為'\"' */
    printf("%cWe are the World%c\n", ch, ch); /* 印出字串 */

    system("pause");
    return 0;
}
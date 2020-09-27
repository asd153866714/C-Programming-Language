#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch = 'a';              /* 宣告字元變數ch */
    char str1[] = "a";          /* 宣告字串變數str1 */
    char str2[] = "Sweet home"; /* 宣告字串變數str2 */

    printf("字元 ch 佔了 %d 個位元組\n", sizeof(ch));
    printf("字串 str1 佔了 %d 個位元組\n", sizeof(str1));
    printf("字串 str2 佔了 %d 個位元組\n", sizeof(str2));

    system("pause");
    return 0;
}

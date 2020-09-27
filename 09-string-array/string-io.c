#include <stdio.h>

int main()
{
    char name[15];  /* 宣告字元陣列 name */

    puts("What's your name?");
    gets(name);     /* 利用 gets() 讀入字串，並寫入字元陣列 name 裡 */

    puts("Hi!");
    puts(name);     /* 利用 puts() 印出字元陣列 name 的內容 */

    system("pause");
    return 0;
}
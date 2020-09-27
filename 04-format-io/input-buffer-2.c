#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num;
    char ch;

    printf("請輸入一個整數: ");
    scanf("%d", &num);
    fflush(stdin);

    printf("請輸入一個字元: ");
    scanf(" %c", &ch);

    printf("num=%d, ch = %c\n", num, ch);
    printf("ASCII Code of ch = %d\n", ch);
    
    system("pause");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num;
    char ch;

    printf("�п�J�@�Ӿ��: ");
    scanf("%d", &num);
    fflush(stdin);

    printf("�п�J�@�Ӧr��: ");
    scanf(" %c", &ch);

    printf("num=%d, ch = %c\n", num, ch);
    printf("ASCII Code of ch = %d\n", ch);
    
    system("pause");
    return 0;
}

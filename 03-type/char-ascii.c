#include <stdio.h>
#include <stdlib.h>

int main()
{
    // �HASCII�X�]�w�r��
    char ch = 90;            /* �N���90�]���r���ܼ�ch */
    printf("ch = %c\n", ch); /* �L�Xch���� */
    printf("%d\n", ch);

    // �Ʀr�r���P��۹�����ASCII�X
    char ch = '2';                         /* �ŧi�r���ܼ�ch�A�ó]�Ȭ�'2' */
    printf("ch=%c\n", ch);                 /* �L�X�r���ܼ�ch */
    printf("the ASCII of ch is %d\n", ch); /* �L�Xch��ASCII�X */

    system("pause");
    return 0;
}

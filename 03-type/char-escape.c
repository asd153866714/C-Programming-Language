#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    // ����ǦC���C�L
    char beep = '\a';                         /* �ŧi�r���ܼ�beep�A�ó]�w��Ȭ�'\a' */
    printf("%c", beep);                       /* ��@�nĵ�i�� */
    printf("ASCII of beep = %d\n", beep);         /* �L�Xbeep��ASCII�� */

    // ����ǦC�u\"�v���C�L
    char ch = '\"';                           /* �ŧi�r���ܼ�ch�A�ó]�Ȭ�'\"' */
    printf("%cWe are the World%c\n", ch, ch); /* �L�X�r�� */

    system("pause");
    return 0;
}
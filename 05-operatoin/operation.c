#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    // �u!�v�B�⪺�Ϊk
    int a = 0;
    int b = 6;
    printf("a = %d, !a = %d\n", a, !a); /* �L�Xa��!a���� */
    printf("b = %d, !b = %d\n", b, !b); /* �L�Xb��!b���� */

    // �l�ƹB��l
    printf("12 %% 4 = %d\n", 12 % 4); /* �D�X12/4���l�� */
    printf("12 %% 5 = %d\n", 12 % 5); /* �D�X12/5���l�� */

    system("pause");
    return 0;
}
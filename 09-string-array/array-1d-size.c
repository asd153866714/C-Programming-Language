#include <stdio.h>

int main()
{
    double data[4]; /* �ŧi��4�Ӥ�����double���A�}�C */
    printf("�}�C�����Ҧ����줸��:%d\n", sizeof(data[0]));
    printf("��Ӱ}�C�Ҧ����줸��:%d\n", sizeof(data));
    printf("�}�C�������Ӽ�:%d\n", sizeof(data) / sizeof(double));

    system("pause");
    return 0;
}
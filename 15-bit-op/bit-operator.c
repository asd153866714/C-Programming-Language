#include <stdio.h>
# define SIZE 8

void show_binary(int num)
{
    int i, b[SIZE] = {0};

    for (i = 1; i <= SIZE; i++)
    {
        b[SIZE - i] = num % 2;
        num = num / 2;
    }
    for (i = 0; i < SIZE; i++)
    {
        printf("%d", b[i]);
    }
    printf("\n");
}

int main(void)
{
    int a = 105, b = 26;
    printf("%d & %d = %d\n", a, b, a & b); /* �p��a&b���� */

    int c = (89 << 1);

    printf("89�G�i�쪺�Ȭ�: ");
    show_binary(89); /* ��ܼƦr89���G�i�� */

    printf("�����@�Ӧ줸��: ");
    show_binary(c); /* ���89�����@�Ӧ줸�᪺�G�i�� */

    printf("�����@�Ӧ줸�᪺�Q�i��Ȭ�: %d\n", c);

    system("pause");
    return 0;
}

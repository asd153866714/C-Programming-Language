# include <stdio.h>
# include <stdlib.h>
int main(void)
{
    // �@����J��Ӿ�ơA�ΪŮ�j�}
    int a, b;

    printf("�п�J��Ӿ��: ");
    scanf("%d %d", &a, &b);            /* ����L��J�G�Ӽƨó]�w���ܼ�a�Bb */
    printf("%d+%d=%d\n", a, b, a + b); /* �p���`�M�æL�X���e */

    int c, d;

    // �@����J��Ӿ�ơA�γr���j�}
    printf("�п�J��Ӿ�ơA�Хγr���j�}�ƭ�: ");
    scanf("%d,%d", &c, &d);            /* �H�u,�v�j�}��ӿ�J�榡�X */
    printf("%d+%d=%d\n", c, d, c + d); /* �p���`�M�æL�X���e */

    int num;

    // ��J�Q���i��ƭȡA�A�L�X�����Q�i��
    printf("�п�J�Q���i�쪺��ơG");
    scanf("%x", &num);                    /* ��J�Q���i��ƭȡA�ë��w���ܼ�num */
    printf("%x���Q�i�쬰%d\n", num, num); /* �N�Q���i��ƭȥH�Q�i��L�X */

    system("pause");
    return 0;
}
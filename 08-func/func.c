# include <stdio.h>

void star(void);

int main() {
    star();
    printf("�w��ϥ�C�y��\n");
    star();
    system("pause");
    return 0;
}

void star(void) {
    printf("**********\n");
    return;     // �i�H�ٲ��A�]���^�ǭȬ��ŭ�
}
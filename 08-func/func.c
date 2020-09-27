# include <stdio.h>

void star(void);

int main() {
    star();
    printf("歡迎使用C語言\n");
    star();
    system("pause");
    return 0;
}

void star(void) {
    printf("**********\n");
    return;     // 可以省略，因為回傳值為空值
}
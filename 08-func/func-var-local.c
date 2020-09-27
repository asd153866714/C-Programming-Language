# include <stdio.h>

void func(void) {
    int a = 300;
    printf("In func(), a = %d\n", a);
}

int main() {
    int a = 100;
    printf("Before call func(), a = %d\n", a);
    func();
    printf("After call func(), a = %d\n", a);

    system("pause");
    return 0;
}
# include <stdio.h>

void func(void) {
    static int a = 100;
    printf("In func(), a = %d\n", a);
    a += 200;
}

int main() {
    func();
    func();
    func();
    
    system("pause");
    return 0;
}
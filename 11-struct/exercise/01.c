#include <stdio.h>
#include <stdlib.h>

int main() {
    
    struct data
    {
        int num;
        char ch;
        double dist;
    } aaa;

    printf("sizeof(aaa) = %d\n", sizeof(aaa));

    system("pause");
    return 0;
}

// (a) sizeof stuct aaa = 16
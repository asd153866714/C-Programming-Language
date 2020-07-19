#include <stdio.h>
#include <stdlib.h>
int main() {
    int num[] = {14, 23, 32, 62, 19};
    int *p1, *p2;
    p1 = p2 = num;

    *p1 ++;
    printf("*p1 = %d\n", *p1);

    (*p2)++;
    printf("*p2 = %d\n", *p2);

    system("pause");
    return 0;
}

// (a)  line 11 => 23
//      line 14 => 15

// (b)  line 11 => *(ptr++)     => [0++] = [1]
//      line 14 => (*ptr)++     => [0]++ = [0] + 1
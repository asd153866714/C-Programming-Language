// Change value of index n element
#include <stdio.h>
#include <stdlib.h>
void replace(int *, int, int);
int main() {
    int a[3] = {10, 20, 30};
    int i, num = 24;
    
    replace(a, 3, num);
    printf("After replace, array's content is:");

    for (int i = 0; i < 3; i++)
    {
        printf("%3d", a[i]);
    }
    printf("\n");

    system("pause");
    return 0; 
}
void replace(int *ptr, int n, int num) {
    *(ptr + n - 1) = num;
}
# include <stdio.h>
# define SIZE 6

int main() {
    int i, num, flag = 0;
    int A[SIZE] = {33, 75, 60, 31, 10, 24};

    printf("Array A = ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", A[i]);
    }
    printf("\nSearch number: ");
    scanf("%d", &num);

    for (i = 0; i < SIZE; i++)
    {
        if (A[i] == num) {
            flag = 1;
            printf("A[%d] = %d\n", i, A[i]);
        }
    }
    if (flag == 0)
        printf("Not found\n");
    
    system("pause");
    return 0;
}
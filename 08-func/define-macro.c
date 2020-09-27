# include <stdio.h>
# define SQUARE n * n

int main() {
    int n;
    printf("Input a integer: ");
    scanf("%d", &n);
    printf("%d * %d = %d\n", n, n, SQUARE);

    return 0;
}
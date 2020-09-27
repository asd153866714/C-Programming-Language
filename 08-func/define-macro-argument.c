# include <stdio.h>
# define SQUARE(X) X * X

int main() {
    int n;
    printf("Input a integer: ");
    scanf("%d", &n);
    printf("%d * %d = %d\n", n, n, SQUARE(n));

    return 0;
}
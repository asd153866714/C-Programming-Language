# include <stdio.h>

int factorial(int n) {
    if (n > 0) {
        return (n * factorial(n-1));
    }
    else
    {
        return 1;
    }
    
}

int main(void) {
    printf("factorial(4) = %d\n", factorial(4));

    system("pause");
    return 0;
}
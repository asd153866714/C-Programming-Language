#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

void show_binary(int num)
{
    int i, b[SIZE] = {0};

    for (i = 0; i <= SIZE; i++)
    {
        b[SIZE - i] = num % 2;
        num = num / 2;
    }
    for (i = 0; i < SIZE; i++)
    {
        printf("%d", b[i]);
    }
    printf("\n");
}

int main(void)
{
   printf("89���G�i�쬰: ");
   show_binary(89);
      
   system("pause");
   return 0;
}
#include <stdio.h>
#define SQUARE(X) (X)*(X)

int main(void)
{
   int n;
   printf("Input an integer:");
   scanf("%d",&n);
   printf("%d*%d=%d\n",n+1,n+1,SQUARE(n+1));  /* 印出n+1的平方*/

   system("pause");
   return 0;
}
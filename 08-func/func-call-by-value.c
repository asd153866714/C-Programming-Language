# include <stdio.h>

void add10(int a, int b) {
    a += 10;
    b += 10;
}

int main(void)
{
   int a=3, b=5;
   
   printf("�I�s���add10()���e: ");
   printf("a=%d, b=%d\n",a,b);
   add10(a,b);
   printf("�I�s���add10()����: ");
   printf("a=%d, b=%d\n",a,b);

   system("pause");
   return 0;
}

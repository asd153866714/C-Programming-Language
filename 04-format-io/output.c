#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   printf("Have a nice day!!\n"); /* ﹃ず甧 */

   int num = 25;
   printf("\"%d%%厩ネㄓ眃產畑\"\n", num); /* ﹃ */

   int num1 = 32, num2 = 1024;
   float num3 = 12.3478f;

   printf("num1=%6dそń\n", num1);   /* %6dΑnum1 */
   printf("num2=%-6dそń\n", num2);  /* %-6dΑnum2 */
   printf("num3=%6.2f璣\n", num3); /* %6.2fΑnum3 */

   int i = 1234;
   printf("i=%+08d\n", i); /* ㊣printf()ㄧ计 */

   printf("42秈琌 %o\n", 42);   /* 42秈 */
   printf("42せ秈琌 %x\n", 42); /* 42せ秈 */

   int a = 15; /* 俱计跑计a砞15 */

   printf("a=%d\n", a);                        /* a */
   printf("疊翴计篈: %f\n", (float)a); /* 疊翴计篈a */
   printf("计篈: %e\n", (double)a);  /* 计篈a */

   system("pause");
   return 0;
}

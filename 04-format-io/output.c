#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   printf("Have a nice day!!\n"); /* �L�X�r�ꤺ�e */

   int num = 25;
   printf("\"%d%%���ǥͨӦۤp�d�a�x\"\n", num); /* �L�X�r�� */

   int num1 = 32, num2 = 1024;
   float num3 = 12.3478f;

   printf("num1=%6d����\n", num1);   /* �H�u%6d�v�榡�L�Xnum1 */
   printf("num2=%-6d����\n", num2);  /* �H�u%-6d�v�榡�L�Xnum2 */
   printf("num3=%6.2f�^��\n", num3); /* �H�u%6.2f�v�榡�L�Xnum3 */

   int i = 1234;
   printf("i=%+08d\n", i); /* �I�sprintf()��� */

   printf("42���K�i��O %o\n", 42);   /* �L�X42���K�i�� */
   printf("42���Q���i��O %x\n", 42); /* �L�X42���Q���i�� */

   int a = 15; /* �ŧi����ܼ�a�A�ó]�Ȭ�15 */

   printf("a=%d\n", a);                        /* �L�Xa���� */
   printf("�H�B�I�ƫ��A�L�X: %f\n", (float)a); /* �H�B�I�ƫ��A�L�Xa */
   printf("�H���ƫ��A�L�X: %e\n", (double)a);  /* �H���ƫ��A�L�Xa */

   system("pause");
   return 0;
}

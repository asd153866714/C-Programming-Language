#include <stdio.h>

int main()
{
    char name[15];  /* �ŧi�r���}�C name */

    puts("What's your name?");
    gets(name);     /* �Q�� gets() Ū�J�r��A�üg�J�r���}�C name �� */

    puts("Hi!");
    puts(name);     /* �Q�� puts() �L�X�r���}�C name �����e */

    system("pause");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    // ¸õ²æ§Ç¦Cªº¦C¦L
    char beep = '\a';                         /* «Å§i¦r¤¸ÅÜ¼Æbeep¡A¨Ã³]©w¨ä­È¬°'\a' */
    printf("%c", beep);                       /* ñ¤@ÁnÄµ§i­µ */
    printf("ASCII of beep = %d\n", beep);         /* ¦L¥XbeepªºASCII­È */

    // ¸õ²æ§Ç¦C¡u\"¡vªº¦C¦L
    char ch = '\"';                           /* «Å§i¦r¤¸ÅÜ¼Æch¡A¨Ã³]­È¬°'\"' */
    printf("%cWe are the World%c\n", ch, ch); /* ¦L¥X¦r¦ê */

    system("pause");
    return 0;
}
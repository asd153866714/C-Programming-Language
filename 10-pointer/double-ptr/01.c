// Example of Double Pointer
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n = 20, *p, **pp;
    p = &n;
    pp = &p;

    printf("n=%d,&n=%p\n", n, &n);
    printf("*p=%d,p=%p,&p=%p\n", *p, p, &p);
    printf("**pp=%d,*pp=%p,pp=%p,&pp=%p\n", **pp, *pp, pp, &pp);

    system("pause");
    return 0;
}
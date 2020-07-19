// Application of enum
#include <stdio.h>
#include <stdlib.h>
int main() {
    enum color {red, green, blue};
    enum color shirt;

    printf("sizeof (shirt) = %d\n", sizeof(shirt));
    printf("red = %d\n", red);
    printf("green = %d\n", green);
    printf("blue = %d\n", blue);

    shirt = green;
    if (shirt == green) {
        printf("You choose green shirt.\n");
    }
    else {
        printf("You choose shirt which color is not green.\n");
    }

    system("pause");
    return 0;
}

// The space of enum as same as integer => 4 bytes
// Defult value => 0, 1, 2 ... 
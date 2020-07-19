// Application of enum -02
#include <stdio.h>
#include <stdlib.h>
int main() {
    enum color {
        red = 114, 
        green = 103, 
        blue = 98
    } shirt;

    char key;

    do
    {
        printf("Enter r, g, b :\n");
        scanf("%c", &key);
        fflush(stdin);      // Clear buffer's data
    } while (key != red && key != green && key != blue);
    
    shirt = key;

    switch (shirt)
    {
    case red:
        printf("You choose red\n");
        break;
    case green:
        printf("You choose green\n");
        break;
    case blue:
        printf("You choose blue\n");
        break;
    default:
        break;
    }

    system("pause");
    return 0;
}
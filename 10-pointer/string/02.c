// Pointer array
#include <stdio.h>
#include <stdlib.h>
int main() {
    int i;
    char *ptr[3] = {"Tom", "Andy", "Jack"};
    
    for (i = 0; i < 3; i++)
    {
        puts(ptr[i]);   // print the string which pointed by ptr[i]
    }
    
    system("pause");
    return 0;
}
// Pointer Array can prevent wasting memory
// Compiler will set excatly space to store string
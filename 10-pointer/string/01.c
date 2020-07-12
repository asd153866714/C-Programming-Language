// Use pointer-variable to point string
#include <stdio.h>
#include <stdlib.h>
int main() {
    char name[20];
    char *ptr = "How are you?";     // point string

    printf("What's your name? ");
    gets(name);                     // get string from keyboard input, and store in var name
    printf("Hi, %s, ", name);       // print name's content
    puts(ptr);                     // print the string that pointed by *ptr
    // puts(++ptr)  =>  different result

    system("pause");
    return 0;
}

// In this case, "name" is a pointer-constant, we can not change the value

// But "ptr" is a pointer-variable, we can change the value
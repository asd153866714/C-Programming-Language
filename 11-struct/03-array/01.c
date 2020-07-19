// Array of struct
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    struct data
    {
        char name[10];
        int math;
    } student[10];
    
    printf("sizeof(student[3]) = %d\n", sizeof(student[3]));
    printf("sizeof(student) = %d\n", sizeof(student));

    system("pause");
    return 0;
}

// Size fo single element in Array of structure's is 16 bytes
# include <stdio.h>

void toUpper(char s[]) {
    int i = 0;
    while (s[i] != '\n')
    {
        if (s[i] > 97 && s[i] <= 122)
            s[i] = s[i] - 32;   /* ��p�g�r����ASCII�X��32�A�ܦ��j�g */
        i++;
    }
}

int main() {
    char str[15];

    printf("please enter a word: ");
    gets(str);
    toUpper(str);
    printf("After convert to upperCase: %s\n", str);

    system("pause");
    return 0;
}
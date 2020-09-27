# include <stdio.h>

int main() {
    int i, score[4];

    score[0] = 78;
    score[1] = 55;
    score[2] = 92;
    score[3] = 80;

    for (i = 0; i <= 3; i++) {
        printf("score[i] = %d\n", i, score[i]);
    }

    return 0;
}
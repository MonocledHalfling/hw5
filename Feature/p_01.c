#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_LOTTO 6
#define MAX_NUM 45
#define NUM_SETS 6

int isDuplicate(const int lotto[], const int size, const int num) {
    for (int i = 0; i < size; i++) {
        if (lotto[i] == num)
            return 1;
    }
    return 0;
}

void generateLotto(int lotto[]) {
    for (int i = 0; i < NUM_LOTTO; ) {
        int number = rand() % MAX_NUM + 1;
        if (!isDuplicate(lotto, i, number)) {
            lotto[i] = number;
            i++;
        }
    }
}

void p_01(void) {
    srand((unsigned int)time(NULL));

    FILE *file = fopen("C:/Users/PC/CLionProjects/hw5/data/lotto.txt", "w");
    if (file == NULL) {
        printf("파일 열기 실패\n");
        return;
    }

    for (int i = 0; i < NUM_SETS; i++) {
        int lotto[NUM_LOTTO] = {0};
        generateLotto(lotto);
        for (int j = 0; j < NUM_LOTTO; j++) {
            fprintf(file, "%2d ", lotto[j]);
        }
        fprintf(file, "\n");
    }

    fclose(file);
    printf("lotto.txt 파일 생성 완료\n");
}
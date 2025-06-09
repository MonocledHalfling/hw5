#include <stdio.h>

char ls[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
             'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
             'U', 'V', 'W', 'X', 'Y', 'Z'};

void p_02(void) {
    FILE *file = fopen("/Users/iseongmin/CLionProjects/hw5/Data/alphabet.txt", "w");
    if (file == NULL) {
        printf("파일 열기 실패\n");
        return;
    }

    for (int i = 0; i < 1000; i++) {
        fprintf(file, "%c ", ls[i%26]);
    }

    printf("%d개의 알파벳이 alphabet.txt 파일에 저장되었습니다.\n", 1000);
    fclose(file);
}
#include <stdio.h>

char ls[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
             'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
             'U', 'V', 'W', 'X', 'Y', 'Z'};

void p_02(void) {
    FILE *file = fopen("C:/Users/PC/CLionProjects/hw5/data/alphabet.txt", "w");
    if (file == NULL) {
        printf("���� ���� ����\n");
        return;
    }

    for (int i = 0; i < 1000; i++) {
        fprintf(file, "%c ", ls[i%26]);
    }

    printf("%d���� ���ĺ��� alphabet.txt ���Ͽ� ����Ǿ����ϴ�.\n", 1000);
    fclose(file);
}
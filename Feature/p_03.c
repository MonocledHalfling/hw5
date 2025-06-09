#include <stdio.h>

void copyFile(FILE *copyFile, FILE *pastFile) {
    char buffer[1024];
    size_t bytesRead;

    while ((bytesRead = fread(buffer, sizeof(char), sizeof(buffer), copyFile)) > 0) {
        fwrite(buffer, sizeof(char), bytesRead, pastFile);
    }
}

void p_03(void) {
    FILE *file1 = fopen("/Users/iseongmin/CLionProjects/hw5/Data/a1.txt", "r");
    FILE *file2 = fopen("/Users/iseongmin/CLionProjects/hw5/Data/a2.txt", "r");
    FILE *file3 = fopen("/Users/iseongmin/CLionProjects/hw5/Data/a3.txt", "w");

    if (file1 == NULL || file2 == NULL || file3 == NULL) {
        perror("파일 열기 실패");
        return;
    }

    copyFile(file1, file3);
    fputc('\n', file3);
    copyFile(file2, file3);

    printf("파일 병합 완료: a3.txt\n");
    fclose(file1);
    fclose(file2);
    fclose(file3);
}
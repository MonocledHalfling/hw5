#include <stdio.h>
#define LEVEL 1

int p_07(void) {
    #ifdef LEVEL
    printf("�������� ���α׷�\n");
    #else
    printf("�ʺ��ڿ� ���α׷�");
    #endif
    return 0;
}

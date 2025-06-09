#include <stdio.h>

void p_06(void) {
    printf("컴파일된 파일: %s\n", __FILE__);
    printf("컴파일된 날짜: %s\n", __DATE__);
    printf("컴파일된 시간: %s\n", __TIME__);
    printf("컴파일된 줄 번호: %d\n", __LINE__);
}
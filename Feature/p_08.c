#include <stdio.h>

int dectobin(int n);

int p_08(void) {
    int n;
    printf("정수를 입력하고 Enter>");
    scanf("%d", &n);
    dectobin(n);
    printf("\n");
    return 0;
}

int dectobin(int n) {
    if (n < 1)
        return n;
    dectobin(n / 2);
    printf("%d", n % 2);

    return 0;
}

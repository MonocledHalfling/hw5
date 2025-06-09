#include <stdio.h>

void my_itoa(int value, char *str, int base);

int p_09(void)
{
    int a = 7, b = 12;
    char bina[33], binb[33], btmp[33];

    my_itoa(a, bina, 2);
    printf(" a의 2진수:%32s\n", bina);

    my_itoa(~a, binb, 2);
    printf("~a의 2진수:%32s\n", binb);

    my_itoa(b, binb, 2);
    printf(" b의 2진수:%32s\n", binb);

    my_itoa(a & b, btmp, 2);
    printf(" a & b  :%32s\n", btmp);

    my_itoa(a | b, btmp, 2);
    printf(" a | b  :%32s\n", btmp);

    my_itoa(a ^ b, btmp, 2);
    printf(" a ^ b  :%32s\n", btmp);

    return 0;
}

void my_itoa(int value, char *str, int base) {
    char *digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char buf[33];
    int i = 0, isNegative = 0;

    if (value == 0) {
        str[0] = '0';
        str[1] = '\0';
        return;
    }

    if (value < 0 && base == 10) {
        isNegative = 1;
        value = -value;
    }

    while (value != 0) {
        buf[i++] = digits[value % base];
        value /= base;
    }

    if (isNegative)
        buf[i++] = '-';

    buf[i] = '\0';

    // 뒤집기
    for (int j = 0; j < i; j++) {
        str[j] = buf[i - j - 1];
    }
    str[i] = '\0';
}
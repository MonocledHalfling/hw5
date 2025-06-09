#include <stdio.h>
#include <stdlib.h>

struct person {
    char *name;
    char *phone_number;
    int bell_num;
};

void p_04(void) {
    struct person p;
    p.name = (char *)malloc(20 * sizeof(char));
    p.phone_number = (char *)malloc(14 * sizeof(char));

    printf("이름 입력 >");
    scanf("%s", p.name);
    printf("전화번호 입력 >");
    scanf("%s", p.phone_number);
    printf("벨 번호 입력 >");
    scanf("%d", &p.bell_num);

    printf("이름: %s\n", p.name);
    printf("전화번호: %s\n", p.phone_number);
    printf("벨 번호: %d\n", p.bell_num);
}
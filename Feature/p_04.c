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

    printf("�̸� �Է� >");
    scanf("%s", p.name);
    printf("��ȭ��ȣ �Է� >");
    scanf("%s", p.phone_number);
    printf("�� ��ȣ �Է� >");
    scanf("%d", &p.bell_num);

    printf("�̸�: %s\n", p.name);
    printf("��ȭ��ȣ: %s\n", p.phone_number);
    printf("�� ��ȣ: %d\n", p.bell_num);
}
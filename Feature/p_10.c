#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int p_10(void) {
    char *psr[3] = {"����", "����", "��"};
    int com, you;

    srand(time(NULL));

    printf("���������� ����\n\n");
    printf("����(1), ����(2), ��(3) �߿���\n");
    printf("���ڸ� �Է��ϼ���.\n");
    printf("����� 0�� �Է��ϼ���.\n");

    while (1) {
        com = rand() % 3 + 1;

        printf("\n���� : �����Է� �� Enter> ");
        scanf("%d", &you);

        if (you == 0)
            break;

        printf("��ǻ�ʹ� %s, ����� %s\n", psr[com - 1], psr[you - 1]);
        printf("��� : ");

        if (com == 1) {
            // ��ǻ�Ͱ� ����
            if (you == 1) printf("�����ϴ�.\n");
            else if (you == 2) printf("����� �̰���ϴ�.\n");
            else printf("��ǻ�Ͱ� �̰���ϴ�.\n");
        } else if (com == 2) {
            // ��ǻ�Ͱ� ����
            if (you == 1) printf("��ǻ�Ͱ� �̰���ϴ�.\n");
            else if (you == 2) printf("�����ϴ�.\n");
            else printf("����� �̰���ϴ�.\n");
        } else {
            // ��ǻ�Ͱ� ��
            if (you == 1) printf("����� �̰���ϴ�.\n");
            else if (you == 2) printf("��ǻ�Ͱ� �̰���ϴ�.\n");
            else printf("�����ϴ�.\n");
        }

        printf("\n");
    }

    printf("������ �����մϴ�.\n");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int menu_display(void);
void guguall(void);
void gugusel(void);
void presskey(void);

int p_13(void)
{
    int c;
    while ((c = menu_display()) != 3) {
        switch (c) {
            case 1: guguall(); break;
            case 2: gugusel(); break;
            default: break;
        }
    }
    return 0;
}

int menu_display(void)
{
    int select;
    system("cls"); // Windows 콘솔에서 화면 클리어
    printf("구구단 프로그램\n\n");
    printf("1. 구구단 전체 출력\n");
    printf("2. 원하는 단만 출력\n");
    printf("3. 프로그램 종료\n\n");
    printf("메뉴번호 입력후 Enter>");
    scanf("%d", &select);
    return select;
}

void guguall(void)
{
    system("cls");
    printf("구구단 전체 출력\n\n");
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            printf("%d*%d=%2d ", j, i, j * i);
        }
        printf("\n");
    }
    presskey();
}

void gugusel(void)
{
    int dan;
    system("cls");
    printf("원하는 단만 출력 \n\n");
    printf("출력할 단을 입력하고 Enter>");
    scanf("%d", &dan);
    for (int i = 1; i <= 9; i++) {
        printf("%d*%d=%2d \n", dan, i, dan * i);
    }
    presskey();
}

void presskey(void)
{
    char c;
    fflush(stdin); // 입력 버퍼 비우기
    printf("\n\n");
    printf("Enter를 누르면 메인 메뉴로...");
    scanf("%c", &c); // 아무 키나 입력 대기
}
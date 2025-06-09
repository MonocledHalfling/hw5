#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void gotoxy(int x, int y);

int p_11(void)
{
    int i, dan[10], num[10], dap[10];
    srand(time(NULL));

    for (i = 0; i < 10; i++) {
        dan[i] = rand() % 9 + 1;  // 1~9
        num[i] = rand() % 9 + 1;  // 1~9
    }

    printf("구구단 문제풀기\n\n");
    printf("각 문제의 답을 입력하고\n");
    printf("Enter 하시오.\n\n");

    for (i = 0; i < 10; i++) {
        printf("%2d: %d * %d = ?\n", i + 1, dan[i], num[i]);
    }

    for (i = 0; i < 10; i++) {
        gotoxy(10, 6 + i); // (10, y) 위치로 이동해서 답 입력
        fflush(stdin);
        scanf("%d", &dap[i]);
    }

    return 0;
}

void gotoxy(int x, int y)
{
    COORD Pos = { x - 1, y - 1 };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
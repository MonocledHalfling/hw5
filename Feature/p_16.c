#include <stdio.h>

int p_16(void) {
    int r[] = {4, 1, 5, 3, 2};
    const int n = 5;
    int i;

    printf("original data\n");
    for (i = 0; i < n; i++)
        printf(" %d ", r[i]);
    printf("\n");

    printf("data after bubble sort2\n");

    int flag = n;
    while (flag > 0) {
        const int k = flag - 1;
        flag = 0;

        for (i = 0; i < k; i++) {
            if (r[i] > r[i + 1]) {
                const int temp = r[i];
                r[i] = r[i + 1];
                r[i + 1] = temp;
                flag = i + 1; // 마지막으로 swap된 위치를 기억
            }
        }
    }

    for (i = 0; i < n; i++)
        printf(" %d ", r[i]);
    printf("\n");

    return 0;
}

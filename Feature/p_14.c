#include <stdio.h>

int p_14(void) {
    const int a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    const int n = sizeof(a) / sizeof(int);
    int key, i;

    printf("Current Data \n\n");
    for (i = 0; i < n; i++)
        printf("%4d", a[i]);
    printf("\n\n");

    printf("Input key: ");
    scanf("%d", &key);

    int h = n;
    int l = 1;
    i = 0;

    while (l <= h) {
        const int m = (l + h) / 2;

        if (key < a[m])
            h = m - 1;
        else if (key > a[m])
            l = m + 1;
        else {
            i = m;
            printf("Find Data %d (index %d)\n", a[m], m);
            break;
        }
    }

    if (!i)
        printf("%d is not exist.\n", key);

    return 0;
}

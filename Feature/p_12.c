#include <time.h>
#include <stdio.h>

void p_12_time(void);

void p_12_clock(void);

void p_12(void) {
    p_12_time();
    p_12_clock();
}

void p_12_time(void) {
    time_t start, end;
    double i, pst, sum = 0;

    start = time(NULL);
    for (i = 0; i < 30000000; i++)
        sum += i;
    end = time(NULL);

    pst = difftime(end, start);
    printf("time: %f\n", pst);
}

void p_12_clock(void) {
    clock_t start, end;
    double i, pst, sum = 0;

    start = clock();
    for (i = 0; i < 30000000; i++)
        sum += i;
    end = clock();

    pst = (double) (end - start) / CLOCKS_PER_SEC;
    printf("time: %f\n", pst);
}

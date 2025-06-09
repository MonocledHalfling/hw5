#include <time.h>
#include <stdio.h>

void p_12_time(void);

void p_12_clock(void);

void p_12(void) {
    p_12_time();
    p_12_clock();
}

void p_12_time(void) {
    double sum = 0;

    const time_t start = time(NULL);
    for (double i = 0; i < 30000000; i++)
        sum += i;
    const time_t end = time(NULL);

    const double pst = difftime(end, start);
    printf("time: %f\n", pst);
}

void p_12_clock(void) {
    double sum = 0;

    const clock_t start = clock();
    for (double i = 0; i < 30000000; i++)
        sum += i;
    const clock_t end = clock();

    const double pst = (double) (end - start) / CLOCKS_PER_SEC;
    printf("time: %f\n", pst);
}

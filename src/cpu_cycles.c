/**
 * A program that demonstrates how to calculate cpu cycles used. Useful for benchmarking
 */
#include <time.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main()
{
    clock_t start, end;
    double cpu_time_used;

    start = clock();
    {
        unsigned int sum = 0;
        for (int i = 0; i < 10000000; ++i) {
            /* Nothing done */
            sum += 1;
        }
    }
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("CPU cycles: %f\n", cpu_time_used);
    return 0;
}

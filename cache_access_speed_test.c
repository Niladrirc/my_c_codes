#include <stdio.h>
#include <x86intrin.h>
#include <sys/time.h>
#define N 1000

int main() {
    // Consider a large 2D array
    static int arr[N][N];
    long long sum = 0;
    struct timeval start_time, end_time;

    // Start a time counter to measure time taken in terms of CPU cycles.
    unsigned long long start = __rdtsc();
    gettimeofday(&start_time, NULL);
    // Access elements in a cache-friendly manner
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            sum += arr[i][j];
        }
    }

    // End counter to find the cycle taken and print
    unsigned long long end = __rdtsc();
    gettimeofday(&end_time, NULL);

    long cycle1 = start - end;
    printf("CPU cycles taken in row-major access: %llu\n", end - start);
    printf("Time taken: %lu us\n", (end_time.tv_sec - start_time.tv_sec) * 1000000 + (end_time.tv_usec - start_time.tv_usec));

    start = __rdtsc();
    gettimeofday(&start_time, NULL);
    for (int j=0; j<N; j++) {
        for (int i=0; i<N; i++) {
            sum += arr[i][j];
        }
    }
    end = __rdtsc();
    gettimeofday(&end_time, NULL);
    long cycle2 = start - end;
    printf("CPU cycles taken in column-major access: %llu\n", end - start);
    printf("Cycle diff: %ld\n", cycle2 - cycle1);
    printf("Time taken: %lu us\n", (end_time.tv_sec - start_time.tv_sec) * 1000000 + (end_time.tv_usec - start_time.tv_usec));
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {

    // Работает но не правильно!

    printf("MemoryVolume char: %d\n", sizeof(char));
    printf("MemoryVolume short: %d\n", sizeof(short));
    printf("MemoryVolume float: %d\n", sizeof(float));
    printf("MemoryVolume int: %d\n", sizeof(int));
    printf("MemoryVolume double: %d\n", sizeof(double));

    printf("\n-----------------------\n");


    // Более правильный вариант 
    
    printf("MemoryVolume char: %zu\n", sizeof(char));
    printf("MemoryVolume short: %zu\n", sizeof(short));
    printf("MemoryVolume int: %zu\n", sizeof(int));
    printf("MemoryVolume double: %zu\n", sizeof(double));
    printf("MemoryVolume float: %zu\n", sizeof(float));
    printf("MemoryVolume long: %zu\n", sizeof(long));
    printf("MemoryVolume long long: %zu\n", sizeof(long long));
    printf("MemoryVolume pointer: %zu\n", sizeof(void *));

    getchar();
    return 0;
}
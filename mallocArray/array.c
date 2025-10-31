#include <stdio.h>

#define SIZE 5

int main() {

    int arrs[SIZE] = {1, 5, 2, 66, 15};

    for(int i = 0; i < SIZE; i++) {
        printf("Array[%d] -  %d\n", i + 1, arrs[i]);
    }

    return 0;
}
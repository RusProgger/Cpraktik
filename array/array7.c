#include <stdio.h>

int main() {

    unsigned int arrs[5] = {1, 5, 10, 2, 3};

    for(int i = 0; i < sizeof(arrs) / sizeof(arrs[0]); i++) {
        printf("Array %d\n", arrs[i]);
    }

    printf("\nEnter to exit...");

    getchar();
    return 0;
}
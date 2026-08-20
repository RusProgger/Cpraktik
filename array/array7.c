#include <stdio.h>

int main() {

    unsigned int arrs[5] = {1, 5, 10, 2, 3};

    for(int i = 0; i < sizeof(arrs) / sizeof(arrs[0]); i++) {
        printf("Array %d\n", arrs[i]);
    }

    // уменьшаем елементы массива на 1
    for(int i = 0; i < sizeof(arrs) / sizeof(arrs[0]); i++) {
        arrs[i]--;
    }

    for(int i = 0; i < sizeof(arrs) / sizeof(arrs[0]); i++) {
        
        printf("Arrs min: %d\n", arrs[i]);

    }

    printf("\nEnter to exit...\n");

    

    getchar();
    return 0;
}
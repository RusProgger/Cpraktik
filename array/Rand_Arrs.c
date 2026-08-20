#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int arrsRandom[5];
    srand(time(NULL));

    for(int i = 0; i < sizeof(arrsRandom) / sizeof(arrsRandom[0]); i++) {
        arrsRandom[i] = rand() % 50 + 1;
    }

     for(int i = 0; i < sizeof(arrsRandom) / sizeof(arrsRandom[0]); i++) {
        printf("Array random: %d\n", arrsRandom[i]);
    }

    return 0;
}
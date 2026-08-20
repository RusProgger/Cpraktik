#include <stdio.h>

int main() {

    int arrsRandom[5];

    for(int i = 0; i < sizeof(arrsRandom) / sizeof(arrsRandom[0]); i++) {
        arrsRandom[i] = rand() % 50 + 1;
    }

    

    return 0;
}
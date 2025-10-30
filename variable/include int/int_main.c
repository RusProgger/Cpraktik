#include <stdio.h>

static int number = 10000;

int main() {

    extern int number;
    printf("Static number - %d\n", number);

    extern int number_blobal_int;

    printf("Global number - %d\n", number_blobal_int);


    

    return 0;
}
#include <stdio.h>

int number = 10000; // со static переменная будет видна только в одном текущем файле.

int main() {

    extern int number;
    printf("Static number - %d\n", number);

    extern int number_blobal_int;

    printf("Global number - %d\n", number_blobal_int);


    

    return 0;
}
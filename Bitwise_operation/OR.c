#include <stdio.h>

int main() {

    // | (побитовое OR, «ИЛИ»).

    // То есть если хотя бы один бит равен 1, результат 1.

    printf("1 | 2 = %d\n", 1 | 2);
    printf("1 | 3 = %d\n", 1 | 3);
    printf("2 | 2 = %d\n", 2 | 2);
    printf("1 | 0 = %d\n", 1 | 0);
    printf("5 | 3 = %d\n", 5 | 3);


    return 0;
}
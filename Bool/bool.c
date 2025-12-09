#include <stdio.h>
// либо подключить библиотеку (так лучше и эффективней)
#include <stdbool.h>


int main() {

    // По умолчанию в Си нет встроенного типа bool, как в других языках. 
    // Поэтому тут нужно подключать библиотеку stdbool.h

    // код который будет работать только с библиотекой stdbool.h

    // Проверим пользователь женат?

    bool isMarried = false; // false, пользователь не женат.

    if(isMarried) {
        puts("User married true");
    } else {
        puts("User married false");
    }

    printf("10 > 2: %s\n", (10 > 2) ? "true" : "false");

    printf("----------------\n");
    return 0;
}
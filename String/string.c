#include <stdio.h>

int main() {

    char* name = "ALex";
    // name[2] = "M"; // ошибка через указатель нельзя менять значение смволов. 

    char ok[4] = "ok!"; // Все хорошо.
    printf("%s\n", ok);

    // можно менять значение

    ok[1] = 'o';

    printf("%s\n", ok);

    printf("%s", name);
    getchar(); // задержка
    return 0;
}
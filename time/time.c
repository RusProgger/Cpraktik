#include <stdio.h>

int main(void) {
    int year;            // год
    int month;           // месяц
    int day;             // день
    int hours;           // часы
    int minutes;         // минуты
    int seconds;         // секунды
    int utc_offset;      // смещение в часах относительно UTC

    year = 2025;
    month = 7;
    day = 16;
    hours = 13;
    minutes = 20;
    seconds = 45;
    utc_offset = 3;

    // Вывод в нужном формате
    printf("%04d-%02d-%02dT%02d:%02d:%02d%+03d\n",
           year, month, day, hours, minutes, seconds, utc_offset);

    // Задержка 
     
    getchar();      

    return 0;
}

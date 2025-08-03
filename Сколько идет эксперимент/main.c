#include <stdio.h>

int main() {

    /* 
    
    Эксперимент длится h часа m минут. Сколько это в минутах? Сколько это в секундах?

    Дано: два целых числа через пробел (часы и минуты).
    Найти: два целых числа, по одному числу на строке. Всего минут. Всего секунд.

    */


    int h, m, res_hour, res_second;
    printf("Enter Hour: ");
    scanf("%d", &h); // час

    printf("Enter minutes: ");
    scanf("%d", &m); // минут

    res_hour = (h * 60) + m;
    res_second = (h * 60 + m) * 60;

    // вывод 

    printf("Минут: %d\n", res_hour);
    printf("Секунд: %d", res_second);

    getchar(); // задержка окна
    getchar(); 

    return 0;
}

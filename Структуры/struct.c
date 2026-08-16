#include <stdio.h>

// Создание структуры Person 

struct Person {
    
    char* name;
    unsigned int age;

};


int main() {

    // создание переменной

    struct Person p1 = {"Ruslan", 30};
    struct Person* pt = &p1;

    // вывод структуры

    printf("Name: %s\n", p1.name);
    printf("Age: %u\n", p1.age);

    printf("-----------------------\n");

    // Выводим имя через указатель

    printf("Name pointer: %s\n", pt->name);

    // Выводим имя через разыменование

    printf("Name*: %s\n", (*pt).name);

    getchar();
    return 0;
}
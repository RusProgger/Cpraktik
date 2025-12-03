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
    printf("Age: %d\n", p1.age);

    return 0;
}
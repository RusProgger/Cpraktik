#include <stdio.h>

// создание структуры 2 вариант с помощью typedef 

typedef struct Person {
    
    char* name;
    unsigned int age;


} Person;


int main() {

    Person person = {"Alex", 32};

    printf("Name: %s\n", person.name);
    printf("Age: %u\n", person.age);

    Person* person_ptr = &person;

    printf("Name point: %s\n", person_ptr ->name);


    return 0;
}
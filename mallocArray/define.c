#include<stdlib.h>
#include<stdio.h>
#include <locale.h>

static long int number = 1975697086L;

int main() {
     	
    setlocale(LC_ALL, "");

    extern long long int numberTwo;
    extern long int num;
    extern long long number;

    printf("Вывод значения в файле define: %ld\n", number);
    printf("Вывод значения в файле ind: %lld\n", numberTwo);
    printf("Вывод значения в файле ind: %lld\n", num);


    getchar();

    return 0;
}
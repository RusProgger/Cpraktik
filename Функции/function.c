#include <stdio.h>

// Функция для вывода Hello World!!

void Hello() {
    puts("Hello World, is a function message");
}

// добавляем int

int Num(int a, int b) {
    return a + b;
}


// вывод чисел 

void intNumber(int a, int b) {
    printf("intNumber A = %d:\n", a );
    printf("%d\n", b);
}


int main() {

    puts("Hello, world!!");
    printf("Hello, world. Line - 2\n");

    // вывод сообщения через функцию 

    Hello();
    int resNum = Num(10, 50);
    printf("Num - %d\n", resNum);

    // вывод функции intNumber
    intNumber(10, 55);
    return 0;
}
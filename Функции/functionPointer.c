#include <stdio.h>

void messageNumber(int a, int b, int c, int* outA, int* outB, int* outC) {
    *outA = a;
    *outB = b;
    *outC = c;
}

int add(int a, int b) {
    return a + b;
}


float fl(float d, float c) {
    return d / c;
}



int main() {

    int a, b, c, d;

    messageNumber(10, 55, 40, &a, &b, &c);
    messageNumber(100, 155, 490, &a, &b, &c);
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    int res = add(10, 55);
    // вывод функции add

    printf("Output function add: %d\n", res);

    // float function

    

    return 0;
}
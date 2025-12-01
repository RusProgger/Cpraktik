#include <stdio.h>

void messageNumber(int a, int b, int c, int* outA, int* outB, int* outC) {
    *outA = a;
    *outB = b;
    *outC = c;
}

int add(int a, int b) {
    return a + b;
}



int main() {

    int a, b, c;

    messageNumber(10, 55, 40, &a, &b, &c);
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    int res = add(10, 55);
    // 

    return 0;
}
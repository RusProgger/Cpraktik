#include <stdio.h>
#include <stdlib.h>

int main() {

    int a = 10;
    int b = 15;

    unsigned int num = 100;
    double num_2 = 19.45335;

    float x2 = 2.67f;

    printf("%d\n", a);
    printf("%.5f\n", num_2);

    printf("-------------------------\n");

    printf("%1.1f\n", a + 0.0); // 10.0


    printf("Hello, world!\n");
    getchar();
    return 0;
}
//#include <stdlib.h>
#include <stdio.h>


int main() {

    int tableN;
    const int tableMax = 5;

    scanf("%d", &tableN);

    int titleTable = (int)tableN / (int)tableMax;

    printf("%d", titleTable);

    getchar();
    return 0;
}

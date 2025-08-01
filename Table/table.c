#include <stdlib.h>

int main() {

    int tableN;
    int tableMax = 4;

    scanf("%d", &tableN);

    int titleTable = (int)tableN / (int)tableMax;

    printf("%d", titleTable);

    return 0;
}

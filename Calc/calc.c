#include <stdio.h>

int main() {
   
    int number, number2;

    printf("Number: ");
    scanf("%d", &number);

    printf("Number 2: ");

    scanf("%d", &number2);

    int res = number + number2;

    printf("%d\n", res);

    return 0;
}
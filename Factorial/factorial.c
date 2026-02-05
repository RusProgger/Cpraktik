// Факториал числа

#include <stdio.h>

// Реализовать функцию 
int Fact(int n) {

    int fact_res = 1;

    for(int i = 1; i <= n; i++ ) {
        fact_res *= i;
    }

    return fact_res;
}

int main() {

    int factor_number;

    // Ввод пользователя
    printf("Enter number: ");

    // Проверка условий если пользователь ввел не число

    if(scanf_s("%d", &factor_number) != 1) {
        
    }

    // scanf_s("%d", &factor_number);

    int result_factorial = Fact(factor_number);

    printf("%d! = %d\n", factor_number, result_factorial);
    getchar();
    return 0;
}
// Без использования цикла выведи последний элемент, не указывая индекс вручную, используя sizeof()

#include <stdio.h>

int main() {

    int arr[] = {5, 10, 15, 20, 25};

    // int count = sizeof(arr) / sizeof(arr[0]);

    // printf("%d\n", arr[count - 1]);

    printf("%d\n", arr[sizeof(arr) / sizeof(arr[0]) - 1]);

    getchar();
    return 0;
}
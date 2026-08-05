// замени только последний элемент на 1000, но не используй число 5 в индексе.

#include <stdio.h>

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6};

    int count = sizeof(arr) / sizeof(arr[0]);

    arr[count - 1] = 1000;

    for(int i = 0; i < count; i++) {
        if(arr[i] == 5) {
            continue;
        }
        printf("Arr: %d\n", arr[i]);
    }

    getchar();
    return 0;
}
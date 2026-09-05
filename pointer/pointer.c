#include <stdio.h>

int main() {

    int num = 10; 
    int* num_ptr = &num;

    printf("Pointer: %d\n", *num_ptr);
    printf("Adress: 0x%p\n", (void*)num_ptr);


    getchar();
    return 0;
}
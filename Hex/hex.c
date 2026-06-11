#include <stdio.h>

int main() {

    int number = 0;
    int symbol;

    printf("Enter number: ");
    scanf_s("%d", &number);

    // clear buffer
    while ((symbol = getchar()) != '\n' && symbol != EOF);

   // If number is negative, print error message

    if(number < 0) {
        printf("Error. Negative number.\n");
    } else {
        printf("Number: %#08x\n", number);
        // Add adress
        printf("Adress: %p\n", (void *)&number);
    }


    // pause 
    printf("Press Enter to exit...");
    getchar();
    return 0;
}
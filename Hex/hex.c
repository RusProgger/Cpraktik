#include <stdio.h>

int main() {

    int number = 0;
    int symbol;

    printf("Enter number: ");
    // scanf_s("%d", &number);

    // Validate user input

    if(scanf_s("%d", &number) != 1) {
        printf("Invalid error.\n");
        return 1;
    }

    // clear buffer
    while ((symbol = getchar()) != '\n' && symbol != EOF);

   // If number is negative, print error message

    if(number < 0) {
        printf("Error. Negative number.\n");
    } else {
        printf("Number: %#08x\n", number);
        // Add adress
        printf("Address: %p\n", (void *)&number);
    }


    // pause 
    printf("Press Enter to exit...");
    getchar();
    return 0;
}
#include <stdio.h>
#include <windows.h>

int main() {
    int timer;
    printf("Enter timer of number: ");
    scanf("%d", &timer);

    if (timer < 0) {
        printf("Error. Minimum number 1.");
        return 0;
    } else {

        for(int i = timer; i >= 1; i--) {
            printf("Timer: %d   \r", i);
            fflush(stdout);
            Sleep(1000);
        }
        printf("Timer over!");
    }
}




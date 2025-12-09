#include <stdio.h>
#include <Windows.h>

void TimeStart() {
    for(int i = 1; i <= 10; i++) {
        printf("\rStart: %d", i);
        fflush(stdout);
        Sleep(1000);
    }
}

int main() {

    TimeStart();
    printf("\nExit");

}
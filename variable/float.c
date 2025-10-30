#include <stdio.h>

int main() {

    double fn = 4.7744457;
    printf("%.7f\n", fn); // все ок результат точный.


    float fn1 = 4.7744457;
    printf("%.7f\n", fn1); // float округляет только до 7 цифр. 


    double numberBig = 6.257366568543;

    printf("%.12f\n", numberBig);
 

    return 0;
}
#include <stdio.h>

double basel() {
    int i;
    double s = 0;
    double term;

    for (i = 1; i <= 100; i++) {
        term = 1.0 / (i * i);
        s = s + term;
    }

    return s;
}

int main() {
    printf("The sum is: %f\n", basel());

    return 0;
}

#include <stdio.h>

int sum() {
    int i;
    int s = 0;

    for (i = 1; i <= 100; i++) {
        s = s + i;
    }

    return s;
}

int main() {
    printf("The sum is: %d\n", sum());

    return 0;
}
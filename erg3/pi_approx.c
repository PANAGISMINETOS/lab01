#include <stdio.h>
#include <math.h>


int pi_approx() {
    int i = 1;
    double sum = 0.0;  
    do {
        sum += 1.0 / (i * i);
        i++;
    } while (i <= 100);
    double pi = sqrt(6.0 * sum);
    printf  ("%lf\n", pi);
}

int main() {
    pi_approx();
    return 0;
}
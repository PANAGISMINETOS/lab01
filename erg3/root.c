#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    srand(time(NULL));
    double a = (double)rand() / RAND_MAX;
    double b = (double)rand() / RAND_MAX;
    double c = (double)rand() / RAND_MAX;
    printf("Οι συντελεστές του τριωνύμου είναι:\n");
    printf("a = %lf\n", a);
    printf("b = %lf\n", b);
    printf("c = %lf\n", c);
    double delta = (b * b) - (4.0 * a * c);
    printf("%lf\n", delta);
    if (delta > 0) {
        double x1 = (-b + sqrt(delta)) / (2.0 * a);
        double x2 = (-b - sqrt(delta)) / (2.0 * a);
        printf("x1 = %lf\n", x1);
        printf("x2 = %lf\n", x2);
    } 
    else if (delta == 0) {
        double x = -b / (2.0 * a);
        printf("x = %lf\n", x);
    } 
    else {
        printf("Το τριώνυμο δεν έχει πραγματικές ρίζες (η διακρίνουσα είναι αρνητική).\n");
    }

    return 0;
}
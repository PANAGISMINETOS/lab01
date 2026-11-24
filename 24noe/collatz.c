#include <stdio.h>

int collatz_it(int n);
int collatz(int n);
int main(void) {
    printf("give me a natural number: ");
    int counter_rec;
    int n;
    scanf("%d", &n);
    if ((counter_rec == collatz(n)) == -1){
        printf("%d is negative\n", n);
    }
    else { 
        printf("recursive result: %d\n", counter_rec);
    }

}




int isodd(int n) {
    return (n % 2 != 0);
}


int collatz_it(int n) {
    if (n < 1) return -1;
    if (n == 1) return 0;
    int counter = 0;
    while(n =! 1) {
        counter++ ;
        if (!isodd(n)) {
            n = n/2;
        }
        else 
            n = 3 * n + 1;

    }
}
    


int collatz(int n) {
    if (n < 1) return -1;
    if (n == 1) return 0;
    printf("n = %d\n" , n);
    int orginal_n = n;
    if (isodd(n)){
        n = n*3 + 1;
    } 
    else
        n = n / 2;
    int rest_collatz = collatz(n);
    printf("%d's result = 1 + %d\n",orginal_n,rest_collatz);
    return 1 + collatz(n);
    }





#include <stdio.h>

int collatz_it(long long int );
int collatz(long long int n);

int main(void) {
    printf("give me a natural number: ");
    int counter_rec;
   long long int n;
    scanf("%lld", &n);
    if ((counter_rec == collatz(n)) == -1){
        printf("%lld is negative\n", n);
    }
    else { 
        printf("recursive result: %lld\n", counter_rec);
    }

}




int isodd(long long int n) {
    return (n % 2 != 0);
}


int collatz_it(long long int n) {
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
    


int collatz(long long int n) {
    if (n < 1) return -1;
    if (n == 1) return 0;
    printf("n = %lld\n" , n);
    int orginal_n = n;
    if (isodd(n)){
        n = n*3 + 1;
    } 
    else
        n = n / 2;
    int rest_collatz = collatz(n);
    printf("%d's result = 1 + %lld\n",orginal_n,rest_collatz);
    return 1 + collatz(n);
    }





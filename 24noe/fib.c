#include <stdio.h>
int fib(int);


int main(void){
    printf ("give n: ");
    int n = 0;
    scanf("%d" , &n);
    printf("fib(%d) = %d\n",n, fib(n));




}

//sinartisi
int fib(int n) {
if (n < 0) return -1;
if (n == 0) return 0;
if (n == 1) return 1;
int result = fib(n-1) + fib(n-2);
printf("fib(%d) = %d\n",n,result);
return result;
}
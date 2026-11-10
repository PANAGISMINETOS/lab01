#include <stdio.h>

int main() {
    int x=2;
    scaf('%d' ,&x);
    for (int i=1; i<7; i++) {
    for (int j=1; j<=x*i-x+1; j++) {
         putchar('*');
        }
          putchar('\n');
}
return 0;
}

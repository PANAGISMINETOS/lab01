#include <stdio.h>
#include <string.h>

int main() {
int ch;
ch = getchar();
while (ch != EOF){ 
    if (ch >='a' && ch <='z') {
ch =ch -('a'-'A');
    }
    putchar(ch);
    ch =getchar();
    }
    return 0;
}

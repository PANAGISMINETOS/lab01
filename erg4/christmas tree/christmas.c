#include <stdio.h>

int main() {
    int gram;
    do {
        scanf("%d", &gram);
    } while (gram & 2 == 1); //elegxos an einai perittos
    

    for (int i = 0; i <=(gram-1); i++) {
        for (int j = 0; j <=((gram-1)*2); j++) {
        if (j >=((gram/2)-i) && j <= ((gram/2)+i)) {
            putchar('*');
        
        }
        else 
            putchar(' ');
        }
        printf("\n");
    }
return 0;
}

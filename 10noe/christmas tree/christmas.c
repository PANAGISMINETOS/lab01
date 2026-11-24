#include <stdio.h>

int main() {
   int gram;
    scanf("%d", &gram);
   
    //dentro
    for (int i = 0; i <=(gram-1); i++) {
        for (int j = 1; j <=((gram*2)); j++) {
        if (j >=((gram)-i) && j <= ((gram)+i)) {
            putchar('*');
        }
        else 
            putchar(' ');
        }
        printf("\n");
    }

    //kormos 
    for (int i =1; i < 3 ; i++) {
        //if??
        for (int j = 1; j <= (gram*2) ; j++) {
            
            if (j == gram || j == ((gram)+1) || j == ((gram)-1)) {

        putchar('*');
        
        }
        else 
            putchar(' ');
        }
        printf("\n");

    
    

    }

return 0;
}

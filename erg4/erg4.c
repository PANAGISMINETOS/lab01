#include <stdio.h>
#include <string.h>




int main(void)
{
char hw_str[] ={ 'H' , 'E' , 'L' , 'l' , 'o' ,' ' , 'w' , 'O' , 'r' ,'l' ,'D' , '\n'};
     

for  (unsigned char i = 33; i < 137;i++)   {
    printf ("Char: %c, value: %d,in hex: %x\n", i,i,i);
}
return 0;

}
#include <stdio.h>
#include <math.h>

int main () {
  double a;
 double b; 
  double c;   
 printf("δωσε πλευρα 1:\n");
  scanf("%lf",&a);
    printf("δωσε πλευρα 2:\n");
  scanf("%lf",&b);
 printf("το εμβαδον ειναι: %f\n",(((a*b)/2)));
  c = sqrt((a*a)+(b*b));
 printf("η περιμετρος ειναι: %f\n",a+b+c);
  return 0;

 }


